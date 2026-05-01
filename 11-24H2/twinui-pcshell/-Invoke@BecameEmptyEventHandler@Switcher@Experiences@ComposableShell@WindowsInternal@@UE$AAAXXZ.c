/*
 * XREFs of ?Invoke@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXXZ @ 0x1806AE730
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Switcher_BecameEmptyEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@23456@UE$AAAJXZ @ 0x1806AF470 (-__abi_WindowsInternal_ComposableShell_Experiences_Switcher_BecameEmptyEventHandler___abi_IDeleg.c)
 * Callees:
 *     <none>
 */

void __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::BecameEmptyEventHandler::Invoke(__int64 a1)
{
  if ( *(void ***)a1 == &WindowsInternal::ComposableShell::Experiences::Switcher::BecameEmptyEventHandler::`vftable'{for `__abi_IUnknown'} )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 8LL))(*(_QWORD *)(a1 + 296));
  else
    WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::__abi_IDelegate::Invoke(a1);
}
