/*
 * XREFs of DestroyWindowsTimers @ 0x1C008241C
 * Callers:
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C00822D8 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     FreeTimer @ 0x1C0040360 (FreeTimer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 DestroyWindowsTimers()
{
  return gtmrListHead;
}
