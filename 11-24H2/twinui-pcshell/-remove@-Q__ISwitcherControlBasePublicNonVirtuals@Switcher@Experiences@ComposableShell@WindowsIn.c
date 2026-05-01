/*
 * XREFs of ?remove@?Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@FirstFrameRendered@SwitcherControlBase@2345@UE$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x1806A2D10
 * Callers:
 *     <none>
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801A74F0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _remove__Q__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__FirstFrameRendered_SwitcherControlBase_2345_UE_AAAXVEventRegistrationToken_Foundation_Windows___Z(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64 *),
        __int64 a2)
{
  __int64 v3; // rdi

  v3 = __abi_winrt_cast_to(
         0,
         a1,
         (__int64)&_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__);
  LODWORD(a2) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 328LL))(v3, a2);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v3);
  __abi_ThrowIfFailed(a2);
}
