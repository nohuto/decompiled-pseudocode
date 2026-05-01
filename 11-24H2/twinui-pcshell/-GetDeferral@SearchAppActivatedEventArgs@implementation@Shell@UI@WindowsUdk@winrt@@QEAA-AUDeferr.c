/*
 * XREFs of ?GetDeferral@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUDeferral@Foundation@Windows@6@XZ @ 0x180293298
 * Callers:
 *     ?GetDeferral@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180293240 (-GetDeferral@-$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UI.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180055CEC (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1801BC970 (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ??$call@AEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@?$factory_cache_entry@UDeferral@Foundation@Windows@winrt@@UIDeferralFactory@234@@impl@winrt@@QEAA?A_PAEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@Z @ 0x1801F3ABC (--$call@AEAV_lambda_05b02c468eda432e9e6db40beed076d3_@@@-$factory_cache_entry@UDeferral@Foundati.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180293110 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ @ 0x180293140 (-unconditional_release_ref@-$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::GetDeferral(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // r9
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 *v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 *v10; // [rsp+58h] [rbp+20h] BYREF
  _QWORD *v11; // [rsp+60h] [rbp+28h] BYREF
  __int64 **v12; // [rsp+68h] [rbp+30h] BYREF

  v10 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  v3 = 0LL;
  v11 = 0LL;
  v4 = 0LL;
  if ( a1 )
  {
    v11 = (_QWORD *)a1;
    winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(a1);
    v4 = v5;
  }
  v10 = v3;
  if ( v4 )
    winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef((__int64)v3);
  v12 = &v10;
  v12 = (__int64 **)operator new(0x18uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v12 + 1));
  v6 = v10;
  v10 = 0LL;
  v7[2] = v6;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v7 = off_18071F268;
  v9 = v7;
  if ( v10 )
    winrt::com_ptr<TouchEdgeGripperHost>::unconditional_release_ref(&v10);
  v12 = &v9;
  _InterlockedIncrement64(&qword_1808C8DE8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Deferral,winrt::Windows::Foundation::IDeferralFactory> )
  {
    winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Foundation::Deferral,winrt::Windows::Foundation::IDeferralFactory>,
      a2,
      (__int64 *)&v9);
    _InterlockedDecrement64(&qword_1808C8DE8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808C8DE8);
    winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Deferral,winrt::Windows::Foundation::IDeferralFactory>::call<_lambda_05b02c468eda432e9e6db40beed076d3_ &>(
      v6,
      a2,
      (__int64 **)&v12);
  }
  if ( v9 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v9);
  if ( v11 )
    winrt::com_ptr<TouchEdgeGripperHost>::unconditional_release_ref(&v11);
  return a2;
}
