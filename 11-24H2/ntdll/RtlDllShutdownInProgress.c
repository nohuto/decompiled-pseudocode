/*
 * XREFs of RtlDllShutdownInProgress @ 0x1800DCC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlDllShutdownInProgress(void)
{
  return byte_1801D1908 != 0;
}
