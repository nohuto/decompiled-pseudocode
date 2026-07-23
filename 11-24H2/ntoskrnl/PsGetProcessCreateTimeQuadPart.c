/*
 * XREFs of PsGetProcessCreateTimeQuadPart @ 0x140445970
 * Callers:
 *     NtTerminateProcess @ 0x140ACF260 (NtTerminateProcess.c)
 * Callees:
 *     <none>
 */

LONGLONG __stdcall PsGetProcessCreateTimeQuadPart(PEPROCESS Process)
{
  return (LONGLONG)Process[1].ThreadListHead.Flink;
}
