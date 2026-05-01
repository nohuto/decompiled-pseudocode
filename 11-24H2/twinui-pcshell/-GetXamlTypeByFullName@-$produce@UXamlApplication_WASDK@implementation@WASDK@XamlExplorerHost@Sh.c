/*
 * XREFs of ?GetXamlTypeByFullName@?$produce@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x180052070
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?GetXamlType@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUIXamlType@Markup@Xaml@UI@Microsoft@8@AEBUhstring@8@@Z @ 0x180051678 (-GetXamlType@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider>::GetXamlTypeByFullName(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *XamlType; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF

  try
  {
    v8 = a2;
    *a3 = 0LL;
    XamlType = winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::GetXamlType(
                 (RTL_SRWLOCK *)((a1 - 32) & -(__int64)(a1 != 0)),
                 &v7,
                 &v8);
    v5 = *XamlType;
    *XamlType = 0LL;
    *a3 = v5;
    if ( v7 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v7);
  }
  return result;
}
