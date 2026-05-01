/*
 * XREFs of atexit @ 0x180002390
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001C40 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x180001C60 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001C80 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001CA0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x18000A91C (-Instance@FeatureLogging@details@wil@@KAPEAV123@XZ.c)
 * Callees:
 *     _onexit_0 @ 0x1800022F8 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
