/*
 * XREFs of atexit @ 0x180072470
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800039D0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180003A90 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x180003AB0 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180003AD0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 * Callees:
 *     _onexit_0 @ 0x1800723D8 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
