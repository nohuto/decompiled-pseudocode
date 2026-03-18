/*
 * XREFs of HUBPSM20_IssuingAttachDeviceToPort @ 0x140012C70
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_AttachDevice @ 0x14002E564 (HUBMISC_AttachDevice.c)
 */

__int64 __fastcall HUBPSM20_IssuingAttachDeviceToPort(__int64 a1)
{
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 1328LL) + 1464LL) |= 0x10000u;
  return HUBMISC_AttachDevice();
}
