/*
 * XREFs of CarIsOnecheckEnabled @ 0x14060FCE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char CarIsOnecheckEnabled()
{
  return VfFlightOptions & 1;
}
