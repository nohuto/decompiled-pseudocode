/*
 * XREFs of ?IsSwitchItemVisibleOnDesktop@IVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UE$AAA_NPE$AAUISwitchItem@2345@PE$AAUIVirtualDesktop@2345@@Z @ 0x1806B4738
 * Callers:
 *     ?CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x1806B2058 (-CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitas.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180040600 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController::IsSwitchItemVisibleOnDesktop(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  int v4; // eax
  char v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v6 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, char *))(v3 + 80))(a1, a2, a3, &v6);
  __abi_ThrowIfFailed(v4);
  return v6;
}
