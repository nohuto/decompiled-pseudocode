/*
 * XREFs of PopSetupUsb4DisplayPresenceNotification @ 0x140747250
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x140A12490 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupUsb4DisplayPresenceNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (unsigned int)&v1,
           (unsigned int)&WNF_USB_USB4_DISPLAY_PRESENCE,
           1,
           0,
           (__int64)PopWnfUsb4DisplayPresenceCallback,
           0LL);
}
