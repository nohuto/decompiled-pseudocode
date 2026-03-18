/*
 * XREFs of CarIsOnecheckEnabled @ 0x140603D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char CarIsOnecheckEnabled()
{
  return VfFlightOptions & 1;
}
