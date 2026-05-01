/*
 * XREFs of ??$get_activation_factory@UIMRTHelperStatics@UnifiedTile@Shell@WindowsInternal@winrt@@@winrt@@YA?AUIMRTHelperStatics@UnifiedTile@Shell@WindowsInternal@0@AEBUhstring@param@0@@Z @ 0x1805E21C4
 * Callers:
 *     ??$call@AEAV_lambda_6f34e705270e868253aa28e6dfc0cbd7_@@@?$factory_cache_entry@UMRTHelper@UnifiedTile@Shell@WindowsInternal@winrt@@UIMRTHelperStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6f34e705270e868253aa28e6dfc0cbd7_@@@Z @ 0x1805E1B1C (--$call@AEAV_lambda_6f34e705270e868253aa28e6dfc0cbd7_@@@-$factory_cache_entry@UMRTHelper@Unified.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801F6FB0 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *result; // rax
  int v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+40h] [rbp-18h] BYREF

  v7 = 0LL;
  v5 = 0;
  v6 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v4,
    a2,
    (__int64)&winrt::impl::guid_v<winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics>,
    (__int64)&v7);
  winrt::check_hresult(&v4, v4, (__int64)&v5);
  result = a1;
  *a1 = v7;
  return result;
}
