/*
 * XREFs of ?_Calculate_growth@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x180096CA4
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAPEAPEBVCDWMDisplay@@QEAPEBV2@AEBQEBV2@@Z @ 0x18004D698 (--$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDispl.c)
 *     ?_Clear_and_reserve_geometric@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAX_K@Z @ 0x180096C18 (-_Clear_and_reserve_geometric@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDisplay@@@std@@@std.c)
 *     ??$_Assign_counted_range@PEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAXPEBUUserResizeVisual@Transitions@Udwm@winrt@@_K@Z @ 0x1800E7AD4 (--$_Assign_counted_range@PEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisua.c)
 *     ??$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU2345@AEBU2345@@Z @ 0x1800E7DC8 (--$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Calculate_growth(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x1FFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 3;
  v4 = v3 >> 1;
  if ( v3 <= 0x1FFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
