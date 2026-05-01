/*
 * XREFs of _std::vector_winrt::weak_ref_winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager__std::allocator_winrt::weak_ref_winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager_____::_Emplace_reallocate_winrt::weak_ref_winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager____::_1_::catch$1 @ 0x1806F8B71
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@PEAU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualLoadedArgs@23456@@Foundation@Windows@winrt@@PEAU1234@@std@@YAXPEAU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualLoadedArgs@23456@@Foundation@Windows@winrt@@QEAU1234@@Z @ 0x1800515F4 (--$_Destroy_range@PEAU-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Win.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_winrt::weak_ref_winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager__std::allocator_winrt::weak_ref_winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager_____::_Emplace_reallocate_winrt::weak_ref_winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualLoadedArgs> *,winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualLoadedArgs> *>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 120)));
  throw;
}
