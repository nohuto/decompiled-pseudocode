/*
 * XREFs of ??__Finst@?1??GetInstance@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SAAEAV1234567@XZ@YAXXZ @ 0x180706D50
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@PEAU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualLoadedArgs@23456@@Foundation@Windows@winrt@@PEAU1234@@std@@YAXPEAU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualLoadedArgs@23456@@Foundation@Windows@winrt@@QEAU1234@@Z @ 0x1800515F4 (--$_Destroy_range@PEAU-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Win.c)
 */

void __fastcall `winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::GetInstance'::`2'::`dynamic atexit destructor for 'inst''()
{
  if ( (_QWORD)xmmword_1808CDBD0 )
  {
    std::_Destroy_range<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualLoadedArgs> *,winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualLoadedArgs> *>(
      (__int64 *)xmmword_1808CDBD0,
      *((__int64 **)&xmmword_1808CDBD0 + 1));
    std::_Deallocate<16,0>(
      (void *)xmmword_1808CDBD0,
      (const struct std::nothrow_t *)((qword_1808CDBE0 - xmmword_1808CDBD0) & 0xFFFFFFFFFFFFFFF8uLL));
    xmmword_1808CDBD0 = 0uLL;
  }
}
