/*
 * XREFs of ?InvokeCampaign@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x18061AC20
 * Callers:
 *     ?LaunchActionCenterNotification@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x18061AE14 (-LaunchActionCenterNotification@DiscoverabilityManager@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ??0?$test_data_control@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18028A450 (--0-$test_data_control@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@ti.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180291098 (--1-$test_watcher@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1802910C0 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@det.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180295BCC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A9958 (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180618FCC (--1-$test_data_control@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@ti.c)
 *     ?ConfigureRegistryKeys@Utils@implementation@Shell@Internal@Windows@winrt@@SAXKHAEAU_SYSTEMTIME@@@Z @ 0x18061986C (-ConfigureRegistryKeys@Utils@implementation@Shell@Internal@Windows@winrt@@SAXKHAEAU_SYSTEMTIME@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InvokeCampaign(
        struct _SYSTEMTIME *this)
{
  unsigned int v2; // ecx
  int *p_wDayOfWeek; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  _BYTE v7[56]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+58h] [rbp-10h] BYREF
  volatile signed __int32 *v9; // [rsp+70h] [rbp+8h] BYREF

  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>>((struct wil::details::IFailureCallback *)v7);
  GetSystemTime(this + 31);
  v2 = *(_DWORD *)&this[32].wYear + 1;
  *(_DWORD *)&this[32].wYear = v2;
  p_wDayOfWeek = (int *)&this[32].wDayOfWeek;
  if ( v2 >= 6 )
    *p_wDayOfWeek = 1;
  winrt::Windows::Internal::Shell::implementation::Utils::ConfigureRegistryKeys(
    v2,
    *p_wDayOfWeek,
    (const BYTE *)&this[31]);
  if ( tip2::details::shared_data<1,0,0>::is_running(v8 + 8) )
  {
    tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>(
      (__int64 *)&v9,
      &v8);
    *((_BYTE *)v9 + 280) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>(&v9);
    tip2::details::shared_data<1,0,0>::complete_without_lock(v8 + 8);
  }
  while ( 1 )
  {
    v4 = *(_QWORD *)&this[30].wHour;
    if ( !v4 )
      break;
    v5 = v4 - 1;
    *(_QWORD *)&this[30].wHour = v5;
    if ( v5 )
      ++*(_QWORD *)&this[30].wYear;
    else
      *(_QWORD *)&this[30].wYear = 0LL;
  }
  (*(void (__fastcall **)(WORD *, _QWORD))(*(_QWORD *)&this[1].wHour + 56LL))(&this[1].wHour, 0LL);
  tip2::test_watcher<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::~test_watcher<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>((__int64)v7);
  return 0LL;
}
