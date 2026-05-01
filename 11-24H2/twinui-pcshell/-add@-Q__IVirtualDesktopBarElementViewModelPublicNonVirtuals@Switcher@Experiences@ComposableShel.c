/*
 * XREFs of ?add@?Q__IVirtualDesktopBarElementViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@VirtualDesktopInvoked@VirtualDesktopBarElementViewModel@2345@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVVirtualDesktopInvokedEventHandler@2345@@Z @ 0x1806BBFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180040600 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall _add__Q__IVirtualDesktopBarElementViewModelPublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__VirtualDesktopInvoked_VirtualDesktopBarElementViewModel_2345_UE_AAA_AVEventRegistrationToken_Foundation_Windows__PE_AAVVirtualDesktopInvokedEventHandler_2345__Z(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  int v4; // eax

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a1 + 336LL))(a1, a3, a2);
  __abi_ThrowIfFailed(v4);
  return a2;
}
