/*
 * XREFs of DbgUiGetThreadDebugObject @ 0x180130C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE DbgUiGetThreadDebugObject(void)
{
  return NtCurrentTeb()->DbgSsReserved[1];
}
