/*
 * XREFs of ?CreateInstance@?$consume_Microsoft_UI_Xaml_IApplicationFactory@UIApplicationFactory@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x180288FDC
 * Callers:
 *     ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1800524BC (--0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??R_lambda_9da9a377ea2426f3d5421a6be20021de_@@QEBA@AEBUIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Microsoft@winrt@@@Z @ 0x1801D0980 (--R_lambda_9da9a377ea2426f3d5421a6be20021de_@@QEBA@AEBUIDesktopWindowXamlSourceFactory@Hosting@X.c)
 *     ??$call@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@?$factory_cache_entry@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@UIDesktopWindowXamlSourceFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@Z @ 0x1801D09AC (--$call@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@-$factory_cache_entry@UDesktopWindowXaml.c)
 *     ??R_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Windows@winrt@@@Z @ 0x18020358C (--R_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Windows@winrt.c)
 *     ??R_lambda_403c633736a1bddadba4817f5f4a752e_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Microsoft@winrt@@@Z @ 0x180288EAC (--R_lambda_403c633736a1bddadba4817f5f4a752e_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Microsoft@win.c)
 * Callees:
 *     ??B?$bind_out@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@QEBAPEAPEAXXZ @ 0x180211B08 (--B-$bind_out@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@QEBAPEAPEAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Microsoft_UI_Xaml_IApplicationFactory<winrt::Microsoft::UI::Xaml::IApplicationFactory>::CreateInstance(
        __int64 **a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 *v4; // rdi
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64 *, _QWORD, __int64 *, _QWORD **); // rbx
  __int64 *v9; // rax
  unsigned int v10; // eax
  _QWORD *result; // rax
  __int64 *v12[2]; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+40h] [rbp-48h] BYREF
  __int128 v14; // [rsp+48h] [rbp-40h]
  _QWORD *v15; // [rsp+58h] [rbp-30h] BYREF

  v15 = a2;
  v4 = *a1;
  v15 = 0LL;
  v13 = 0;
  v12[0] = a4;
  v7 = *v4;
  v14 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *, _QWORD **))(v7 + 48);
  v9 = winrt::impl::bind_out<winrt::Windows::Foundation::IInspectable>::operator void * *(v12);
  v10 = v8(v4, *a3, v9, &v15);
  winrt::check_hresult(v12, v10, &v13);
  result = a2;
  *a2 = v15;
  return result;
}
