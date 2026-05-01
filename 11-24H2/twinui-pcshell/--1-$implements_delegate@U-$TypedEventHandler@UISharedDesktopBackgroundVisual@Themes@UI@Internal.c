/*
 * XREFs of ??1?$implements_delegate@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualStartedArgs@23456@@Foundation@Windows@winrt@@V_lambda_6a7e9cbc3490d6ece0ee94480339df95_@@@impl@winrt@@QEAA@XZ @ 0x180102B38
 * Callers:
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UActiveTabChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_67186d08e288f9bbdb2b33b2b97f3247_@@@impl@winrt@@UEAAIXZ @ 0x180102AF0 (-Release@-$implements_delegate@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windo.c)
 *     ?Release@?$implements_delegate@U?$TypedEventHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UTileRemovedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_ae55d667dee5f74db031bb94afbcc4c3_@@@impl@winrt@@UEAAIXZ @ 0x180102B70 (-Release@-$implements_delegate@U-$TypedEventHandler@UTileCollection@StartScreen@UI@WindowsUdk@wi.c)
 *     ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_985bae7315308d415c04588d298dcf5f_@@@impl@winrt@@UEAAIXZ @ 0x180358C20 (-Release@-$implements_delegate@U-$AsyncOperationCompletedHandler@U-$IReference@_N@Foundation@Win.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x180102D54 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>,_lambda_6a7e9cbc3490d6ece0ee94480339df95_>::~implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualStartedArgs>,_lambda_6a7e9cbc3490d6ece0ee94480339df95_>(
        __int64 a1)
{
  __int64 result; // rax

  result = winrt::impl::module_lock_updater<1>::~module_lock_updater<1>(a1 + 40);
  if ( *(_QWORD *)(a1 + 16) )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
  return result;
}
