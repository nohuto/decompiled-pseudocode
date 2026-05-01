/*
 * XREFs of ?Execute@BootConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180669FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028B600 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A9958 (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18063CE74 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EEE0 (--1-$test_data_control@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EF88 (--1-$test_watcher@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x180668F00 (-GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@XZ.c)
 *     ?GetMaxConnectionTimeoutFromAdmin@CloudPCHelpers@@YAHXZ @ 0x180668F90 (-GetMaxConnectionTimeoutFromAdmin@CloudPCHelpers@@YAHXZ.c)
 *     ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x1806726D4 (-ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::BootConnectingState::Execute(
        CloudPCHelpers *a1,
        __int64 a2,
        unsigned int a3)
{
  int MaxConnectionTimeoutFromAdmin; // eax
  void (__fastcall *v6)(CloudPCHelpers *, __int64, _QWORD *, __int64 *); // rbx
  __int64 v7; // r14
  _QWORD *v8; // rax
  volatile signed __int32 *v9; // rbx
  void (__fastcall *v10)(CloudPCHelpers *, __int64, _QWORD *, __int64 *); // rbx
  _QWORD *LockImagePath; // rax
  volatile signed __int32 *v12; // [rsp+30h] [rbp-50h] BYREF
  volatile signed __int32 *v13; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v14[56]; // [rsp+40h] [rbp-40h] BYREF
  volatile signed __int32 *v15; // [rsp+78h] [rbp-8h]
  __int64 v16; // [rsp+B8h] [rbp+38h] BYREF

  if ( a3 == 1 )
  {
    v10 = *(void (__fastcall **)(CloudPCHelpers *, __int64, _QWORD *, __int64 *))(*(_QWORD *)a1 + 8LL);
    v16 = 1200000000LL;
    LockImagePath = winrt::Windows::Internal::Shell::implementation::Utils::GetLockImagePath(&v13);
    v10(a1, a2, LockImagePath, &v16);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
  }
  else
  {
    if ( a3 != 2 )
    {
      if ( a3 == 98 )
        return;
      if ( a3 - 99 > 1 )
        winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ThrowIllegalStateTransition(a1, a3, 0LL);
    }
    MaxConnectionTimeoutFromAdmin = CloudPCHelpers::GetMaxConnectionTimeoutFromAdmin(a1);
    v6 = *(void (__fastcall **)(CloudPCHelpers *, __int64, _QWORD *, __int64 *))(*(_QWORD *)a1 + 8LL);
    v7 = MaxConnectionTimeoutFromAdmin;
    v16 = 600000000LL * MaxConnectionTimeoutFromAdmin;
    v8 = winrt::Windows::Internal::Shell::implementation::Utils::GetLockImagePath(&v12);
    v6(a1, a2, v8, &v16);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
    tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>>((struct wil::details::IFailureCallback *)v14);
    if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v15 + 2)) )
    {
      v9 = v15;
      v13 = v15;
      if ( v15 )
        _InterlockedIncrement(v15 + 92);
      tip2::details::shared_data<1,0,0>::begin_update((__int64)(v9 + 2));
      *((_QWORD *)v9 + 45) = v7;
      tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v13);
    }
    tip2::test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((__int64)v14);
  }
}
