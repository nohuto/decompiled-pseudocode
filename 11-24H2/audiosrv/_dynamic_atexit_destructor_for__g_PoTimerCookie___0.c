/*
 * XREFs of _dynamic_atexit_destructor_for__g_PoTimerCookie___0 @ 0x1801736F0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z @ 0x180047230 (--R-$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z.c)
 */

void __fastcall dynamic_atexit_destructor_for__g_PoTimerCookie___0(__int64 a1)
{
  if ( g_PoTimerCookie )
    std::default_delete<_RecurringTask>::operator()(a1, g_PoTimerCookie);
}
