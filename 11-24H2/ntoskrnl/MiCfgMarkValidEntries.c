/*
 * XREFs of MiCfgMarkValidEntries @ 0x1409E9AAC
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1409E8FB0 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiStartingOffset @ 0x140244020 (MiStartingOffset.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     MiGetProtoPteAddress @ 0x140301740 (MiGetProtoPteAddress.c)
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     CfgAddressToBitState @ 0x1404AEDF4 (CfgAddressToBitState.c)
 *     MiPopulateCfgBitMap @ 0x1408F9F54 (MiPopulateCfgBitMap.c)
 *     MiSelectCfgBitMap @ 0x1409E9D08 (MiSelectCfgBitMap.c)
 *     MiIsProcessCfgExportSuppressionEnabled @ 0x140A77804 (MiIsProcessCfgExportSuppressionEnabled.c)
 *     MiValidateUserCallTarget @ 0x140AB6E70 (MiValidateUserCallTarget.c)
 */

__int64 __fastcall MiCfgMarkValidEntries(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
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
  __int64 v14; // r11
  __int64 v15; // r13
  unsigned int j; // edi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdi
  char *v22; // r15
  int v23; // ebx
  __int64 v24; // rdx
  _KPROCESS *Process; // r12
  int IsProcessCfgExportSuppressionEnabled; // eax
  int v27; // eax
  bool v28; // zf
  __int64 v29; // rcx
  unsigned int SessionId; // eax
  unsigned __int64 v31; // rax
  unsigned int v32; // [rsp+40h] [rbp-20h] BYREF
  __int128 v33; // [rsp+48h] [rbp-18h] BYREF
  _DWORD *v34; // [rsp+58h] [rbp-8h]
  unsigned __int64 *v36; // [rsp+B0h] [rbp+50h] BYREF

  v36 = a3;
  LODWORD(v34) = 0;
  v32 = 0;
  *a6 = 0;
  v11 = a1;
  v33 = 0LL;
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
  v15 = MiSelectCfgBitMap(a1, a2, 0LL);
  for ( j = v14; j < v12; ++j )
  {
    if ( (*(_QWORD *)(a4 + 16LL * j) & 0xFLL) != *(_DWORD *)(v15 + 24) )
      return 3221225485LL;
    v18 = *(_QWORD *)(a4 + 16LL * j + 8);
    if ( (v18 & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      return 3221225485LL;
    if ( (v18 & 8) != 0 || (v18 & 0x10) != 0 )
      return 3221225659LL;
    if ( (a7 & 1) != 0 && (v18 & 1) != 0 )
      return 3221225506LL;
    if ( (v18 & 4) != 0 )
    {
      if ( !(unsigned int)MiIsProcessCfgExportSuppressionEnabled(v11) )
        return 3221225506LL;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (unsigned int)CfgAddressToBitState(v24 + a2, *(const signed __int64 **)v15) != 2
        || (IsProcessCfgExportSuppressionEnabled = MiIsProcessCfgExportSuppressionEnabled(Process),
            v14 = 0LL,
            !IsProcessCfgExportSuppressionEnabled) )
      {
        v27 = MiValidateUserCallTarget(a2 + *(_QWORD *)(a4 + 16LL * j), v15);
        v14 = 0LL;
        if ( !v27 )
          return 3221225506LL;
      }
      v11 = a1;
    }
  }
  if ( *a6 == v12 )
    return 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(v11 + 1040) + 1192LL) == v14 )
    return 3221225541LL;
  v19 = MiObtainReferencedVadEx(a2, 0LL, (int *)&v32);
  v21 = v19;
  if ( !v19 )
    return v32;
  v22 = (char *)v36 + a2 - 1;
  if ( (unsigned __int64)v22 <= (((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) << 12) | 0xFFF)
    && (!a8
     || (v28 = (*(_DWORD *)(v19 + 48) & 0x200000) == 0, v36 = 0LL, v28)
     && **(_QWORD **)(v19 + 72) == MiSectionControlArea(a8)
     && (v29 = *(unsigned int *)(v21 + 24), (v29 | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32)) << 12 == a2)
     && (MiGetProtoPteAddress(v21, v29 | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32), 0, &v36),
         SessionId = PsGetSessionIdEx(v11),
         v31 = MiStartingOffset((__int64 *)v36, *(_QWORD *)(v21 + 80), SessionId),
         v31 == a9)) )
  {
    v34 = a6;
    LODWORD(v33) = v12;
    *((_QWORD *)&v33 + 1) = a4;
    v23 = MiPopulateCfgBitMap(
            (_QWORD *)v15,
            (unsigned __int64)&v33,
            v20,
            1,
            a2,
            (unsigned __int64)(v22 + 4095) & 0xFFFFFFFFFFFFF000uLL,
            0LL);
    if ( v23 >= 0 )
      v23 = 0;
  }
  else
  {
    v23 = -1073741811;
  }
  MiUnlockAndDereferenceVad((PVOID)v21);
  return (unsigned int)v23;
}
