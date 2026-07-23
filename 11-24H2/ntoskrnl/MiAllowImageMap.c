/*
 * XREFs of MiAllowImageMap @ 0x14086D7E4
 * Callers:
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     SeGetTrustLabelAce @ 0x1403F9950 (SeGetTrustLabelAce.c)
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14041F2B0 (MiDereferenceControlAreaFile.c)
 *     MiGetControlAreaLoadConfig @ 0x14045AB84 (MiGetControlAreaLoadConfig.c)
 *     PsBlockNonCetBinaries @ 0x140774100 (PsBlockNonCetBinaries.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1407AC594 (EtwTimLogProhibitLowILImageMap.c)
 *     ObpGetObjectSecurity @ 0x14084FB10 (ObpGetObjectSecurity.c)
 *     ObReleaseObjectSecurityEx @ 0x14086C2C0 (ObReleaseObjectSecurityEx.c)
 *     SeQueryMandatoryLabel @ 0x14086DA0C (SeQueryMandatoryLabel.c)
 *     MiReferenceFileObjectForMap @ 0x140918140 (MiReferenceFileObjectForMap.c)
 *     EtwpTimLogMitigationForProcess @ 0x140A63DF0 (EtwpTimLogMitigationForProcess.c)
 */

__int64 __fastcall MiAllowImageMap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  bool v8; // al
  int v9; // edi
  _DWORD *ControlAreaLoadConfig; // rax
  int ObjectSecurity; // ebx
  int v12; // ebp
  bool v13; // al
  _QWORD *v15; // rbx
  __int64 *v16; // r8
  ULONG_PTR v17; // rsi
  __int64 v18; // r14
  unsigned __int8 v19; // di
  ULONG_PTR v20; // rbx
  int v21; // edi
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  char v23; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a1 + 1872);
  v22 = 0LL;
  v8 = (v4 & 0x100000) != 0;
  v9 = v4 & 0x80000;
  if ( (v4 & 0x80000) != 0 )
    v8 = 1;
  if ( v8 && (*(_BYTE *)(a2 + 40) & 3) != 0 )
  {
    v15 = (_QWORD *)MiReferenceFileObjectForMap(a2);
    if ( (*(_DWORD *)(v15[1] + 52LL) & 0x80000) == 0 )
    {
      v16 = (__int64 *)"\a";
      if ( v9 )
        v16 = MITIGATION_ENFORCE_PROHIBIT_REMOTE_IMAGE_MAP;
      EtwpTimLogMitigationForProcess(1LL, (unsigned int)(v9 != 0) + 1, v16, a1, 1);
      if ( v9 )
      {
        ObfDereferenceObjectWithTag(v15, 0x63536D4Du);
        return 3221225506LL;
      }
    }
    ObfDereferenceObjectWithTag(v15, 0x63536D4Du);
  }
  if ( !*(_BYTE *)(a4 + 50) )
    goto LABEL_7;
  ControlAreaLoadConfig = (_DWORD *)MiGetControlAreaLoadConfig(a3);
  if ( (*(_DWORD *)(a1 + 1872) & 4) != 0 && (!ControlAreaLoadConfig || (*ControlAreaLoadConfig & 1) == 0) )
    return 3221227014LL;
  if ( (*(_DWORD *)(a1 + 1876) & 0x200000) == 0 )
    goto LABEL_7;
  v19 = 0;
  if ( ControlAreaLoadConfig )
    v19 = (*(_BYTE *)ControlAreaLoadConfig & 0x40) != 0;
  v20 = MiReferenceControlAreaFile(a3);
  v21 = PsBlockNonCetBinaries(a1, *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a3 + 56LL) + 76LL) & 1, v19, v20 + 88);
  MiDereferenceControlAreaFile(a3, v20);
  if ( v21 >= 0 )
  {
LABEL_7:
    ObjectSecurity = 0;
    v12 = v4 & 0x200000;
    v13 = (v4 & 0x400000) != 0;
    if ( (v4 & 0x200000) != 0 )
      v13 = 1;
    if ( !v13 )
      return (unsigned int)ObjectSecurity;
    v23 = 0;
    v17 = MiReferenceControlAreaFile(a3);
    ObjectSecurity = ObpGetObjectSecurity((ULONG_PTR *)v17, (void **)&v22, &v23, 0);
    if ( ObjectSecurity < 0 )
    {
      ObjectSecurity = -1073741790;
    }
    else
    {
      v18 = v22;
      if ( (unsigned int)SeQueryMandatoryLabel(v22) <= 0x1000 && !SeGetTrustLabelAce(v18) )
        ObjectSecurity = -1073741790;
      ObReleaseObjectSecurityEx(v18, v23, v17);
      if ( ObjectSecurity != -1073741790 )
        goto LABEL_20;
    }
    EtwTimLogProhibitLowILImageMap((v12 != 0) + 1, a1, (unsigned __int16 *)(v17 + 88));
    if ( !v12 )
      ObjectSecurity = 0;
LABEL_20:
    MiDereferenceControlAreaFile(a3, v17);
    return (unsigned int)ObjectSecurity;
  }
  return (unsigned int)v21;
}
