/*
 * XREFs of PoDeletePowerLimitRequest @ 0x140748F20
 * Callers:
 *     <none>
 * Callees:
 *     PopFreePowerLimitRequest @ 0x140749974 (PopFreePowerLimitRequest.c)
 */

__int64 __fastcall PoDeletePowerLimitRequest(void *a1)
{
  if ( !a1 )
    return 3221225485LL;
  PopFreePowerLimitRequest(a1);
  return 0LL;
}
