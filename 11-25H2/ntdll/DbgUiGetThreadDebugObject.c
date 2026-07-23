/*
 * XREFs of DbgUiGetThreadDebugObject @ 0x180134530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE DbgUiGetThreadDebugObject(void)
{
  return NtCurrentTeb()->DbgSsReserved[1];
}
