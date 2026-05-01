/*
 * XREFs of ?Release@?$implements_delegate@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UActiveTabChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_67186d08e288f9bbdb2b33b2b97f3247_@@@impl@winrt@@UEAAIXZ @ 0x180102AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$implements_delegate@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@winrt@@V_lambda_6a7e9cbc3490d6ece0ee94480339df95_@@@impl@winrt@@QEAA@XZ @ 0x180102B38 (--1-$implements_delegate@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal.c)
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18028EFB8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs>,_lambda_67186d08e288f9bbdb2b33b2b97f3247_>::Release(
        char *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference((winrt::impl::implements_delegate_base *)(a1 + 8));
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>,_lambda_6a7e9cbc3490d6ece0ee94480339df95_>::~implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>,_lambda_6a7e9cbc3490d6ece0ee94480339df95_>(a1);
    operator delete(a1, (const struct std::nothrow_t *)(v2 + 40));
  }
  return v2;
}
