/*
 * XREFs of PopCancelIgnoreBatteryStatusChange @ 0x140ABB650
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407CF20C (CmCompleteRegistryInitialization.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 */

__int64 PopCancelIgnoreBatteryStatusChange()
{
  KeResetEvent(&stru_140F0AF60);
  _InterlockedExchange(&dword_140F0AED8, 1);
  return KiSetTimerEx((__int64)&stru_140F0AEE0, -300000000LL, 0, 0, (__int64)&dword_140F0AF20);
}
