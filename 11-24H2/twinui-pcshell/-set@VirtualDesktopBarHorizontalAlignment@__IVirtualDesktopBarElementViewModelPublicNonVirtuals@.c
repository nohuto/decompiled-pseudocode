/*
 * XREFs of ?set@VirtualDesktopBarHorizontalAlignment@__IVirtualDesktopBarElementViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXW4HorizontalAlignment@Xaml@UI@Windows@@@Z @ 0x1801CCC14
 * Callers:
 *     ?PositionVirtualDesktopSwitcher@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x1801CC878 (-PositionVirtualDesktopSwitcher@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__IVirtualDesktopBarElementViewModelPublicNonVirtuals::VirtualDesktopBarHorizontalAlignment::set(
        __int64 a1)
{
  int v1; // eax

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 208LL))(a1);
  __abi_ThrowIfFailed(v1);
}
