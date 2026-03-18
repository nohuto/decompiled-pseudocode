/*
 * XREFs of HUBMISC_DsmEventTimer @ 0x14002FCC0
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBMISC_DsmEventTimer(__int64 a1, __int64 a2)
{
  return HUBSM_AddEvent(a2 + 512, 1002);
}
