/*
 * XREFs of ?_Calculate_growth@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1801D33BC
 * Callers:
 *     ??$_Emplace_reallocate@AEBN@?$vector@NV?$allocator@N@std@@@std@@AEAAPEANQEANAEBN@Z @ 0x1801D3170 (--$_Emplace_reallocate@AEBN@-$vector@NV-$allocator@N@std@@@std@@AEAAPEANQEANAEBN@Z.c)
 *     ??$_Emplace_reallocate@N@?$vector@NV?$allocator@N@std@@@std@@AEAAPEANQEAN$$QEAN@Z @ 0x1801D3260 (--$_Emplace_reallocate@N@-$vector@NV-$allocator@N@std@@@std@@AEAAPEANQEAN$$QEAN@Z.c)
 *     ??$_Emplace_reallocate@PEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAAPEAPEAUHWND__@@QEAPEAU2@$$QEAPEAU2@@Z @ 0x1801E6010 (--$_Emplace_reallocate@PEAUHWND__@@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@AE.c)
 *     ??$_Emplace_reallocate@AEBURegistrationData@Shell@Internal@Windows@winrt@@@?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAPEAURegistrationData@Shell@Internal@Windows@winrt@@QEAU23456@AEBU23456@@Z @ 0x18049B548 (--$_Emplace_reallocate@AEBURegistrationData@Shell@Internal@Windows@winrt@@@-$vector@URegistratio.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1804A00E0 (-_Clear_and_reserve_geometric@-$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V-.c)
 *     ?_Clear_and_reserve_geometric@?$vector@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x1805A7C4C (-_Clear_and_reserve_geometric@-$vector@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAAPEAUUri@Foundation@Windows@winrt@@QEAU2345@AEBU2345@@Z @ 0x1805C38EC (--$_Emplace_reallocate@AEBUUri@Foundation@Windows@winrt@@@-$vector@UUri@Foundation@Windows@winrt.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1805DA950 (-_Clear_and_reserve_geometric@-$vector@UUri@Foundation@Windows@winrt@@V-$allocator@UUri@Foundati.c)
 *     ??$_Assign_counted_range@PEBUMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAXPEBUMenuItem@UI@WindowsUdk@winrt@@_K@Z @ 0x1805FE378 (--$_Assign_counted_range@PEBUMenuItem@UI@WindowsUdk@winrt@@@-$vector@UMenuItem@UI@WindowsUdk@win.c)
 *     ??$_Emplace_reallocate@AEBUMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU2345@AEBU2345@@Z @ 0x1805FE4C0 (--$_Emplace_reallocate@AEBUMenuItem@UI@WindowsUdk@winrt@@@-$vector@UMenuItem@UI@WindowsUdk@winrt.c)
 *     ??$_Assign_counted_range@PEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAXPEBUhstring@winrt@@_K@Z @ 0x180617718 (--$_Assign_counted_range@PEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winr.c)
 *     ??$_Emplace_reallocate@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAPEAUhstring@winrt@@QEAU23@AEBU23@@Z @ 0x18061788C (--$_Emplace_reallocate@AEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@.c)
 *     ??$_Assign_counted_range@PEBUWindowId@UI@Windows@winrt@@@?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@AEAAXPEBUWindowId@UI@Windows@winrt@@_K@Z @ 0x180664F54 (--$_Assign_counted_range@PEBUWindowId@UI@Windows@winrt@@@-$vector@UWindowId@UI@Windows@winrt@@V-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Calculate_growth(
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
