/*
 * XREFs of _dynamic_atexit_destructor_for__VirtualDesktopSwitcherHook::s_vdsHookData__ @ 0x18022C290
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void dynamic_atexit_destructor_for__VirtualDesktopSwitcherHook::s_vdsHookData__()
{
  if ( qword_1808C9878 )
    std::_Ref_count_base::_Decref(qword_1808C9878);
}
