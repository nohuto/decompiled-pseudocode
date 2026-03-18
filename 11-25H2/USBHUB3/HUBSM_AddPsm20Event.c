/*
 * XREFs of HUBSM_AddPsm20Event @ 0x14000AD60
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBSM_AddPsm20Event(__int64 a1, int a2)
{
  return HUBSM_AddEvent(a1 + 272, a2);
}
