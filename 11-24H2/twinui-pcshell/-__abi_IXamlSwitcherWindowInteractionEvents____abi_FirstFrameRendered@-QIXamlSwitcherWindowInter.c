/*
 * XREFs of ?__abi_IXamlSwitcherWindowInteractionEvents____abi_FirstFrameRendered@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAJPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@Xaml@UI@Windows@@@Z @ 0x1801CD600
 * Callers:
 *     ?__abi_IXamlSwitcherWindowInteractionEvents____abi_FirstFrameRendered@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA@E$AAAJPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@Xaml@UI@Windows@@@Z @ 0x1806AF0A0 (-__abi_IXamlSwitcherWindowInteractionEvents____abi_FirstFrameRendered@-QIXamlSwitch_ea_1806AF0A0.c)
 * Callees:
 *     ?__abi_winrt_throw_on_disposed@@YAX_N@Z @ 0x1801CD778 (-__abi_winrt_throw_on_disposed@@YAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ___abi_IXamlSwitcherWindowInteractionEvents____abi_FirstFrameRendered__QIXamlSwitcherWindowInteractionEvents__XamlBaseViewController__UE_AAAJPE_AAVObject_Platform__PE_AAVRoutedEventArgs_Xaml_UI_Windows___Z(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __abi_winrt_throw_on_disposed(*(_BYTE *)(a1 + 136));
  try
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a1 + 16) + 104LL))(a1 + 16, a2, a3);
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}
