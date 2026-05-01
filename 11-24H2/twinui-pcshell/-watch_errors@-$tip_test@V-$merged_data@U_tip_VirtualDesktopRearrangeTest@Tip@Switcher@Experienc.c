/*
 * XREFs of ?watch_errors@?$tip_test@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@@2@XZ @ 0x180496400
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180493660 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switch.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18003F64C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028C6A4 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??0?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@QEAA@XZ @ 0x180493CC0 (--0-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Composa_ea_180493CC0.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180493D90 (--1-$com_ptr_t@V-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Composa.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180493E08 (--4-$com_ptr_t@V-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Composa.c)
 */

__int64 __fastcall tip2::tip_test<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>::watch_errors(
        void **a1,
        __int64 a2)
{
  LPVOID v4; // rax
  wil::details::in1diag3 *v5; // rcx
  volatile signed __int32 *v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v4 = CoTaskMemAlloc(0x128uLL);
    if ( !v4 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v5);
    v8 = tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>((__int64)v4);
    wil::com_ptr_t<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>,wil::err_returncode_policy>::operator=(
      a1,
      (void **)&v8);
    wil::com_ptr_t<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>,wil::err_returncode_policy>((void **)&v8);
  }
  *(_QWORD *)a2 = &tip2::test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a2 + 8),
    (struct wil::details::IFailureCallback *)a2,
    0LL,
    1);
  v6 = (volatile signed __int32 *)*a1;
  *(_QWORD *)(a2 + 56) = *a1;
  if ( v6 )
    _InterlockedIncrement(v6 + 72);
  return a2;
}
