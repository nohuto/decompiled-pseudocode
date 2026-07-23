/*
 * XREFs of KeSetClockInterval @ 0x140463D8C
 * Callers:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1405C0728 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KiSendClockInterruptToTargetProcessor @ 0x1403179A4 (KiSendClockInterruptToTargetProcessor.c)
 *     KiSetClockInterval @ 0x140463DB4 (KiSetClockInterval.c)
 */

__int64 KeSetClockInterval()
{
  unsigned int v0; // ebx

  v0 = KiSetClockInterval();
  KiSendClockInterruptToTargetProcessor(KiClockTimerOwner);
  return v0;
}
