/*
 * XREFs of ?__abi_GetRuntimeClassName@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x1806A2060
 * Callers:
 *     ?__abi_GetRuntimeClassName@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1806A2080 (-__abi_GetRuntimeClassName@AnimationCompletedEventHandler@Switcher@Experiences@Comp_ea_1806A2080.c)
 *     ?__abi_GetRuntimeClassName@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1806A2090 (-__abi_GetRuntimeClassName@AnimationCompletedEventHandler@Switcher@Experiences@Comp_ea_1806A2090.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Experiences.Switcher.AnimationCompletedEventHandler",
           0x53u,
           a2);
}
