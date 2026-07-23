/*
 * XREFs of KsepApplyShimsToDriver @ 0x14073D2D4
 * Callers:
 *     KseDriverLoadImage @ 0x14094187C (KseDriverLoadImage.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KsepLogInfo @ 0x140488AF8 (KsepLogInfo.c)
 *     KsepLogError @ 0x140488B28 (KsepLogError.c)
 *     KsepDebugPrint @ 0x1404CC7D8 (KsepDebugPrint.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     KsepPatchDriverImportsTable @ 0x14073D5B4 (KsepPatchDriverImportsTable.c)
 */

__int64 __fastcall KsepApplyShimsToDriver(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 i; // rbp
  __int64 v9; // rcx
  int v10; // edi
  unsigned int v11; // edi
  void *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // [rsp+20h] [rbp-38h]

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  for ( i = 0LL; (unsigned int)i < a4; i = (unsigned int)(i + 1) )
  {
    v9 = *(_QWORD *)(a3 + 80 * i + 72);
    if ( (*(_DWORD *)(v9 + 28) & 4) == 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v9 + 16) + 40LL) )
      {
        LODWORD(v18) = *(_DWORD *)(a1 + 120);
        v10 = guard_dispatch_icall_no_overrides(a2, *(_QWORD *)(a1 + 48));
        if ( v10 < 0 )
        {
          v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140F0F684[2 * v14] = v10;
          KsepHistoryErrors[2 * v14] = 459392;
          if ( (KsepDebugFlag & 2) != 0 )
            KsepDebugPrint(
              8LL,
              (int)"KSE: Driver blocked with [%ws]: 0x%x\n",
              *(_QWORD *)(a2 + 8),
              (unsigned int)v10,
              v18);
          KsepLogError(
            8LL,
            (__int64)"KSE: Driver blocked with [%ws]: 0x%x\n",
            *(_QWORD *)(a2 + 8),
            (unsigned int)v10,
            v18);
          return (unsigned int)-1073740948;
        }
      }
      v11 = KsepPatchDriverImportsTable(a1, *(_QWORD *)(*(_QWORD *)(a3 + 80 * i + 72) + 16LL));
      if ( (v11 & 0x80000000) != 0 )
      {
        v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
        dword_140F0F684[2 * v15] = v11;
        KsepHistoryErrors[2 * v15] = 459411;
        if ( (KsepDebugFlag & 2) != 0 )
          KsepDebugPrint(8LL, (int)"KSE: Failed to patch driver [%ws]: 0x%x\n", *(_QWORD *)(a2 + 8), v11);
        KsepLogError(8LL, (__int64)"KSE: Failed to patch driver [%ws]: 0x%x\n", *(_QWORD *)(a2 + 8), v11, v18);
        return v11;
      }
      v12 = *(void **)(*(_QWORD *)(a3 + 80 * i + 72) + 32LL);
      if ( v12 )
        PsReferenceSiloContext(v12);
      v13 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
      HIDWORD(KsepHistoryMessages[v13]) = 0;
      LODWORD(KsepHistoryMessages[v13]) = 459430;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(
          8LL,
          (int)"KSE: Applied shim [0x%08X] to driver [%ws]\n",
          **(unsigned int **)(*(_QWORD *)(*(_QWORD *)(a3 + 80 * i + 72) + 16LL) + 8LL),
          *(_QWORD *)(a2 + 8));
      KsepLogInfo(
        8LL,
        (__int64)"KSE: Applied shim [0x%08X] to driver [%ws]\n",
        **(unsigned int **)(*(_QWORD *)(*(_QWORD *)(a3 + 80 * i + 72) + 16LL) + 8LL),
        *(_QWORD *)(a2 + 8),
        v18);
    }
  }
  v16 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
  HIDWORD(KsepHistoryMessages[v16]) = 0;
  LODWORD(KsepHistoryMessages[v16]) = 459434;
  if ( (KsepDebugFlag & 1) != 0 )
    KsepDebugPrint(8LL, (int)"KSE: Successfully applied shims to driver [%ws]\n", *(_QWORD *)(a2 + 8));
  KsepLogInfo(8LL, (__int64)"KSE: Successfully applied shims to driver [%ws]\n", *(_QWORD *)(a2 + 8));
  return 0;
}
