/*
 * XREFs of atexit @ 0x1800205AC
 * Callers:
 *     _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001BB0 (_dynamic_initializer_for__s_HostedAppInteractivityManager__.c)
 *     ATL::_dynamic_initializer_for__g_strheap__ @ 0x180001C10 (ATL--_dynamic_initializer_for__g_strheap__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001C60 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     _dynamic_initializer_for__TsSessionListLock__ @ 0x180001D60 (_dynamic_initializer_for__TsSessionListLock__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__ @ 0x180001DA0 (PickerHostContextManager--_dynamic_initializer_for__s_csPickerHostContextList__.c)
 *     _dynamic_initializer_for__TsSessionList__ @ 0x180001DE0 (_dynamic_initializer_for__TsSessionList__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001E10 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001E30 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_PickerHostContextList__ @ 0x180001E50 (PickerHostContextManager--_dynamic_initializer_for__s_PickerHostContextList__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x180001E70 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__g_StreamClassPolicyManager__ @ 0x180001E90 (_dynamic_initializer_for__g_StreamClassPolicyManager__.c)
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x180001EB0 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001ED0 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001EF0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A860 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000B8F0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?LogState@CApplicationManager@@QEAAXXZ @ 0x1800115E0 (-LogState@CApplicationManager@@QEAAXXZ.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x1800127C0 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18001691C (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     __scrt_initialize_thread_safe_statics @ 0x1800206B0 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     _onexit @ 0x18002056C (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
