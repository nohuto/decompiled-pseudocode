/*
 * XREFs of atexit @ 0x180002584
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001D40 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001D60 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001F30 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x180001F50 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 *     _dynamic_atexit_destructor_for__gDwmStateLock__ @ 0x180001F70 (_dynamic_atexit_destructor_for__gDwmStateLock__.c)
 *     _dynamic_initializer_for__g_PortClient__ @ 0x180001FF0 (_dynamic_initializer_for__g_PortClient__.c)
 *     __scrt_initialize_thread_safe_statics @ 0x1800025B0 (__scrt_initialize_thread_safe_statics.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800104AC (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x180011330 (-Instance@FeatureLogging@details@wil@@KAPEAV123@XZ.c)
 * Callees:
 *     _onexit @ 0x180002544 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
