/*
 * XREFs of HUBPSM20_IssuingAttachDeviceToPort @ 0x140012C20
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_AttachDevice @ 0x14002E3F4 (HUBMISC_AttachDevice.c)
 */

__int64 __fastcall HUBPSM20_IssuingAttachDeviceToPort(__int64 a1)
{
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 1328LL) + 1456LL) |= 0x10000u;
  return HUBMISC_AttachDevice();
}
