/*
 * XREFs of ?Execute@BootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18066A100
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800561C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x180112818 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@I@Z @ 0x18018E184 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@I@Z.c)
 *     tip_details_GetKernelBaseModuleHandle @ 0x180193D60 (tip_details_GetKernelBaseModuleHandle.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028B600 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180295BCC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802A9958 (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18063CE74 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EEE0 (--1-$test_data_control@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EF88 (--1-$test_watcher@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBW4DismissalReason@TransitionScreen@CloudDesktop@3456@@Z @ 0x180671B24 (-DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXA.c)
 *     ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x1806726D4 (-ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::BootDisconnectedState::Execute(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rcx
  void **v4; // rax
  __int64 v5; // rdi
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rbx
  FARPROC v8; // rax
  HMODULE v9; // rax
  _BYTE *v10; // rcx
  void **v11; // rax
  __int64 v12; // rdi
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax
  int v17; // [rsp+20h] [rbp-E0h] BYREF
  volatile signed __int32 *v18; // [rsp+28h] [rbp-D8h] BYREF
  volatile signed __int32 *v19; // [rsp+30h] [rbp-D0h] BYREF
  volatile signed __int32 *v20; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int32 *v21; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v22[56]; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v23; // [rsp+88h] [rbp-78h]
  _BYTE v24[56]; // [rsp+90h] [rbp-70h] BYREF
  volatile signed __int32 *v25; // [rsp+C8h] [rbp-38h]
  void *v26[4]; // [rsp+D0h] [rbp-30h] BYREF
  void *v27[4]; // [rsp+F0h] [rbp-10h] BYREF
  void *v28[4]; // [rsp+110h] [rbp+10h] BYREF
  void *v29[4]; // [rsp+130h] [rbp+30h] BYREF

  switch ( a3 )
  {
    case 0u:
      v17 = 5;
      winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::DismissTransitionScreen(0LL, a2, &v17, 0LL);
      tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>>((struct wil::details::IFailureCallback *)v24);
      if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v25 + 2)) )
      {
        v11 = (void **)std::to_wstring(v29, 0);
        v12 = std::operator+<unsigned short>(
                (__int64)v28,
                (char *)L"BootDisconnectedState::Execute, Client Disconnected ",
                v11);
        v13 = v25;
        v20 = v25;
        if ( v25 )
          _InterlockedIncrement(v25 + 92);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v13 + 2));
        std::wstring::operator=((__int64)(v13 + 72), v12);
        tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v20);
        std::wstring::_Tidy_deallocate(v28);
        std::wstring::_Tidy_deallocate(v29);
        v14 = v25;
        v21 = v25;
        if ( v25 )
          _InterlockedIncrement(v25 + 92);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v14 + 2));
        *((_BYTE *)v14 + 277) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v21);
        tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v25 + 2));
        ProcAddress = (FARPROC)`TestControlReporting'::`2'::s_pfnTestControlReporting;
        if ( `TestControlReporting'::`2'::s_pfnTestControlReporting
          || (KernelBaseModuleHandle = tip_details_GetKernelBaseModuleHandle(),
              ProcAddress = GetProcAddress(KernelBaseModuleHandle, "TestControlReporting"),
              (`TestControlReporting'::`2'::s_pfnTestControlReporting = (__int64)ProcAddress) != 0) )
        {
          ((void (__fastcall *)(_QWORD))ProcAddress)(0LL);
        }
      }
      v10 = v24;
      goto LABEL_24;
    case 1u:
      return;
    case 2u:
      tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>>((struct wil::details::IFailureCallback *)v22);
      if ( tip2::details::shared_data<1,0,0>::is_running((__int64)(v23 + 2)) )
      {
        v4 = (void **)std::to_wstring(v27, 2u);
        v5 = std::operator+<unsigned short>(
               (__int64)v26,
               (char *)L"BootDisconnectedState::Execute, Client Disconnected ",
               v4);
        v6 = v23;
        v18 = v23;
        if ( v23 )
          _InterlockedIncrement(v23 + 92);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v6 + 2));
        std::wstring::operator=((__int64)(v6 + 72), v5);
        tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v18);
        std::wstring::_Tidy_deallocate(v26);
        std::wstring::_Tidy_deallocate(v27);
        v7 = v23;
        v19 = v23;
        if ( v23 )
          _InterlockedIncrement(v23 + 92);
        tip2::details::shared_data<1,0,0>::begin_update((__int64)(v7 + 2));
        *((_BYTE *)v7 + 277) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_data_control<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((void **)&v19);
        tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v23 + 2));
        v8 = (FARPROC)`TestControlReporting'::`2'::s_pfnTestControlReporting;
        if ( `TestControlReporting'::`2'::s_pfnTestControlReporting
          || (v9 = tip_details_GetKernelBaseModuleHandle(),
              v8 = GetProcAddress(v9, "TestControlReporting"),
              (`TestControlReporting'::`2'::s_pfnTestControlReporting = (__int64)v8) != 0) )
        {
          ((void (__fastcall *)(_QWORD))v8)(0LL);
        }
      }
      v10 = v22;
LABEL_24:
      tip2::test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::~test_watcher<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>((__int64)v10);
      return;
  }
  v3 = a3 - 98;
  if ( (unsigned int)v3 > 1 )
    winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ThrowIllegalStateTransition(v3, a3, 3LL);
}
