/*
 * XREFs of ?OnLightDismiss@IXamlSwitcherWindowInteractionEvents@@UE$AAAXXZ @ 0x1802CED40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall IXamlSwitcherWindowInteractionEvents::OnLightDismiss(__int64 a1)
{
  int v1; // eax

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  __abi_ThrowIfFailed(v1);
}
