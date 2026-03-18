/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequest @ 0x1405C3158
 * Callers:
 *     KeUpdatePendingQosRequest @ 0x14029E99C (KeUpdatePendingQosRequest.c)
 *     KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x1405C31F0 (KiSetVirtualHeteroClockIntervalRequestDpcRoutine.c)
 * Callees:
 *     KeSetClockInterval @ 0x14029F4B4 (KeSetClockInterval.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiResetClockInterval @ 0x1405BA4D4 (KiResetClockInterval.c)
 */

__int64 __fastcall KiSetVirtualHeteroClockIntervalRequest(char a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  if ( a1 )
  {
    if ( byte_140E0AF50 )
      KiResetClockInterval((__int64)&KiVirtualHeteroClockRequest);
  }
  else if ( !byte_140E0AF50 && KiQosHysteresisTimerPeriod )
  {
    KeSetClockInterval(KiQosHysteresisTimerPeriod, 0, (__int64)&KiVirtualHeteroClockRequest);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
