/*
 * XREFs of LdrpProcessInitializationComplete @ 0x18010FB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _PEB *LdrpProcessInitializationComplete()
{
  return LdrpInitializationComplete(&LdrpProcessInitialized, &LdrpInitCompleteEvent, 5252);
}
