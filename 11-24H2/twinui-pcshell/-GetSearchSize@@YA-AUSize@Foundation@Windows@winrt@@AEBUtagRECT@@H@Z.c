/*
 * XREFs of ?GetSearchSize@@YA?AUSize@Foundation@Windows@winrt@@AEBUtagRECT@@H@Z @ 0x1803D5D14
 * Callers:
 *     ?GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x180247F90 (-GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AUSearchAppSizeAndBorde.c)
 *     ?GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA?AU?$pair@HH@std@@AEBUMonitorInfo@@_N@Z @ 0x180248994 (-GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA-AU-$pair@HH@std@@AEBUMo.c)
 *     ?GetDefaultStartSearchAppWidth@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHAEBUMonitorInfo@@@Z @ 0x1803D5C88 (-GetDefaultStartSearchAppWidth@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHAEBUMonitorInfo@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180055CEC (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?IsSystemProvided@?$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801CA780 (-IsSystemProvided@-$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CAB80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@0@Z @ 0x1802BC960 (-GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AE_ea_1802BC960.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?CalculateFallbackSearchSize@@YA?AUSize@Foundation@Windows@winrt@@U1234@@Z @ 0x1803D5994 (-CalculateFallbackSearchSize@@YA-AUSize@Foundation@Windows@winrt@@U1234@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
float *__fastcall GetSearchSize(float *a1, _DWORD *a2, int a3)
{
  __m128 v6; // xmm7
  int v7; // eax
  __m128 v8; // xmm6
  void (__fastcall ***v9)(_QWORD, void *, __int64 **); // rcx
  __int64 *v10; // rbx
  int v11; // eax
  __int64 v13; // [rsp+28h] [rbp-49h] BYREF
  __int64 v14[2]; // [rsp+30h] [rbp-41h] BYREF
  __int64 v15; // [rsp+40h] [rbp-31h] BYREF
  __int64 v16; // [rsp+48h] [rbp-29h] BYREF
  int v17; // [rsp+50h] [rbp-21h] BYREF
  __int128 v18; // [rsp+58h] [rbp-19h]
  _BYTE v19[72]; // [rsp+70h] [rbp-1h] BYREF
  __int64 *v20; // [rsp+E0h] [rbp+6Fh] BYREF
  __int64 *v21; // [rsp+F0h] [rbp+7Fh] BYREF

  v6 = (__m128)COERCE_UNSIGNED_INT((float)MulDiv(a2[3] - a2[1], 96, a3));
  v7 = MulDiv(a2[2] - *a2, 96, a3);
  v8 = (__m128)COERCE_UNSIGNED_INT((float)v7);
  *(float *)&v16 = (float)v7;
  HIDWORD(v16) = v6.m128_i32[0];
  v14[0] = (__int64)L"WindowsUdk.UI.StartScreen.Implementation.StartControllerExtension";
  v14[1] = 65LL;
  winrt::param::hstring::hstring((__int64)&v17, v14);
  winrt::param::hstring::hstring((winrt::param::hstring *)v19, L"com.microsoft.windows.app.startmenu");
  v9 = *(void (__fastcall ****)(_QWORD, void *, __int64 **))winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory::GetFactory(
                                                              (const struct winrt::param::hstring *)&v15,
                                                              (const struct winrt::param::hstring *)v19,
                                                              (__int64)&v17);
  if ( v9 )
  {
    v20 = 0LL;
    (**v9)(
      v9,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::StartScreen::Implementation::IStartControllerExtensionStatics3>,
      &v20);
    v10 = v20;
    v21 = v20;
  }
  else
  {
    v21 = 0LL;
    v10 = 0LL;
  }
  if ( v15 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v15);
  if ( v10 )
  {
    winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
      &v21,
      v14,
      &v16);
    v13 = 0LL;
    v17 = 0;
    v18 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14[0] + 56LL))(v14[0], &v13);
    winrt::check_hresult((int *)&v20, v11, (__int64)&v17);
    if ( !winrt::impl::consume_WindowsUdk_UI_Shell_IWebSearchProvider<winrt::WindowsUdk::UI::Shell::IWebSearchProvider>::IsSystemProvided(v14) )
      LODWORD(v13) = 1145176064;
    *(_QWORD *)a1 = v13;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v14);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
  }
  else
  {
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
    CalculateFallbackSearchSize(a1, _mm_unpacklo_ps(v8, v6).m128_i64[0]);
  }
  return a1;
}
