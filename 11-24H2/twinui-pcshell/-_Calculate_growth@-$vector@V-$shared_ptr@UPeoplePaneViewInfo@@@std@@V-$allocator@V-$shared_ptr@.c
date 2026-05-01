/*
 * XREFs of ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x180218680
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@AEBV21@@Z @ 0x1801C941C (--$_Emplace_reallocate@AEBV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeop.c)
 *     ??$_Emplace_reallocate@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@$$QEAV21@@Z @ 0x18040F8B0 (--$_Emplace_reallocate@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeopleP.c)
 *     ??$_Emplace_reallocate@URect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAPEAURect@Foundation@Windows@@QEAU234@$$QEAU234@@Z @ 0x180469BDC (--$_Emplace_reallocate@URect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$allocato.c)
 *     ??$_Assign_counted_range@PEBURect@Foundation@Windows@winrt@@@?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@AEAAXPEBURect@Foundation@Windows@winrt@@_K@Z @ 0x18047B218 (--$_Assign_counted_range@PEBURect@Foundation@Windows@winrt@@@-$vector@URect@Foundation@Windows@w.c)
 *     ??$_Assign_counted_range@PEBUtagRECT@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXPEBUtagRECT@@_K@Z @ 0x1805A4C18 (--$_Assign_counted_range@PEBUtagRECT@@@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0xFFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 4;
  v4 = v3 >> 1;
  if ( v3 <= 0xFFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
