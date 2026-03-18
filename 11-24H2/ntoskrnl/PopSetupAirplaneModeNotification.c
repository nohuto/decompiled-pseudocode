/*
 * XREFs of PopSetupAirplaneModeNotification @ 0x140748D40
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x140A19320 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupAirplaneModeNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (unsigned int)&v1,
           (unsigned int)&WNF_SRC_SYSTEM_RADIO_CHANGED,
           1,
           0,
           (__int64)PopWnfAirplaneModeCallback,
           0LL);
}
