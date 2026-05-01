/*
 * XREFs of _dynamic_atexit_destructor_for__VirtualDesktopSwitcherHook::s_vdsHookData__ @ 0x1802C8370
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void dynamic_atexit_destructor_for__VirtualDesktopSwitcherHook::s_vdsHookData__()
{
  if ( qword_18098F2A0 )
    std::_Ref_count_base::_Decref(qword_18098F2A0);
}
