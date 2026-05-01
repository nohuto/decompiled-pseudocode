/*
 * XREFs of _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::perform_delayed_initialization_::_1_::catch$16 @ 0x1806E11D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802DF6D4 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??$HandledUnexpectedException@AEAY0DK@$$CBGJ@GamingPostureCoreTelemetryProvider@@SAXAEAY0DK@$$CBG$$QEAJ@Z @ 0x18032A064 (--$HandledUnexpectedException@AEAY0DK@$$CBGJ@GamingPostureCoreTelemetryProvider@@SAXAEAY0DK@$$CB.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::perform_delayed_initialization_::_1_::catch_16(
        wil *a1,
        __int64 a2)
{
  *(_WORD *)(a2 + 48) = 256;
  *(_WORD *)(a2 + 48) = *(_WORD *)(a2 + 48);
  *(_DWORD *)(a2 + 56) = wil::ResultFromCaughtException(a1);
  GamingPostureCoreTelemetryProvider::HandledUnexpectedException<unsigned short const (&)[58],long>();
  return 0LL;
}
