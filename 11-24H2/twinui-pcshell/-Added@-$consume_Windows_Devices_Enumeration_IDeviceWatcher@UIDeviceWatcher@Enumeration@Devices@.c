/*
 * XREFs of ?Added@?$consume_Windows_Devices_Enumeration_IDeviceWatcher@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UDeviceWatcher@Enumeration@Devices@Windows@winrt@@UDeviceInformation@2345@@Foundation@Windows@3@@Z @ 0x18034BB28
 * Callers:
 *     _lambda_aa297103944b40500ac49b04ee807ad8_::operator() @ 0x180619148 (_lambda_aa297103944b40500ac49b04ee807ad8_--operator().c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$from_com_ref@AEBUINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@?$weak_ref@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@winrt@@AEAAXAEBUINetworkConnectionUtils@Shell@Internal@Windows@1@@Z @ 0x1803453F8 (--$from_com_ref@AEBUINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@-$weak_ref@UINetworkC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::impl::consume_Windows_Devices_Enumeration_IDeviceWatcher<winrt::Windows::Devices::Enumeration::IDeviceWatcher>::Added(
        void (__fastcall ****a1)(_QWORD, const wchar_t *, __int64 *),
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  void (__fastcall ***v6)(_QWORD, const wchar_t *, __int64 *); // rcx
  int v7; // eax
  __int64 v8; // rbx
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v11; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+38h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h]

  v10 = 0LL;
  v6 = *a1;
  v12 = 0;
  v13 = 0LL;
  v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(*v6)[6])(v6, *a4, &v10);
  winrt::check_hresult((int *)&v11, v7, (__int64)&v12);
  v8 = v10;
  v11 = a2;
  *a2 = 0LL;
  winrt::weak_ref<winrt::Windows::Internal::Shell::INetworkConnectionUtils>::from_com_ref<winrt::Windows::Internal::Shell::INetworkConnectionUtils const &>(
    a2,
    a1);
  a2[1] = v8;
  return a2;
}
