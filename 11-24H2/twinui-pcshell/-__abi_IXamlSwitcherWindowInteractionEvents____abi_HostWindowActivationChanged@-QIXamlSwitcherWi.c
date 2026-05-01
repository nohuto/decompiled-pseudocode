/*
 * XREFs of ?__abi_IXamlSwitcherWindowInteractionEvents____abi_HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAJ_N_K@Z @ 0x1801CD6C0
 * Callers:
 *     ?__abi_IXamlSwitcherWindowInteractionEvents____abi_HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA@E$AAAJ_N_K@Z @ 0x1806AF0B0 (-__abi_IXamlSwitcherWindowInteractionEvents____abi_HostWindowActivationChanged@-QIX_ea_1806AF0B0.c)
 * Callees:
 *     ?__abi_winrt_throw_on_disposed@@YAX_N@Z @ 0x1801CD778 (-__abi_winrt_throw_on_disposed@@YAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ___abi_IXamlSwitcherWindowInteractionEvents____abi_HostWindowActivationChanged__QIXamlSwitcherWindowInteractionEvents__XamlBaseViewController__UE_AAAJ_N_K_Z(
        __int64 a1,
        char a2,
        __int64 a3)
{
  __int64 v6; // rdx

  __abi_winrt_throw_on_disposed(*(_BYTE *)(a1 + 136));
  try
  {
    LOBYTE(v6) = a2;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a1 + 16) + 80LL))(a1 + 16, v6, a3);
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}
