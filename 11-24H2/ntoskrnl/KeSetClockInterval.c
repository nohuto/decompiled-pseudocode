/*
 * XREFs of KeSetClockInterval @ 0x14029F4B4
 * Callers:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1405C3158 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     KiSetClockInterval @ 0x14029F358 (KiSetClockInterval.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1402A0034 (KiSendClockInterruptToTargetProcessor.c)
 */

__int64 __fastcall KeSetClockInterval(unsigned int a1, char a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = KiSetClockInterval(a1, a2, a3);
  KiSendClockInterruptToTargetProcessor((unsigned int)KiClockTimerOwner);
  return v3;
}
