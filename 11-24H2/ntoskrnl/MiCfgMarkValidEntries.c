/*
 * XREFs of MiCfgMarkValidEntries @ 0x1409E4A6C
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1409E3F70 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     CfgAddressToBitState @ 0x1404A97CC (CfgAddressToBitState.c)
 *     MiPopulateCfgBitMap @ 0x14091C830 (MiPopulateCfgBitMap.c)
 *     MiSelectCfgBitMap @ 0x1409E4CC8 (MiSelectCfgBitMap.c)
 *     MiIsProcessCfgExportSuppressionEnabled @ 0x140A71924 (MiIsProcessCfgExportSuppressionEnabled.c)
 *     MiValidateUserCallTarget @ 0x140AB1148 (MiValidateUserCallTarget.c)
 */

__int64 __fastcall MiCfgMarkValidEntries(
        __int64 a1,
        unsigned __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v11; // r12
  unsigned int v12; // r14d
  unsigned int i; // edx
  __int64 v14; // r9
  __int64 v15; // r11
  __int64 v16; // r13
  unsigned int j; // edi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdi
  char *v23; // r15
  int v24; // ebx
  __int64 v25; // rdx
  _KPROCESS *Process; // r12
  int IsProcessCfgExportSuppressionEnabled; // eax
  int v28; // eax
  bool v29; // zf
  __int64 v30; // rcx
  unsigned int SessionId; // eax
  unsigned __int64 v32; // rax
  unsigned int v33; // [rsp+40h] [rbp-20h] BYREF
  __int128 v34; // [rsp+48h] [rbp-18h] BYREF
  _DWORD *v35; // [rsp+58h] [rbp-8h]
  __int64 *v37; // [rsp+B0h] [rbp+50h] BYREF

  v37 = a3;
  LODWORD(v35) = 0;
  v33 = 0;
  *a6 = 0;
  v11 = a1;
  v34 = 0LL;
  if ( (((unsigned __int16)a3 | (unsigned __int16)a2) & 0xFFF) != 0 )
    return 3221225485LL;
  v12 = a5;
  for ( i = 1; i < a5; ++i )
  {
    if ( *(_QWORD *)(a4 + 16LL * (i - 1)) > *(_QWORD *)(a4 + 16LL * i) )
      return 3221225485LL;
  }
  if ( *(_QWORD *)(a4 + 16LL * (a5 - 1)) >= (unsigned __int64)a3 )
    return 3221225485LL;
  v16 = MiSelectCfgBitMap(a1, a2, 0LL);
  for ( j = v15; j < v12; ++j )
  {
    if ( (*(_QWORD *)(a4 + 16LL * j) & 0xFLL) != *(_DWORD *)(v16 + 24) )
      return 3221225485LL;
    v19 = *(_QWORD *)(a4 + 16LL * j + 8);
    if ( (v19 & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      return 3221225485LL;
    if ( (v19 & 8) != 0 || (v19 & 0x10) != 0 )
      return 3221225659LL;
    if ( (a7 & 1) != 0 && (v19 & 1) != 0 )
      return 3221225506LL;
    if ( (v19 & 4) != 0 )
    {
      if ( !(unsigned int)MiIsProcessCfgExportSuppressionEnabled(v11) )
        return 3221225506LL;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (unsigned int)CfgAddressToBitState(v25 + a2, *(const signed __int64 **)v16) != 2
        || (IsProcessCfgExportSuppressionEnabled = MiIsProcessCfgExportSuppressionEnabled(Process),
            v15 = 0LL,
            !IsProcessCfgExportSuppressionEnabled) )
      {
        v28 = MiValidateUserCallTarget(a2 + *(_QWORD *)(a4 + 16LL * j), v16);
        v15 = 0LL;
        if ( !v28 )
          return 3221225506LL;
      }
      v11 = a1;
    }
  }
  if ( *a6 == v12 )
    return 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(v11 + 1040) + 1192LL) == v15 )
    return 3221225541LL;
  v20 = MiObtainReferencedVadEx(a2, 0LL, (int *)&v33, v14);
  v22 = v20;
  if ( !v20 )
    return v33;
  v23 = (char *)v37 + a2 - 1;
  if ( (unsigned __int64)v23 <= (((*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) << 12) | 0xFFF)
    && (!a8
     || (v29 = (*(_DWORD *)(v20 + 48) & 0x200000) == 0, v37 = 0LL, v29)
     && **(_QWORD **)(v20 + 72) == MiSectionControlArea(a8)
     && (v30 = *(unsigned int *)(v22 + 24), (v30 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32)) << 12 == a2)
     && (MiGetProtoPteAddress(v22, v30 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32), 0, (__int64 *)&v37),
         SessionId = PsGetSessionIdEx(v11),
         v32 = MiStartingOffset(v37, *(_QWORD *)(v22 + 80), SessionId),
         v32 == a9)) )
  {
    v35 = a6;
    LODWORD(v34) = v12;
    *((_QWORD *)&v34 + 1) = a4;
    v24 = MiPopulateCfgBitMap(
            (_QWORD *)v16,
            (unsigned __int64)&v34,
            v21,
            1,
            a2,
            (unsigned __int64)(v23 + 4095) & 0xFFFFFFFFFFFFF000uLL,
            0LL);
    if ( v24 >= 0 )
      v24 = 0;
  }
  else
  {
    v24 = -1073741811;
  }
  MiUnlockAndDereferenceVad((PVOID)v22);
  return (unsigned int)v24;
}
