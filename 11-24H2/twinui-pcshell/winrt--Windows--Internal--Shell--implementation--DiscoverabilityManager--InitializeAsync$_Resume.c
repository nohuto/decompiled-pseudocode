/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_ResumeCoro$1 @ 0x18061A460
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_InitCoro$2 @ 0x18061A3FC (winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--InitializeAsync$_InitCo.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18028A450 (--0-$test_data_control@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@ti.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180291098 (--1-$test_watcher@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180295BCC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A9958 (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAUDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAUDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@Z @ 0x180617644 (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_180617644.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180618918 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@de.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180618FCC (--1-$test_data_control@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@ti.c)
 *     ?GetDaysDiffFromLastNotified@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_JAEAU_SYSTEMTIME@@@Z @ 0x180619DE8 (-GetDaysDiffFromLastNotified@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?InitializeData@Utils@implementation@Shell@Internal@Windows@winrt@@SA_NAEAH0AEAU_SYSTEMTIME@@@Z @ 0x18061A8A8 (-InitializeData@Utils@implementation@Shell@Internal@Windows@winrt@@SA_NAEAH0AEAU_SYSTEMTIME@@@Z.c)
 *     ?QueryMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18061B498 (-QueryMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync__ResumeCoro_1(
        __int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r13
  __int64 *v3; // r15
  __int64 v4; // rsi
  winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *v5; // rcx
  __int64 DaysDiffFromLastNotified; // rax
  winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *v7; // rcx
  __int64 *v8; // r12
  __int64 (__fastcall *v9)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  int v10; // eax
  __int64 v11; // r8
  int v12; // eax
  const char *v13; // r9
  int v14; // [rsp+20h] [rbp-C8h]
  __int64 *v15; // [rsp+38h] [rbp-B0h]
  __int64 v17; // [rsp+40h] [rbp-A8h]
  __int64 *v19; // [rsp+48h] [rbp-A0h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  __int64 (__fastcall *v24)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+F8h] [rbp+10h]
  __int64 v25; // [rsp+100h] [rbp+18h]

  v1 = a1;
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 3:
      goto LABEL_27;
    case 2:
      v2 = a1 + 16;
      v17 = a1 + 16;
      tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>>((struct wil::details::IFailureCallback *)(a1 + 16));
      v3 = (__int64 *)(v1 + 72);
      v19 = (__int64 *)(v1 + 72);
      tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>(
        (__int64 *)(v1 + 80),
        (__int64 *)(v1 + 72));
      *(_DWORD *)(*(_QWORD *)(v1 + 80) + 320LL) = 0;
      tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>((volatile signed __int32 **)(v1 + 80));
      v4 = *(_QWORD *)(v1 + 129);
      winrt::Windows::Internal::Shell::implementation::Utils::InitializeData(
        (LPBYTE)(v4 + 512),
        (LPBYTE)(v4 + 516),
        (struct _SYSTEMTIME *)(v4 + 496));
      if ( *(_QWORD *)(v4 + 512) >= 6uLL
        || *(int *)(v4 + 512) > 0
        && winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::GetDaysDiffFromLastNotified(
             v5,
             (struct _SYSTEMTIME *)(v4 + 496)) < 30 )
      {
        tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>(
          (__int64 *)(v1 + 88),
          (__int64 *)(v1 + 72));
        *(_BYTE *)(*(_QWORD *)(v1 + 88) + 278LL) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>((volatile signed __int32 **)(v1 + 88));
        tip2::details::shared_data<1,0,0>::complete_without_lock(*v3 + 8);
        tip2::test_watcher<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::~test_watcher<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>(v1 + 16);
      }
      else
      {
        DaysDiffFromLastNotified = winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::GetDaysDiffFromLastNotified(
                                     v5,
                                     (struct _SYSTEMTIME *)(v4 + 496));
        try
        {
          *(_BYTE *)(v4 + 520) = DaysDiffFromLastNotified >= 60;
          if ( winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::QueryMiracastSupported(v7) )
          {
            v8 = (__int64 *)(v1 + 104);
            v15 = (__int64 *)(v1 + 104);
            *(_QWORD *)(v1 + 104) = 0LL;
            if ( v4 )
            {
              *v8 = v4;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
            }
            v25 = *(_QWORD *)(v1 + 137);
            v9 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v25 + 24LL);
            v24 = v9;
            if ( *(_QWORD *)(v4 + 112) )
            {
              winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(v4 + 112));
              v9 = v24;
            }
            try
            {
              v10 = v9(
                      v25,
                      &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
                      &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
                      v4 + 112);
              if ( v10 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x43,
                  (int)"pcshell\\twinui\\discoverabilitymanager\\lib\\discoverabilitymanager.cpp",
                  (const char *)(unsigned int)v10,
                  v14);
              v12 = SmartCookie::Register<IApplicationViewCollection,long (IApplicationViewCollection::*)(IApplicationViewChangeListener *,unsigned long *),long (IApplicationViewCollection::*)(unsigned long),winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *>(
                      v4 + 128,
                      *(_QWORD *)(v4 + 112),
                      v11);
              if ( v12 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x48,
                  (int)"pcshell\\twinui\\discoverabilitymanager\\lib\\discoverabilitymanager.cpp",
                  (const char *)(unsigned int)v12,
                  v4);
              *(_BYTE *)(v4 + 448) = 1;
            }
            catch ( ... )
            {
              wil::details::in1diag3::Log_CaughtException(
                retaddr,
                (void *)0x56,
                (int)"pcshell\\twinui\\discoverabilitymanager\\lib\\discoverabilitymanager.cpp",
                v13);
              v1 = a1;
              v8 = v15;
              v2 = v17;
              v3 = v19;
            }
            if ( !*(_BYTE *)(v4 + 448) )
            {
              tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>(
                (__int64 *)(v1 + 112),
                v3);
              *(_BYTE *)(*(_QWORD *)(v1 + 112) + 272LL) = 1;
              tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>((volatile signed __int32 **)(v1 + 112));
              tip2::details::shared_data<1,0,0>::complete_without_lock(*v3 + 8);
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v4 + 24) + 56LL))(v4 + 24, 0LL);
            }
            if ( tip2::details::shared_data<1,0,0>::is_running(*v3 + 8) )
            {
              tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>(
                (__int64 *)(v1 + 120),
                v3);
              *(_BYTE *)(*(_QWORD *)(v1 + 120) + 279LL) = 1;
              tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>((volatile signed __int32 **)(v1 + 120));
              tip2::details::shared_data<1,0,0>::complete_without_lock(*v3 + 8);
            }
            if ( *v8 )
              winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v8);
            tip2::test_watcher<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::~test_watcher<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>(v2);
          }
          else
          {
            if ( tip2::details::shared_data<1,0,0>::is_running(*v3 + 8) )
            {
              tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>(
                (__int64 *)(v1 + 96),
                (__int64 *)(v1 + 72));
              *(_BYTE *)(*(_QWORD *)(v1 + 96) + 277LL) = 1;
              tip2::test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>((volatile signed __int32 **)(v1 + 96));
              tip2::details::shared_data<1,0,0>::complete_without_lock(*v3 + 8);
            }
            tip2::test_watcher<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::~test_watcher<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>(v1 + 16);
          }
        }
        catch ( ... )
        {
          *(_WORD *)(a1 + 8) = -1;
          std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
        }
      }
LABEL_27:
      if ( *(_WORD *)(v1 + 10) )
        operator delete((void *)v1, (const struct std::nothrow_t *)0xA0);
      break;
    default:
      __debugbreak();
      break;
  }
}
