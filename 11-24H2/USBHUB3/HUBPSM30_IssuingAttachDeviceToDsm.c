/*
 * XREFs of HUBPSM30_IssuingAttachDeviceToDsm @ 0x140013FC0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_AttachDevice @ 0x14002E564 (HUBMISC_AttachDevice.c)
 *     HUBMISC_SetPortAndSpeedFlagsFor30Device @ 0x140033880 (HUBMISC_SetPortAndSpeedFlagsFor30Device.c)
 */

__int64 __fastcall HUBPSM30_IssuingAttachDeviceToDsm(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBMISC_SetPortAndSpeedFlagsFor30Device(v1);
  return HUBMISC_AttachDevice(v1);
}
