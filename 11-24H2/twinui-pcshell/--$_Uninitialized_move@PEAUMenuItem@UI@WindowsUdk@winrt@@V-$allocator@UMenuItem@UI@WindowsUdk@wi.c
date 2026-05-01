/*
 * XREFs of ??$_Uninitialized_move@PEAUMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801CD8C4
 * Callers:
 *     ??$_Emplace_reallocate@UMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU2345@$$QEAU2345@@Z @ 0x1801D4AA8 (--$_Emplace_reallocate@UMenuItem@UI@WindowsUdk@winrt@@@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V.c)
 *     ??$_Emplace_reallocate@AEBURegistrationData@Shell@Internal@Windows@winrt@@@?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAPEAURegistrationData@Shell@Internal@Windows@winrt@@QEAU23456@AEBU23456@@Z @ 0x18049B548 (--$_Emplace_reallocate@AEBURegistrationData@Shell@Internal@Windows@winrt@@@-$vector@URegistratio.c)
 *     ??$_Emplace_reallocate@AEBUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@AEAAPEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@QEAU23456@AEBU23456@@Z @ 0x1805B0B6C (--$_Emplace_reallocate@AEBUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@-$vector@USuggest.c)
 *     ??$_Emplace_reallocate@AEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAAPEAUUri@Foundation@Windows@winrt@@QEAU2345@AEBU2345@@Z @ 0x1805C38EC (--$_Emplace_reallocate@AEBUUri@Foundation@Windows@winrt@@@-$vector@UUri@Foundation@Windows@winrt.c)
 *     ??$_Emplace_reallocate@UIAsyncAction@Foundation@Windows@winrt@@@?$vector@UIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@AEAAPEAUIAsyncAction@Foundation@Windows@winrt@@QEAU2345@$$QEAU2345@@Z @ 0x1805FC5F8 (--$_Emplace_reallocate@UIAsyncAction@Foundation@Windows@winrt@@@-$vector@UIAsyncAction@Foundatio.c)
 *     ??$_Emplace_reallocate@AEBUMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU2345@AEBU2345@@Z @ 0x1805FE4C0 (--$_Emplace_reallocate@AEBUMenuItem@UI@WindowsUdk@winrt@@@-$vector@UMenuItem@UI@WindowsUdk@winrt.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801CDA40 (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 */

winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *__fastcall std::_Uninitialized_move<winrt::WindowsUdk::UI::MenuItem *>(
        __int64 *a1,
        __int64 *a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3)
{
  __int64 v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *(_QWORD *)a3 = v4;
    a3 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)((char *)a3 + 8);
    ++a1;
  }
  std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(a3);
  return a3;
}
