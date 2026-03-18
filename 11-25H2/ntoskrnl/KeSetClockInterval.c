/*
 * XREFs of KeSetClockInterval @ 0x1402762A4
 * Callers:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1405BF078 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KiSetClockInterval @ 0x14027614C (KiSetClockInterval.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1402777C0 (KiSendClockInterruptToTargetProcessor.c)
 */

__int64 __fastcall KeSetClockInterval(unsigned int a1, char a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = KiSetClockInterval(a1, a2, a3);
  KiSendClockInterruptToTargetProcessor((unsigned int)KiClockTimerOwner);
  return v3;
}
