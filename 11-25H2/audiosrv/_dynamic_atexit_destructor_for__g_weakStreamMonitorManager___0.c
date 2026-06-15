/*
 * XREFs of _dynamic_atexit_destructor_for__g_weakStreamMonitorManager___0 @ 0x180169DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A400 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void dynamic_atexit_destructor_for__g_weakStreamMonitorManager___0()
{
  if ( *((_QWORD *)&g_weakStreamMonitorManager + 1) )
    std::_Ref_count_base::_Decwref(*((std::_Ref_count_base **)&g_weakStreamMonitorManager + 1));
}
