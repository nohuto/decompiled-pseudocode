/*
 * XREFs of atexit @ 0x1400590A4
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1400028D0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     ATL::_dynamic_initializer_for__g_strheap__ @ 0x140002990 (ATL--_dynamic_initializer_for__g_strheap__.c)
 *     _dynamic_initializer_for__g_CritSecSadMap__ @ 0x140002A20 (_dynamic_initializer_for__g_CritSecSadMap__.c)
 *     _dynamic_initializer_for__CVpoContext::s_csMapVpoContext__ @ 0x140002A60 (_dynamic_initializer_for__CVpoContext--s_csMapVpoContext__.c)
 *     _dynamic_initializer_for__CAudioPump::s_AudioPumpTimerResolutionCountLock__ @ 0x140002AA0 (_dynamic_initializer_for__CAudioPump--s_AudioPumpTimerResolutionCountLock__.c)
 *     _dynamic_initializer_for__g_lockBridgeEndpointRegistry__ @ 0x140002AE0 (_dynamic_initializer_for__g_lockBridgeEndpointRegistry__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x140002B20 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     _dynamic_initializer_for__g_csAudioActivityPayload__ @ 0x140002B50 (_dynamic_initializer_for__g_csAudioActivityPayload__.c)
 *     _dynamic_initializer_for__gEventList__ @ 0x140002BC0 (_dynamic_initializer_for__gEventList__.c)
 *     _dynamic_initializer_for__gRTThreadManager__ @ 0x140002BE0 (_dynamic_initializer_for__gRTThreadManager__.c)
 *     _dynamic_initializer_for__g_bridgeEndpointRegistry__ @ 0x140002C00 (_dynamic_initializer_for__g_bridgeEndpointRegistry__.c)
 *     _dynamic_initializer_for__CVpoContext::s_mapVpoContext__ @ 0x140002C20 (_dynamic_initializer_for__CVpoContext--s_mapVpoContext__.c)
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x140002C40 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x140002C60 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     _dynamic_initializer_for__SadMap__ @ 0x140002C80 (_dynamic_initializer_for__SadMap__.c)
 *     _dynamic_initializer_for__SubmixList__ @ 0x140002CA0 (_dynamic_initializer_for__SubmixList__.c)
 *     _dynamic_atexit_destructor_for__g_AudioHistoryManager__ @ 0x140002CC0 (_dynamic_atexit_destructor_for__g_AudioHistoryManager__.c)
 *     ?GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z @ 0x140005A9C (-GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140007404 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z @ 0x140034410 (-GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z.c)
 *     ?get@?$static_lazy@VAudioProcessingObjectTelemetryProvider@@@details@wil@@QEAAPEAVAudioProcessingObjectTelemetryProvider@@P6AXXZ@Z @ 0x14003DC70 (-get@-$static_lazy@VAudioProcessingObjectTelemetryProvider@@@details@wil@@QEAAPEAVAudioProcessin.c)
 *     _dynamic_initializer_for__g_SpatialCrossProcessProviderRegistration__ @ 0x140045210 (_dynamic_initializer_for__g_SpatialCrossProcessProviderRegistration__.c)
 *     _dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__ @ 0x140045240 (_dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for___AtlModule__ @ 0x140049660 (_dynamic_initializer_for___AtlModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x140049CE0 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     _dynamic_initializer_for__g_CritSecSubmixList__ @ 0x14004B470 (_dynamic_initializer_for__g_CritSecSubmixList__.c)
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x14004BBC0 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x14004BDA0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x14004D380 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__g_CpuManager__ @ 0x14004E440 (_dynamic_initializer_for__g_CpuManager__.c)
 *     pre_c_initialization @ 0x140058A50 (pre_c_initialization.c)
 *     __scrt_initialize_thread_safe_statics @ 0x140059100 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     _onexit @ 0x140059064 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
