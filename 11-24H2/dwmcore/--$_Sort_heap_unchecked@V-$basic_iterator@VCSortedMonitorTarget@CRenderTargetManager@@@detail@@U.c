/*
 * XREFs of ??$_Sort_heap_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0U?$less@X@0@@Z @ 0x18025E350
 * Callers:
 *     ??$_Sort_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0_JU?$less@X@0@@Z @ 0x1801042CC (--$_Sort_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U-$les.c)
 * Callees:
 *     ??$_Pop_heap_hole_by_index@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@VCSortedMonitorTarget@CRenderTargetManager@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@_J1$$QEAVCSortedMonitorTarget@CRenderTargetManager@@U?$less@X@0@@Z @ 0x18025E25C (--$_Pop_heap_hole_by_index@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail.c)
 */

signed __int64 __fastcall std::_Sort_heap_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
        _QWORD *a1,
        __int64 *a2)
{
  _OWORD *v2; // r9
  __int64 v3; // r8
  __int128 v6; // xmm1
  __int128 *v7; // r8
  __int128 v8; // xmm0
  signed __int64 result; // rax
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF
  _OWORD *v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = (_OWORD *)*a1;
  v3 = *a2;
  while ( 1 )
  {
    result = (v3 - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( result < 32 )
      break;
    v6 = *v2;
    v7 = (__int128 *)(v3 - 16);
    v11 = v2;
    v8 = *v7;
    *v7 = v6;
    v10 = v8;
    std::_Pop_heap_hole_by_index<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,CRenderTargetManager::CSortedMonitorTarget,std::less<void>>(
      (__int64 *)&v11,
      0LL,
      v7 - v2,
      (__int64)&v10);
    v3 = *a2 - 16;
    *a2 = v3;
    v2 = (_OWORD *)*a1;
  }
  return result;
}
