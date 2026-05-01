/*
 * XREFs of ??R?$default_delete@VVirtualDesktopSwitcherHook@@@std@@QEBAXPEAVVirtualDesktopSwitcherHook@@@Z @ 0x1806AA9F8
 * Callers:
 *     ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x180114C30 (-v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ.c)
 *     ??1?$unique_ptr@VVirtualDesktopSwitcherHook@@U?$default_delete@VVirtualDesktopSwitcherHook@@@std@@@std@@QEAA@XZ @ 0x1806A9F44 (--1-$unique_ptr@VVirtualDesktopSwitcherHook@@U-$default_delete@VVirtualDesktopSwitcherHook@@@std.c)
 *     ?RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x1806ACDF8 (-RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopSwitcherHook@@QEAA@XZ @ 0x1806A9F88 (--1VirtualDesktopSwitcherHook@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<VirtualDesktopSwitcherHook>::operator()(__int64 a1, VirtualDesktopSwitcherHook *a2)
{
  if ( a2 )
  {
    VirtualDesktopSwitcherHook::~VirtualDesktopSwitcherHook(a2);
    operator delete(a2, (const struct std::nothrow_t *)1);
  }
}
