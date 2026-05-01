/*
 * XREFs of ??$get_activation_factory@UIApplicationFactory@Xaml@UI@Microsoft@winrt@@@winrt@@YA?AUIApplicationFactory@Xaml@UI@Microsoft@0@AEBUhstring@param@0@@Z @ 0x180288F2C
 * Callers:
 *     ??$call@AEAV_lambda_403c633736a1bddadba4817f5f4a752e_@@@?$factory_cache_entry@UApplication@Xaml@UI@Microsoft@winrt@@UIApplicationFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_403c633736a1bddadba4817f5f4a752e_@@@Z @ 0x180288D9C (--$call@AEAV_lambda_403c633736a1bddadba4817f5f4a752e_@@@-$factory_cache_entry@UApplication@Xaml@.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801F6FB0 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Microsoft::UI::Xaml::IApplicationFactory>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *result; // rax
  unsigned int v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+40h] [rbp-18h] BYREF

  v7 = 0LL;
  v5 = 0;
  v6 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v4,
    a2,
    (__int64)&winrt::impl::guid_v<winrt::Microsoft::UI::Xaml::IApplicationFactory>,
    (__int64)&v7);
  winrt::check_hresult(&v4, v4, &v5);
  result = a1;
  *a1 = v7;
  return result;
}
