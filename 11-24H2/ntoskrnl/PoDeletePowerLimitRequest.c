/*
 * XREFs of PoDeletePowerLimitRequest @ 0x14074ABF0
 * Callers:
 *     <none>
 * Callees:
 *     PopFreePowerLimitRequest @ 0x14074B644 (PopFreePowerLimitRequest.c)
 */

__int64 __fastcall PoDeletePowerLimitRequest(void *a1)
{
  if ( !a1 )
    return 3221225485LL;
  PopFreePowerLimitRequest(a1);
  return 0LL;
}
