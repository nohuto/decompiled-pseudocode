/*
 * XREFs of NtFreezeTransactions @ 0x1404F9850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl NtFreezeTransactions(PLARGE_INTEGER FreezeTimeout, PLARGE_INTEGER ThawTimeout)
{
  return __imp_NtFreezeTransactions(FreezeTimeout, ThawTimeout);
}
