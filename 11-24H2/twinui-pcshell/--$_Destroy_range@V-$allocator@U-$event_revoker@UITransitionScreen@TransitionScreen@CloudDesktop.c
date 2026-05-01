/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAXPEAU?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAU12@AEAV?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x180654F40
 * Callers:
 *     ??1BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180655268 (--1BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18065543C (--1SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@?$vector@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@AEAAPEAU?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAU23@$$QEAU23@@Z @ 0x180667DAC (--$_Emplace_reallocate@U-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@I.c)
 *     ??$_Uninitialized_move@PEAU?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAPEAU?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAU12@0PEAU12@AEAV?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x180667F44 (--$_Uninitialized_move@PEAU-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shel.c)
 *     ?clear@?$vector@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAAXXZ @ 0x180669B48 (-clear@-$vector@U-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal.c)
 *     _std::vector_winrt::event_revoker_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen__std::allocator_winrt::event_revoker_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen_____::_Emplace_reallocate_winrt::event_revoker_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen____::_1_::catch$2 @ 0x1807032E8 (_std--vector_winrt--event_revoker_winrt--Windows--Internal--Shell--CloudDesktop--TransitionScree.c)
 * Callees:
 *     ??1?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180655140 (--1-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::~event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>(v3);
      v3 += 24LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
