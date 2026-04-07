/*
 * XREFs of atexit @ 0x18009B974
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800026F0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     _dynamic_initializer_for__CTopLevelWindow::s_rgpwfWindowFrames__ @ 0x180002820 (_dynamic_initializer_for__CTopLevelWindow--s_rgpwfWindowFrames__.c)
 *     _dynamic_initializer_for__ColorCache::_lock__ @ 0x180002850 (_dynamic_initializer_for__ColorCache--_lock__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180002880 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x1800028F0 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180002910 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x1800153E0 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x180033000 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x180033FDC (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180057D38 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x18007B7BC (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 *     _dynamic_initializer_for__ColorCache::_cachedColors__ @ 0x180086B80 (_dynamic_initializer_for__ColorCache--_cachedColors__.c)
 *     _dynamic_initializer_for__CWindowBorder::CCachedBorderBrush::s_cache__ @ 0x180087A10 (_dynamic_initializer_for__CWindowBorder--CCachedBorderBrush--s_cache__.c)
 *     _dynamic_initializer_for__CWindowIconic::s_rgpBitmapPendingImages__ @ 0x180087DC0 (_dynamic_initializer_for__CWindowIconic--s_rgpBitmapPendingImages__.c)
 *     _dynamic_initializer_for__CDesktopManager::s_csDwmInstance__ @ 0x1800889F0 (_dynamic_initializer_for__CDesktopManager--s_csDwmInstance__.c)
 *     __scrt_initialize_thread_safe_statics @ 0x18009BAB0 (__scrt_initialize_thread_safe_statics.c)
 *     ?get@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAAPEAVWindowFrameLoggingTelemetry@@P6AXXZ@Z @ 0x1800C9D18 (-get@-$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAAPEAVWindowFrameLoggingTelemet.c)
 *     ?get@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAAPEAVCScalingCompatTelemetry@ScalingCompatTelemetry@@P6AXXZ@Z @ 0x1800F5878 (-get@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAAPEAVCScali.c)
 *     ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x1800F591C (-get@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z.c)
 * Callees:
 *     _onexit @ 0x18009B934 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
