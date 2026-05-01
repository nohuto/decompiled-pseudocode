/*
 * XREFs of ?InternalShowBar@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@PEAUHMONITOR__@@@Z @ 0x180271E40
 * Callers:
 *     SnapFlyoutHost::ShowSnapBarAsync$_ResumeCoro$1 @ 0x180272910 (SnapFlyoutHost--ShowSnapBarAsync$_ResumeCoro$1.c)
 *     ?ShowSnapBarOnMonitor@SnapFlyoutHost@@AEAAXUPoint@Foundation@Windows@winrt@@@Z @ 0x180272A2C (-ShowSnapBarOnMonitor@SnapFlyoutHost@@AEAAXUPoint@Foundation@Windows@winrt@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$SnapBar_InternalShowBar@_KAEAW4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@@SnapFlyoutTelemetry@@SAX$$QEA_KAEAW4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18020D774 (--$SnapBar_InternalShowBar@_KAEAW4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@@SnapFlyoutTelemetr.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@1@XZ @ 0x18028B58C (--C-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_da.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028B6EC (--1-$com_ptr_t@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy.c)
 *     ??0?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z @ 0x18028B990 (--0-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@2@XZ @ 0x18028B9C4 (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@t.c)
 *     ?CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@W4SnapControlType@SnapComponent@Shell@Internal@45@IW4InputDeviceKind@9UI@WindowsUdk@5@PEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@W4ShowFlags@1@@Z @ 0x18028BFD8 (-CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA-AUIAsyncAction@Foundation@Windows@winrt@@PEA.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028C2C0 (--1-$test_watcher@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180291E00 (--1-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805B4370 (-StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV-$tip_test@V-$merged_data@U_tip_SnapFlyoutSho.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SnapFlyoutHost::InternalShowBar(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  char v5; // si
  int v6; // r14d
  const char *v8; // r9
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rax
  RTL_SRWLOCK *v13[2]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v14[96]; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int64 v16; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v17; // [rsp+D8h] [rbp+6Fh] BYREF
  int v18; // [rsp+E0h] [rbp+77h] BYREF

  v18 = a3;
  v5 = a3;
  v6 = a2;
  v17 = a2;
  SnapFlyoutTelemetry::SnapBar_InternalShowBar<unsigned __int64,enum winrt::WindowsUdk::UI::Shell::InputDeviceKind &>(
    &v17,
    &v18);
  v16 = 0LL;
  *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                           &v16,
                           &v17)
            + 284LL) = 2;
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(&v17);
  tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::start_and_watch_errors(
    &v16,
    v14);
  wil::AcquireSRWLockExclusive(v13, (RTL_SRWLOCK *)(a1 + 176));
  if ( !*(_DWORD *)(a1 + 168) )
  {
    if ( (unsigned __int64)(*(_QWORD *)(a1 + 88) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x224,
        (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
        v8);
    if ( *(_QWORD *)(a1 + 96) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x225,
        (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
        v8);
    v9 = tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(
           &v17,
           &v16);
    SnapFlyoutHost::StartXamlExplorerHostThread(a1, v9);
  }
  v10 = ++*(_DWORD *)(a1 + 48);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v13);
  v11 = tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(
          &v17,
          &v16);
  SnapFlyoutHost::CreateSnapFlyoutInstanceAsync(a1, (unsigned int)v13, v6, 2, v10, v5, a4, v11, 0);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v13);
  tip2::test_watcher<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_watcher<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(v14);
  return wil::com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>(&v16);
}
