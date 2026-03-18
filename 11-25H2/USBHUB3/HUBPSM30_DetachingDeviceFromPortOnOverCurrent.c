/*
 * XREFs of HUBPSM30_DetachingDeviceFromPortOnOverCurrent @ 0x1400126C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_DetachDevice @ 0x14002FB38 (HUBMISC_DetachDevice.c)
 */

__int64 __fastcall HUBPSM30_DetachingDeviceFromPortOnOverCurrent(__int64 a1)
{
  HUBMISC_DetachDevice(*(_QWORD *)(a1 + 960));
  return 3013LL;
}
