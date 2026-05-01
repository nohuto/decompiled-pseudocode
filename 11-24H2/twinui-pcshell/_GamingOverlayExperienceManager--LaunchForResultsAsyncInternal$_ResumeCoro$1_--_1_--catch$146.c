/*
 * XREFs of _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::catch$146 @ 0x1806E33B0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802DF6D4 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ?Stop@LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAAXJ@Z @ 0x18035BFC8 (-Stop@LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAAXJ@Z.c)
 */

void __fastcall __noreturn GamingOverlayExperienceManager::LaunchForResultsAsyncInternal__ResumeCoro_1_::_1_::catch_146(
        wil *a1,
        __int64 a2)
{
  int v3; // eax

  v3 = wil::ResultFromCaughtException(a1);
  GamingOverlayTelemetry::LaunchForResultsAsyncActivity::Stop((__int64 *)(*(_QWORD *)(a2 + 72) + 128LL), v3);
  throw;
}
