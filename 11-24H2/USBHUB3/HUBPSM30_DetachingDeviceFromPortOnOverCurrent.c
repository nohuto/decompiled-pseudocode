/*
 * XREFs of HUBPSM30_DetachingDeviceFromPortOnOverCurrent @ 0x140012710
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_DetachDevice @ 0x14002FC64 (HUBMISC_DetachDevice.c)
 */

__int64 __fastcall HUBPSM30_DetachingDeviceFromPortOnOverCurrent(__int64 a1)
{
  HUBMISC_DetachDevice(*(_QWORD *)(a1 + 960));
  return 3013LL;
}
