/*
 * XREFs of LdrpProcessInitializationComplete @ 0x18010D0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int *LdrpProcessInitializationComplete()
{
  return LdrpInitializationComplete(&LdrpProcessInitialized, &LdrpInitCompleteEvent, 0x1484u);
}
