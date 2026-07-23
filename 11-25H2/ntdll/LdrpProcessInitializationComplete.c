/*
 * XREFs of LdrpProcessInitializationComplete @ 0x18010FB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int LdrpProcessInitializationComplete()
{
  return LdrpInitializationComplete(&LdrpProcessInitialized, &LdrpInitCompleteEvent, 5252);
}
