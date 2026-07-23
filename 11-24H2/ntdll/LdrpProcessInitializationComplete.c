/*
 * XREFs of LdrpProcessInitializationComplete @ 0x180108090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int LdrpProcessInitializationComplete()
{
  return LdrpInitializationComplete(&LdrpProcessInitialized, &LdrpInitCompleteEvent, 5252);
}
