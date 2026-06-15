/*
 * XREFs of atexit @ 0x140059194
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1400028D0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     ATL::_dynamic_initializer_for__g_strheap__ @ 0x140002980 (ATL--_dynamic_initializer_for__g_strheap__.c)
 *     _dynamic_initializer_for__g_CritSecSadMap__ @ 0x140002A10 (_dynamic_initializer_for__g_CritSecSadMap__.c)
 *     _dynamic_initializer_for__CVpoContext::s_csMapVpoContext__ @ 0x140002A50 (_dynamic_initializer_for__CVpoContext--s_csMapVpoContext__.c)
 *     _dynamic_initializer_for__CAudioPump::s_AudioPumpTimerResolutionCountLock__ @ 0x140002A90 (_dynamic_initializer_for__CAudioPump--s_AudioPumpTimerResolutionCountLock__.c)
 *     _dynamic_initializer_for__g_lockBridgeEndpointRegistry__ @ 0x140002AD0 (_dynamic_initializer_for__g_lockBridgeEndpointRegistry__.c)
 *     _dynamic_initializer_for__g_csAudioActivityPayload__ @ 0x140002B10 (_dynamic_initializer_for__g_csAudioActivityPayload__.c)
 *     _dynamic_initializer_for__gEventList__ @ 0x140002B80 (_dynamic_initializer_for__gEventList__.c)
 *     _dynamic_initializer_for__gRTThreadManager__ @ 0x140002BA0 (_dynamic_initializer_for__gRTThreadManager__.c)
 *     _dynamic_initializer_for__g_bridgeEndpointRegistry__ @ 0x140002BC0 (_dynamic_initializer_for__g_bridgeEndpointRegistry__.c)
 *     _dynamic_initializer_for__CVpoContext::s_mapVpoContext__ @ 0x140002BE0 (_dynamic_initializer_for__CVpoContext--s_mapVpoContext__.c)
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x140002C00 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x140002C20 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     _dynamic_initializer_for__SadMap__ @ 0x140002C40 (_dynamic_initializer_for__SadMap__.c)
 *     _dynamic_initializer_for__SubmixList__ @ 0x140002C60 (_dynamic_initializer_for__SubmixList__.c)
 *     _dynamic_atexit_destructor_for__g_AudioHistoryManager__ @ 0x140002C80 (_dynamic_atexit_destructor_for__g_AudioHistoryManager__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x140002CA0 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     ?GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z @ 0x140005A6C (-GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400073D4 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z @ 0x140034710 (-GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z.c)
 *     ?get@?$static_lazy@VAudioProcessingObjectTelemetryProvider@@@details@wil@@QEAAPEAVAudioProcessingObjectTelemetryProvider@@P6AXXZ@Z @ 0x14003DF70 (-get@-$static_lazy@VAudioProcessingObjectTelemetryProvider@@@details@wil@@QEAAPEAVAudioProcessin.c)
 *     _dynamic_initializer_for__g_SpatialCrossProcessProviderRegistration__ @ 0x140045510 (_dynamic_initializer_for__g_SpatialCrossProcessProviderRegistration__.c)
 *     _dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__ @ 0x140045540 (_dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for___AtlModule__ @ 0x140049960 (_dynamic_initializer_for___AtlModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x140049FE0 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     _dynamic_initializer_for__g_CritSecSubmixList__ @ 0x14004B940 (_dynamic_initializer_for__g_CritSecSubmixList__.c)
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x14004C090 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x14004C270 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x14004D6A0 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__g_CpuManager__ @ 0x14004E7D0 (_dynamic_initializer_for__g_CpuManager__.c)
 *     pre_c_initialization @ 0x140058B40 (pre_c_initialization.c)
 *     __scrt_initialize_thread_safe_statics @ 0x1400591F0 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     _onexit @ 0x140059154 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
