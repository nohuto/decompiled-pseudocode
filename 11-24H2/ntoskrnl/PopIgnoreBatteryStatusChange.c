/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x1404D8DFC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_140F0AED8, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_140F0AEE0);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140F0AF60, Executive, 0, 0, 0LL);
  }
  byte_140F0AF98 = 1;
  return v0;
}
