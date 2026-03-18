/*
 * XREFs of HUBDSM_ClearingDeviceProgrammingLostFlagOnEnum @ 0x140020540
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_CheckIfDeviceProgrammingWasLost @ 0x14002E65C (HUBMISC_CheckIfDeviceProgrammingWasLost.c)
 */

__int64 __fastcall HUBDSM_ClearingDeviceProgrammingLostFlagOnEnum(__int64 a1)
{
  return HUBMISC_CheckIfDeviceProgrammingWasLost(*(_QWORD *)(a1 + 960));
}
