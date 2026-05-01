/*
 * XREFs of ?__abi_GetRuntimeClassName@ItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x1806A2120
 * Callers:
 *     ?__abi_GetRuntimeClassName@ItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1806A2140 (-__abi_GetRuntimeClassName@ItemContextMenuInvokedHandler@Switcher@Experiences@Compo_ea_1806A2140.c)
 *     ?__abi_GetRuntimeClassName@ItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1806A2150 (-__abi_GetRuntimeClassName@ItemContextMenuInvokedHandler@Switcher@Experiences@Compo_ea_1806A2150.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Experiences.Switcher.ItemContextMenuInvokedHandler",
           0x52u,
           a2);
}
