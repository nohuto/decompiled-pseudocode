/*
 * XREFs of ?__abi_IXamlMultitaskingViewController____abi_VirtualDesktopInvoked@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAJPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z @ 0x1806AF020
 * Callers:
 *     ?__abi_IXamlMultitaskingViewController____abi_VirtualDesktopInvoked@?QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAJPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z @ 0x1806AF090 (-__abi_IXamlMultitaskingViewController____abi_VirtualDesktopInvoked@-QIXamlMultitas_ea_1806AF090.c)
 * Callees:
 *     ?__abi_winrt_throw_on_disposed@@YAX_N@Z @ 0x1801CD778 (-__abi_winrt_throw_on_disposed@@YAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ___abi_IXamlMultitaskingViewController____abi_VirtualDesktopInvoked__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAJPE_AAUIVirtualDesktop_Multitasking_ComposableShell_Internal_Windows__0_Z(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __abi_winrt_throw_on_disposed(*(_BYTE *)(a1 + 136));
  try
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a1 + 8) + 128LL))(a1 + 8, a2, a3);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
