/*
 * XREFs of ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400ECF70
 * Callers:
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C69BC (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C9138 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1400CAC40 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1400ECAA8 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rbp
  int v7; // ebx
  __int64 v8; // rcx
  __int64 result; // rax

  v6 = a2;
  WdLogSingleEntry2(3LL, a3, a2);
  WdLogGlobalForLineNumber = 8455;
  if ( a2 )
  {
    v7 = a2 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 14LL, v6, 0LL);
        WdLogGlobalForLineNumber = 195;
      }
      v8 = a1 + 64;
    }
    else
    {
      v8 = a1 + 56;
    }
  }
  else
  {
    v8 = a1 + 48;
  }
  result = RtlAvlRemoveNode(v8, a3);
  *(_DWORD *)(a3 + 88) = 3;
  return result;
}
