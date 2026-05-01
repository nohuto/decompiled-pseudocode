/*
 * XREFs of ??$get_activation_factory@UIFileIOStatics@Storage@Windows@winrt@@@winrt@@YA?AUIFileIOStatics@Storage@Windows@0@AEBUhstring@param@0@@Z @ 0x1801F6EB0
 * Callers:
 *     ??$call@AEAV_lambda_8bcef120e7c5e2e3c02b5340d469f3bd_@@@?$factory_cache_entry@UFileIO@Storage@Windows@winrt@@UIFileIOStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_8bcef120e7c5e2e3c02b5340d469f3bd_@@@Z @ 0x1801F6D68 (--$call@AEAV_lambda_8bcef120e7c5e2e3c02b5340d469f3bd_@@@-$factory_cache_entry@UFileIO@Storage@Wi.c)
 *     ??$call@AEAV_lambda_ab3e553f5135d66a1c20f494927a541c_@@@?$factory_cache_entry@UFileIO@Storage@Windows@winrt@@UIFileIOStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_ab3e553f5135d66a1c20f494927a541c_@@@Z @ 0x18031BCA0 (--$call@AEAV_lambda_ab3e553f5135d66a1c20f494927a541c_@@@-$factory_cache_entry@UFileIO@Storage@Wi.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801F6FB0 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Storage::IFileIOStatics>(_QWORD *a1, __int64 a2)
{
  int v4; // [rsp+28h] [rbp-20h] BYREF
  __int128 v5; // [rsp+30h] [rbp-18h]
  _QWORD *v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0LL;
  v4 = 0;
  v5 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v6,
    a2,
    &winrt::impl::guid_v<winrt::Windows::Storage::IFileIOStatics>,
    &v7);
  winrt::check_hresult(&v6, (unsigned int)v6, &v4);
  *a1 = v7;
  return a1;
}
