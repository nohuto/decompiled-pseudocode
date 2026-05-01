/*
 * XREFs of ?OnFlyoutInstanceShown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@_N@Z @ 0x1805B3700
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$SnapFlyout_InstanceShown@IAEA_N@SnapFlyoutTelemetry@@SAX$$QEAIAEA_N@Z @ 0x18018D8A8 (--$SnapFlyout_InstanceShown@IAEA_N@SnapFlyoutTelemetry@@SAX$$QEAIAEA_N@Z.c)
 *     ?TryGetFlyoutInstance@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801FC70C (-TryGetFlyoutInstance@SnapFlyoutHost@@AEAA-AV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@.c)
 *     ?ProgressRequest@?$consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeStartedEventArgs@UIArrangedWindowResizeStartedEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801FC7A0 (-ProgressRequest@-$consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeSt.c)
 *     ?SnapControlType@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180241B40 (-SnapControlType@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyout.c)
 *     ?HitTestControl@WindowDragInputProvider@@QEAAXUPoint@Foundation@Windows@winrt@@@Z @ 0x1802736A4 (-HitTestControl@WindowDragInputProvider@@QEAAXUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ?RegisterForCustomDockTargetMessages@WindowDragInputProvider@@AEAAXXZ @ 0x180273E98 (-RegisterForCustomDockTargetMessages@WindowDragInputProvider@@AEAAXXZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@1@XZ @ 0x18028B58C (--C-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_da.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180291E00 (--1-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x180295BA8 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A9934 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?SetActiveControl@WindowDragInputProvider@@QEAAXUIControlWindow@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x1802CD624 (-SetActiveControl@WindowDragInputProvider@@QEAAXUIControlWindow@SnapComponent@Shell@Internal@Win.c)
 *     ?StartWindowDrag@WindowDragInputProviderTelemetry@@SAXXZ @ 0x1802CE784 (-StartWindowDrag@WindowDragInputProviderTelemetry@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SnapFlyoutHost::OnFlyoutInstanceShown(
        SnapFlyoutHost *this,
        const struct winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance *a2,
        char a3)
{
  const char *v6; // r9
  __m128 v7; // xmm2
  WindowDragInputProvider *v8; // rbx
  __int64 v9; // rbx
  void (__fastcall ***v10)(_QWORD, __int64 *, void **); // rcx
  const char *v11; // r9
  __int64 *v12; // [rsp+20h] [rbp-10h] BYREF
  std::_Ref_count_base *v13; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *v15; // [rsp+50h] [rbp+20h] BYREF
  char v16; // [rsp+60h] [rbp+30h] BYREF
  RTL_SRWLOCK *v17; // [rsp+68h] [rbp+38h] BYREF

  v16 = a3;
  LODWORD(v15) = winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeStartedEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs>::ProgressRequest((__int64 *)a2);
  SnapFlyoutTelemetry::SnapFlyout_InstanceShown<unsigned int,bool &>((int *)&v15, &v16);
  wil::AcquireSRWLockExclusive(&v17, (RTL_SRWLOCK *)this + 22);
  SnapFlyoutHost::TryGetFlyoutInstance((__int64)this, &v12, (__int64)a2);
  if ( !v12 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x36B,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
      v6);
  if ( a3 )
  {
    if ( *((_DWORD *)this + 12) == (unsigned int)winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeStartedEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs>::ProgressRequest((__int64 *)a2) )
    {
      if ( (unsigned int)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::SnapControlType((__int64 *)a2) == 2 )
      {
        v7 = (__m128)*((unsigned int *)this + 34);
        if ( v7.m128_f32[0] != 0.0 || *((float *)this + 35) != 0.0 )
          WindowDragInputProvider::HitTestControl(
            *((__int64 **)this + 14),
            _mm_unpacklo_ps(v7, (__m128)*((unsigned int *)this + 35)).m128_i64[0]);
        v8 = (WindowDragInputProvider *)*((_QWORD *)this + 14);
        WindowDragInputProviderTelemetry::StartWindowDrag();
        WindowDragInputProvider::RegisterForCustomDockTargetMessages(v8);
        v9 = *((_QWORD *)this + 14);
        v10 = *(void (__fastcall ****)(_QWORD, __int64 *, void **))a2;
        v15 = 0LL;
        if ( v10 )
          (**v10)(v10, &winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>, &v15);
        WindowDragInputProvider::SetActiveControl(v9, (__int64 *)&v15);
      }
      if ( !(unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(v12) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x384,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
          v11);
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                    (__int64)v12,
                    (__int64 *)&v15)
               + 273) = 1;
    }
    else
    {
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                    (__int64)v12,
                    (__int64 *)&v15)
               + 274) = 1;
    }
    tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(&v15);
    tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(v12);
  }
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v17);
}
