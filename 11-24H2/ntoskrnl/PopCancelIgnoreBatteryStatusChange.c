/*
 * XREFs of PopCancelIgnoreBatteryStatusChange @ 0x140AB6670
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407CF6FC (CmCompleteRegistryInitialization.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 */

__int64 PopCancelIgnoreBatteryStatusChange()
{
  KeResetEvent(&stru_140F0BDA0);
  _InterlockedExchange(&dword_140F0BD18, 1);
  return KiSetTimerEx((__int64)&stru_140F0BD20, -300000000LL, 0, 0, (__int64)&dword_140F0BD60);
}
