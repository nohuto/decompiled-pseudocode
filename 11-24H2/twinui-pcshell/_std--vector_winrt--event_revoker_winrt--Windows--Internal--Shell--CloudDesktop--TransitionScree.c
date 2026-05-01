/*
 * XREFs of _std::vector_winrt::event_revoker_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen__std::allocator_winrt::event_revoker_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen_____::_Emplace_reallocate_winrt::event_revoker_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen____::_1_::catch$2 @ 0x1807032E8
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAXPEAU?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAU12@AEAV?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x180654F40 (--$_Destroy_range@V-$allocator@U-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop.c)
 */

void __fastcall __noreturn std::vector_winrt::event_revoker_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen__std::allocator_winrt::event_revoker_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen_____::_Emplace_reallocate_winrt::event_revoker_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen____::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>>>(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(24LL * *(_QWORD *)(a2 + 120)));
  throw;
}
