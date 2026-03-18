/*
 * XREFs of HalpTimerInitializeVpptClockTimer @ 0x1404F4520
 * Callers:
 *     HalpAcpiPostSleep @ 0x140B5AABC (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpVpptInitializePhysicalTimer @ 0x1405462D4 (HalpVpptInitializePhysicalTimer.c)
 */

__int64 HalpTimerInitializeVpptClockTimer()
{
  __int64 result; // rax

  result = HalpClockTimer;
  if ( *(_DWORD *)(HalpClockTimer + 228) == 12 )
    return HalpVpptInitializePhysicalTimer();
  return result;
}
