/*
 * XREFs of atexit @ 0x140005154
 * Callers:
 *     _dynamic_initializer_for__g_dwmAppHost__ @ 0x140001F40 (_dynamic_initializer_for__g_dwmAppHost__.c)
 *     _dynamic_initializer_for__g_spHotkeyCallback__ @ 0x140001F60 (_dynamic_initializer_for__g_spHotkeyCallback__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x140001F80 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x140001FC0 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1400040F0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x140004620 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 *     pre_c_initialization @ 0x140004C40 (pre_c_initialization.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x14000BF5C (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 * Callees:
 *     _onexit @ 0x140005114 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
