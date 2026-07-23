/*
 * XREFs of PopIgnoreBatteryStatusChange @ 0x1404D224C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 */

char PopIgnoreBatteryStatusChange()
{
  __int32 v0; // eax

  v0 = _InterlockedExchange(&dword_140F0BD18, 0);
  if ( v0 )
  {
    LOBYTE(v0) = KeCancelTimer(&stru_140F0BD20);
    if ( !(_BYTE)v0 )
      LOBYTE(v0) = KeWaitForSingleObject(&stru_140F0BDA0, Executive, 0, 0, 0LL);
  }
  byte_140F0BDD8 = 1;
  return v0;
}
