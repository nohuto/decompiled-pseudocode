/*
 * XREFs of ?GetCurrentWin32kStackRefLookAside@@YAPEAXXZ @ 0x14010B4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall GetCurrentWin32kStackRefLookAside(__int64 a1)
{
  return *(void **)(W32GetUserSessionState(a1) + 42624);
}
