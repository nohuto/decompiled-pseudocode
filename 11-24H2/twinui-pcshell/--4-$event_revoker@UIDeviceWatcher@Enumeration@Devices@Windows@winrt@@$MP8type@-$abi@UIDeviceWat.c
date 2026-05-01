/*
 * XREFs of ??4?$event_revoker@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@$MP8type@?$abi@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180348964
 * Callers:
 *     _lambda_aa297103944b40500ac49b04ee807ad8_::operator() @ 0x180619148 (_lambda_aa297103944b40500ac49b04ee807ad8_--operator().c)
 * Callees:
 *     ??$swap@U?$weak_ref@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@@winrt@@$0A@@std@@YAXAEAU?$weak_ref@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@@winrt@@0@Z @ 0x180345C5C (--$swap@U-$weak_ref@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@@winrt@@$0A@@std@@YAXAEAU.c)
 *     ??1?$event_revoker@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@$MP8type@?$abi@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x180347B44 (--1-$event_revoker@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@$MP8type@-$abi@UIDeviceWat.c)
 */

__int64 *__fastcall __4__event_revoker_UIDeviceWatcher_Enumeration_Devices_Windows_winrt___MP8type___abi_UIDeviceWatcher_Enumeration_Devices_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v2 = *a2;
  *a2 = 0LL;
  v6 = v2;
  v7 = a2[1];
  std::swap<winrt::weak_ref<winrt::Windows::Devices::Enumeration::IDeviceWatcher>,0>(&v6, a1);
  v4 = v7;
  v7 = a1[1];
  a1[1] = v4;
  __1__event_revoker_UIDeviceWatcher_Enumeration_Devices_Windows_winrt___MP8type___abi_UIDeviceWatcher_Enumeration_Devices_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAA_XZ(&v6);
  return a1;
}
