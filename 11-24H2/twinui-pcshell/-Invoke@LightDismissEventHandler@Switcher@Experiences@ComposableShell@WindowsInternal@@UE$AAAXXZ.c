/*
 * XREFs of ?Invoke@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXXZ @ 0x18069FD70
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Switcher_LightDismissEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@23456@UE$AAAJXZ @ 0x1806A29D0 (-__abi_WindowsInternal_ComposableShell_Experiences_Switcher_LightDismissEventHandler___abi_IDele.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::Invoke(
        __int64 a1)
{
  if ( *(void ***)a1 == &WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 8LL))(*(_QWORD *)(a1 + 296));
  else
    return WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::__abi_IDelegate::Invoke();
}
