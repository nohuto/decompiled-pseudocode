/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x1404D9E4C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_140F0AB38, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_140F0AB40);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140F0ABC0, Executive, 0, 0, 0LL);
  }
  byte_140F0ABF8 = 1;
  return v0;
}
