/*
 * XREFs of ??$_Destroy_range@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@AEAV?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x180295B4C
 * Callers:
 *     ?GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AU?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@7@UWindowId@UI@67@@Z @ 0x180273284 (-GetSnappableWindowSuggestions@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Inter.c)
 *     ??$_Uninitialized_move@PEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@0PEAU123456@AEAV?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x180295AF4 (--$_Uninitialized_move@PEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@w.c)
 *     ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@X@?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@winrt@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@0@Z @ 0x1802993B4 (--$-0V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@USnappableWindowSuggestion@Platfo.c)
 *     ?GetSnappableWindowSuggestions@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@@impl@winrt@@UEAAHUstruct_Windows_UI_WindowId@23@PEAIPEAPEAUstruct_Windows_Internal_Shell_PlatformExtensions_SnappableWindowSuggestion@23@@Z @ 0x1802AF340 (-GetSnappableWindowSuggestions@-$produce@UDesktopSnapLayoutManager@factory_implementation@SnapCo.c)
 *     ?_Change_array@?$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXQEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@_K1@Z @ 0x1802BEA04 (-_Change_array@-$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@win.c)
 *     ??1?$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1802C3DC4 (--1-$vector@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@V-$alloc.c)
 *     ??1?$_Uninitialized_backout@PEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1802CFC24 (--1-$_Uninitialized_backout@PEAUSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Wind.c)
 *     _std::vector_winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion_std::allocator_winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion___::_Emplace_reallocate_winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion__::_1_::catch$2 @ 0x1806F8BAF (_std--vector_winrt--Windows--Internal--Shell--PlatformExtensions--SnappableWindowSu_ea_1806F8BAF.c)
 * Callees:
 *     ??_GSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z @ 0x180295B84 (--_GSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>>(
        winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *this,
        winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *a2)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *v3; // rbx
  void *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion::`scalar deleting destructor'(
                 v3,
                 (unsigned int)a2);
      v3 = (winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion *)((char *)v3 + 16);
    }
    while ( v3 != a2 );
  }
  return result;
}
