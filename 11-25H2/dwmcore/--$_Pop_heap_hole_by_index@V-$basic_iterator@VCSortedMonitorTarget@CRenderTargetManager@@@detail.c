/*
 * XREFs of ??$_Pop_heap_hole_by_index@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@VCSortedMonitorTarget@CRenderTargetManager@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@_J1$$QEAVCSortedMonitorTarget@CRenderTargetManager@@U?$less@X@0@@Z @ 0x180268198
 * Callers:
 *     ??$_Make_heap_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0U?$less@X@0@@Z @ 0x180267F04 (--$_Make_heap_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U.c)
 *     ??$_Sort_heap_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0U?$less@X@0@@Z @ 0x18026828C (--$_Sort_heap_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Pop_heap_hole_by_index<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,CRenderTargetManager::CSortedMonitorTarget,std::less<void>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r10
  __int64 v5; // rdi
  __int64 i; // r11
  __int64 result; // rax
  __int64 j; // rdx
  __int64 v10; // rdx

  v4 = a2;
  v5 = (a3 - 1) >> 1;
  for ( i = a2; i < v5; v4 = i )
  {
    i = 2 * i + 2LL - (*(_QWORD *)(*a1 + 32 * i + 40) < *(_QWORD *)(*a1 + 32 * i + 24));
    *(_OWORD *)(*a1 + 16 * v4) = *(_OWORD *)(*a1 + 16 * i);
  }
  if ( i == v5 && (a3 & 1) == 0 )
  {
    *(_OWORD *)(*a1 + 16 * v4) = *(_OWORD *)(*a1 + 16 * a3 - 16);
    v4 = a3 - 1;
  }
  result = *a1;
  for ( j = v4 - 1; ; j = v10 - 1 )
  {
    v10 = j >> 1;
    if ( a2 >= v4 || *(_QWORD *)(result + 16 * v10 + 8) >= *(_QWORD *)(a4 + 8) )
      break;
    *(_OWORD *)(result + 16 * v4) = *(_OWORD *)(result + 16 * v10);
    v4 = v10;
  }
  *(_OWORD *)(result + 16 * v4) = *(_OWORD *)a4;
  return result;
}
