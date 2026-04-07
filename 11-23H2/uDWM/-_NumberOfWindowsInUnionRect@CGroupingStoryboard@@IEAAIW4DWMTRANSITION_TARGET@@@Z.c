/*
 * XREFs of ?_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z @ 0x1800DDE84
 * Callers:
 *     ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800DE08C (-_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z @ 0x1800DD994 (-_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z.c)
 */

__int64 __fastcall CGroupingStoryboard::_NumberOfWindowsInUnionRect(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v5; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(v2) = 0;
  v5 = 0;
  if ( (int)CGroupingStoryboard::_GroupingIndexByTarget(a1, a2, &v5) >= 0 )
    return (unsigned int)((__int64)(*(_QWORD *)(a1[16] + 48LL * v5 + 32) - *(_QWORD *)(a1[16] + 48LL * v5 + 24)) >> 4);
  return (unsigned int)v2;
}
