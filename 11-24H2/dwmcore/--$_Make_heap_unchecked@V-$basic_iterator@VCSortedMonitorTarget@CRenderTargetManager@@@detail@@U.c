/*
 * XREFs of ??$_Make_heap_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0U?$less@X@0@@Z @ 0x18025DFC8
 * Callers:
 *     ??$_Sort_unchecked@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@0_JU?$less@X@0@@Z @ 0x1801042CC (--$_Sort_unchecked@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@U-$les.c)
 * Callees:
 *     ??$_Pop_heap_hole_by_index@V?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@VCSortedMonitorTarget@CRenderTargetManager@@U?$less@X@std@@@std@@YAXV?$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail@@_J1$$QEAVCSortedMonitorTarget@CRenderTargetManager@@U?$less@X@0@@Z @ 0x18025E25C (--$_Pop_heap_hole_by_index@V-$basic_iterator@VCSortedMonitorTarget@CRenderTargetManager@@@detail.c)
 */

__int64 __fastcall std::_Make_heap_unchecked<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,std::less<void>>(
        __int64 *a1,
        _QWORD *a2,
        char a3)
{
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-38h]
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v5 = (*a2 - *a1) >> 4;
  v6 = (*a2 - *a1) >> 5;
  if ( v6 > 0 )
  {
    v7 = 16 * v6;
    do
    {
      v8 = v7;
      v12 = *a1;
      --v6;
      LOBYTE(v10) = a3;
      v7 -= 16LL;
      v11 = *(_OWORD *)(v12 + v8 - 16);
      result = std::_Pop_heap_hole_by_index<detail::basic_iterator<CRenderTargetManager::CSortedMonitorTarget>,CRenderTargetManager::CSortedMonitorTarget,std::less<void>>(
                 &v12,
                 v6,
                 v5,
                 &v11,
                 v10);
    }
    while ( v6 > 0 );
  }
  return result;
}
