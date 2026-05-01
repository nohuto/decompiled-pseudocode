/*
 * XREFs of ?TryGetProviderServicesForAppWindow@RemoteSystemServiceBroker@implementation@Shell@Internal@Windows@winrt@@SA?AUIRemoteSystemServicesExtension@RemoteSystems@3456@AEBUWindowId@UI@56@@Z @ 0x180666854
 * Callers:
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x1806506A4 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180050FE0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028B600 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180295BCC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180666540 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1806666C8 (--1-$test_data_control@V-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180666700 (--1-$test_watcher@V-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 */

winrt *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemServiceBroker::TryGetProviderServicesForAppWindow(
        winrt *a1,
        _QWORD *a2)
{
  volatile signed __int32 *v4; // rbx
  __int64 v5; // r14
  volatile signed __int32 *v6; // rbx
  struct IUnknown *v7; // rdx
  void **v8; // rax
  volatile signed __int32 *v9; // rbx
  _BYTE v11[56]; // [rsp+20h] [rbp-40h] BYREF
  volatile signed __int32 *v12; // [rsp+58h] [rbp-8h]
  volatile signed __int32 *v13; // [rsp+90h] [rbp+30h] BYREF
  volatile signed __int32 *v14; // [rsp+98h] [rbp+38h] BYREF
  volatile signed __int32 *v15; // [rsp+A0h] [rbp+40h] BYREF

  tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>>((struct wil::details::IFailureCallback *)v11);
  v4 = v12;
  v5 = *a2;
  v13 = v12;
  if ( v12 )
    _InterlockedIncrement(v12 + 74);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v4 + 2));
  *((_QWORD *)v4 + 35) = v5;
  tip2::test_data_control<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>::~test_data_control<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>((void **)&v13);
  v6 = v12;
  v14 = v12;
  if ( v12 )
    _InterlockedIncrement(v12 + 74);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v6 + 2));
  *((_BYTE *)v6 + 288) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>::~test_data_control<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>((void **)&v14);
  *(_QWORD *)a1 = 0LL;
  v8 = winrt::put_abi(a1, v7);
  if ( (int)CoreQueryWindowService(
              *a2,
              &SID_ProviderService,
              &winrt::impl::guid_v<winrt::Windows::Internal::Shell::RemoteSystems::IRemoteSystemServicesExtension>,
              v8) >= 0 )
  {
    v9 = v12;
    v15 = v12;
    if ( v12 )
      _InterlockedIncrement(v12 + 74);
    tip2::details::shared_data<1,0,0>::begin_update((__int64)(v9 + 2));
    *((_BYTE *)v9 + 272) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>::~test_data_control<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>((void **)&v15);
  }
  tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v12 + 2));
  tip2::test_watcher<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>::~test_watcher<tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>>((__int64)v11);
  return a1;
}
