/*
 * XREFs of ??$get_activation_factory@UIDeviceInformationStatics@Enumeration@Devices@Windows@winrt@@@winrt@@YA?AUIDeviceInformationStatics@Enumeration@Devices@Windows@0@AEBUhstring@param@0@@Z @ 0x180617F9C
 * Callers:
 *     ??$call@AEAV_lambda_2bdf1dccac8f31331c29d81ee6552535_@@@?$factory_cache_entry@UDeviceInformation@Enumeration@Devices@Windows@winrt@@UIDeviceInformationStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_2bdf1dccac8f31331c29d81ee6552535_@@@Z @ 0x1806179F0 (--$call@AEAV_lambda_2bdf1dccac8f31331c29d81ee6552535_@@@-$factory_cache_entry@UDeviceInformation.c)
 *     ??$call@AEAV_lambda_949de2b926fa2a3cc50f06471a2a2214_@@@?$factory_cache_entry@UDeviceInformation@Enumeration@Devices@Windows@winrt@@UIDeviceInformationStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_949de2b926fa2a3cc50f06471a2a2214_@@@Z @ 0x180617B08 (--$call@AEAV_lambda_949de2b926fa2a3cc50f06471a2a2214_@@@-$factory_cache_entry@UDeviceInformation.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801F6FB0 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Devices::Enumeration::IDeviceInformationStatics>(
        _QWORD *a1,
        __int64 *a2)
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
    (__int64)&winrt::impl::guid_v<winrt::Windows::Devices::Enumeration::IDeviceInformationStatics>,
    (__int64)&v7);
  winrt::check_hresult((int *)&v6, (int)v6, (__int64)&v4);
  *a1 = v7;
  return a1;
}
