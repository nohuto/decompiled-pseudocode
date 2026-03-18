/*
 * XREFs of MiAllowImageMap @ 0x140903D34
 * Callers:
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     SeGetTrustLabelAce @ 0x1403CE100 (SeGetTrustLabelAce.c)
 *     MiReferenceControlAreaFile @ 0x14042F960 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140432C40 (MiDereferenceControlAreaFile.c)
 *     MiGetControlAreaLoadConfig @ 0x140465A8C (MiGetControlAreaLoadConfig.c)
 *     PsBlockNonCetBinaries @ 0x140764510 (PsBlockNonCetBinaries.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x14079CCF4 (EtwTimLogProhibitLowILImageMap.c)
 *     MiReferenceFileObjectForMap @ 0x1408FF8F0 (MiReferenceFileObjectForMap.c)
 *     SeQueryMandatoryLabel @ 0x140903F5C (SeQueryMandatoryLabel.c)
 *     EtwpTimLogMitigationForProcess @ 0x140904814 (EtwpTimLogMitigationForProcess.c)
 *     ObReleaseObjectSecurityEx @ 0x140914900 (ObReleaseObjectSecurityEx.c)
 *     ObpGetObjectSecurity @ 0x1409160F0 (ObpGetObjectSecurity.c)
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
  __int64 v18; // rdx
  unsigned __int8 v19; // di
  ULONG_PTR v20; // rbx
  int v21; // edi

  v4 = *(_DWORD *)(a1 + 1872);
  v8 = (v4 & 0x100000) != 0;
  v9 = v4 & 0x80000;
  if ( (v4 & 0x80000) != 0 )
    v8 = 1;
  if ( v8 && (*(_BYTE *)(a2 + 40) & 3) != 0 )
  {
    v15 = MiReferenceFileObjectForMap(a2);
    if ( (*(_DWORD *)(v15[1] + 52LL) & 0x80000) == 0 )
    {
      v16 = MITIGATION_AUDIT_PROHIBIT_REMOTE_IMAGE_MAP;
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
    v17 = MiReferenceControlAreaFile(a3);
    ObjectSecurity = ObpGetObjectSecurity(v17);
    if ( ObjectSecurity < 0 )
    {
      ObjectSecurity = -1073741790;
    }
    else
    {
      if ( (unsigned int)SeQueryMandatoryLabel(0LL) <= 0x1000 && !SeGetTrustLabelAce(0LL) )
        ObjectSecurity = -1073741790;
      LOBYTE(v18) = 0;
      ObReleaseObjectSecurityEx(0LL, v18, v17);
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
