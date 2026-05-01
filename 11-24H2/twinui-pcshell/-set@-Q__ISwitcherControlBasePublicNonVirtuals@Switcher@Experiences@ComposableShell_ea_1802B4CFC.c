/*
 * XREFs of ?set@?Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@DismissAnimationTelemetryId@SwitcherControlBase@2345@UE$AAAXVGuid@Platform@@@Z @ 0x1802B4CFC
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18011D884 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1806BA7EC (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180040600 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _set__Q__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__DismissAnimationTelemetryId_SwitcherControlBase_2345_UE_AAAXVGuid_Platform___Z(
        __int64 (__fastcall ***a1)(_QWORD, void *, _QWORD **),
        __int128 *a2)
{
  _QWORD *v3; // rdi
  int v4; // eax
  __int64 v5; // rax
  int v6; // ebx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+48h] [rbp+10h]

  v3 = 0LL;
  v8 = 0LL;
  if ( a1 )
  {
    v4 = (**a1)(
           a1,
           &_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__,
           &v8);
    __abi_ThrowIfFailed(v4);
    v3 = v8;
  }
  v9 = v3;
  v5 = *v3;
  v7 = *a2;
  v6 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v5 + 312))(v3, &v7);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v3);
  __abi_ThrowIfFailed(v6);
}
