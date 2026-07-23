/*
 * XREFs of RtlGetCurrentTransaction @ 0x1800E25B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE RtlGetCurrentTransaction(void)
{
  return NtCurrentTeb()->CurrentTransactionHandle;
}
