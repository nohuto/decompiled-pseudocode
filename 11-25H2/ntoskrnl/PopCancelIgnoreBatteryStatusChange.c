/*
 * XREFs of PopCancelIgnoreBatteryStatusChange @ 0x140AB7310
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407BF9FC (CmCompleteRegistryInitialization.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 */

__int64 PopCancelIgnoreBatteryStatusChange()
{
  KeResetEvent(&stru_140F0ABC0);
  _InterlockedExchange(&dword_140F0AB38, 1);
  return KiSetTimerEx((__int64)&stru_140F0AB40, -300000000LL, 0, 0, (__int64)&dword_140F0AB80);
}
