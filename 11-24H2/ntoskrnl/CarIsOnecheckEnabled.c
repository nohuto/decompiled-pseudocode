/*
 * XREFs of CarIsOnecheckEnabled @ 0x14060E2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char CarIsOnecheckEnabled()
{
  return VfFlightOptions & 1;
}
