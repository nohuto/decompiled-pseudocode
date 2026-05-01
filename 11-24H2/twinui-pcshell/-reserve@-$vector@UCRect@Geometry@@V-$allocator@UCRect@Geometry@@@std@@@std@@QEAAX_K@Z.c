/*
 * XREFs of ?reserve@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z @ 0x1805ACBF4
 * Callers:
 *     ?BuildOtherRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXJJJJIKAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805A9F24 (-BuildOtherRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXJJJJIKAEAV-$vector@UCRect.c)
 *     ?GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805AB614 (-GetOtherRects@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAXPEAUIApplicationView@@PEAUIIm.c)
 * Callees:
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802AFF8C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Reallocate@$0A@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAXAEA_K@Z @ 0x180469D40 (--$_Reallocate@$0A@@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@s.c)
 */

void __fastcall std::vector<Geometry::CRect>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 > (__int64)(a1[2] - *a1) >> 4 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    std::vector<Windows::Foundation::Rect>::_Reallocate<0>((__int64)a1, &v2);
  }
}
