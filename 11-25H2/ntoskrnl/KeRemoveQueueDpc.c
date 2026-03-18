/*
 * XREFs of KeRemoveQueueDpc @ 0x140464AA0
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14098EB6C (EtwpFreeLoggerContext.c)
 *     IoDisconnectInterrupt @ 0x1409A2700 (IoDisconnectInterrupt.c)
 *     KiCalibrateTimeAdjustment @ 0x140B5BAB0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x140464AC0 (KeRemoveQueueDpcEx.c)
 */

BOOLEAN __stdcall KeRemoveQueueDpc(PRKDPC Dpc)
{
  return KeRemoveQueueDpcEx(Dpc, 0LL);
}
