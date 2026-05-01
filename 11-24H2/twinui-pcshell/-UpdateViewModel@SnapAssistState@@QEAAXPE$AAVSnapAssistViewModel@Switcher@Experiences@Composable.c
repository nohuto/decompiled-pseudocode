/*
 * XREFs of ?UpdateViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBUISwitchItemDataSource@Multitasking@5Internal@Windows@winrt@@@Z @ 0x1806BE1CC
 * Callers:
 *     ?OnAppSnapped@XamlSnapAssistViewHost@@UEAAJ_KURect@Foundation@Windows@ABI@@@Z @ 0x1806A7660 (-OnAppSnapped@XamlSnapAssistViewHost@@UEAAJ_KURect@Foundation@Windows@ABI@@@Z.c)
 * Callees:
 *     ??0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModelArgs@1234@@Z @ 0x1800400C4 (--0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSw.c)
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180040600 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$to_cx@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@@@YAPE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@AEBUIUnknown@Foundation@4winrt@@@Z @ 0x180040804 (--$to_cx@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@@@YAPE$AAUISwitch.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801A74F0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@2@XZ @ 0x18028C74C (-watch_errors@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028D6FC (--1-$test_watcher@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?get@VirtualDesktopList@__IVirtualDesktopBarElementPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVVirtualDesktopListView@3456@XZ @ 0x1802C8E94 (-get@VirtualDesktopList@__IVirtualDesktopBarElementPublicNonVirtuals@Switcher@Experiences@Compos.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ @ 0x1806B91F8 (-get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ.c)
 *     ??0hresult_illegal_state_change@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1806BD7D8 (--0hresult_illegal_state_change@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?GetTargetRegion@SnapAssistState@@QEAA?AUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@XZ @ 0x1806BDA14 (-GetTargetRegion@SnapAssistState@@QEAA-AUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall SnapAssistState::UpdateViewModel(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall ****a3)(_QWORD, void *, __int64 *))
{
  int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  void **v12; // r9
  __int64 v13; // rbx
  _OWORD *TargetRegion; // rax
  int v15; // eax
  const struct winrt::impl::slim_source_location *v16; // rax
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-49h] BYREF
  _OWORD v18[2]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v19[64]; // [rsp+60h] [rbp-9h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, __int64, __int64 *); // [rsp+D0h] [rbp+67h]
  __int64 v21; // [rsp+D0h] [rbp+67h]
  __int64 *v22; // [rsp+E8h] [rbp+7Fh]

  tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::watch_errors(
    a1 + 200,
    (__int64)v19);
  v20 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))WindowsInternal::ComposableShell::Experiences::Switcher::__IVirtualDesktopBarElementPublicNonVirtuals::VirtualDesktopList::get(a2);
  v22 = (__int64 *)__abi_winrt_cast_to(0, v20, (__int64)&_uuidof__AUIBindableVector_Interop_Xaml_UI_Windows__);
  v6 = Windows::UI::Xaml::Interop::IBindableVector::Size::get(v22);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v22);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v20);
  if ( !v6 )
  {
    v16 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v18);
    winrt::hresult_illegal_state_change::hresult_illegal_state_change(
      (winrt::hresult_illegal_state_change *)pExceptionObject,
      v16);
    throw (winrt::hresult_illegal_state_change *)pExceptionObject;
  }
  v7 = *(_QWORD *)(a1 + 168);
  v8 = to_cx<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource>(a3);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 56LL))(v7, v8);
  __abi_ThrowIfFailed(v9);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v8);
  v13 = WindowsInternal::ComposableShell::Experiences::Switcher::SwitchItemListViewModel::SwitchItemListViewModel(
          v10,
          *(_QWORD *)(a1 + 168),
          v11,
          v12);
  v21 = __abi_winrt_ptr_ctor(v13);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v13);
  TargetRegion = SnapAssistState::GetTargetRegion(a1, v18);
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 64LL))(a2, *(_QWORD *)TargetRegion, v21);
  __abi_ThrowIfFailed(v15);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v21);
  tip2::test_watcher<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_watcher<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>((__int64)v19);
}
