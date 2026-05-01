/*
 * XREFs of _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::dtor$2 @ 0x1806E2D50
 * Callers:
 *     <none>
 * Callees:
 *     ??1LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAA@XZ @ 0x180348660 (--1LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAA@XZ.c)
 */

void __fastcall GamingOverlayExperienceManager::LaunchForResultsAsyncInternal__ResumeCoro_1_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 224) = *(_QWORD *)(a2 + 72) + 128LL;
  GamingOverlayTelemetry::LaunchForResultsAsyncActivity::~LaunchForResultsAsyncActivity(*(GamingOverlayTelemetry::LaunchForResultsAsyncActivity **)(a2 + 224));
}
