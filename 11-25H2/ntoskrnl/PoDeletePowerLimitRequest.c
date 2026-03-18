/*
 * XREFs of PoDeletePowerLimitRequest @ 0x14073EB20
 * Callers:
 *     <none>
 * Callees:
 *     PopFreePowerLimitRequest @ 0x14073F574 (PopFreePowerLimitRequest.c)
 */

__int64 __fastcall PoDeletePowerLimitRequest(void *a1)
{
  if ( !a1 )
    return 3221225485LL;
  PopFreePowerLimitRequest(a1);
  return 0LL;
}
