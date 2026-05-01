/*
 * XREFs of ??1VirtualDesktopSwitcherHook@@QEAA@XZ @ 0x1806A9F88
 * Callers:
 *     ??R?$default_delete@VVirtualDesktopSwitcherHook@@@std@@QEBAXPEAVVirtualDesktopSwitcherHook@@@Z @ 0x1806AA9F8 (--R-$default_delete@VVirtualDesktopSwitcherHook@@@std@@QEBAXPEAVVirtualDesktopSwitcherHook@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall VirtualDesktopSwitcherHook::~VirtualDesktopSwitcherHook(VirtualDesktopSwitcherHook *this)
{
  std::_Ref_count_base *v1; // rcx

  if ( VirtualDesktopSwitcherHook::s_vdsHookData )
  {
    v1 = qword_1808C9878;
    VirtualDesktopSwitcherHook::s_vdsHookData = 0LL;
    qword_1808C9878 = 0LL;
    if ( v1 )
      std::_Ref_count_base::_Decref(v1);
  }
}
