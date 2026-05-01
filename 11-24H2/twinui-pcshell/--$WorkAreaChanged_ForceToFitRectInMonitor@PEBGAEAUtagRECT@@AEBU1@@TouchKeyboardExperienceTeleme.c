/*
 * XREFs of ??$WorkAreaChanged_ForceToFitRectInMonitor@PEBGAEAUtagRECT@@AEBU1@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAUtagRECT@@AEBU1@@Z @ 0x180469B90
 * Callers:
 *     ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x180231970 (-WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ @ 0x18007FF6C (-Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ.c)
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x180080268 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?WorkAreaChanged_ForceToFitRectInMonitor_@TouchKeyboardExperienceTelemetryLogger@@QEBAXPEBGAEBUtagRECT@@1@Z @ 0x1804780FC (-WorkAreaChanged_ForceToFitRectInMonitor_@TouchKeyboardExperienceTelemetryLogger@@QEBAXPEBGAEBUt.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::WorkAreaChanged_ForceToFitRectInMonitor<unsigned short const *,tagRECT &,tagRECT const &>(
        const unsigned __int16 **a1,
        const struct tagRECT *a2,
        const struct tagRECT *a3)
{
  TouchKeyboardExperienceTelemetryLogger *v6; // rcx

  if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled() )
  {
    TouchKeyboardExperienceTelemetryLogger::Instance();
    TouchKeyboardExperienceTelemetryLogger::WorkAreaChanged_ForceToFitRectInMonitor_(v6, *a1, a2, a3);
  }
}
