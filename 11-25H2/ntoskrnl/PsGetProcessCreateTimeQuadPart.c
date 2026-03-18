/*
 * XREFs of PsGetProcessCreateTimeQuadPart @ 0x14044FBA0
 * Callers:
 *     NtTerminateProcess @ 0x140A6C390 (NtTerminateProcess.c)
 * Callees:
 *     <none>
 */

LONGLONG __stdcall PsGetProcessCreateTimeQuadPart(PEPROCESS Process)
{
  return (LONGLONG)Process[1].ThreadListHead.Flink;
}
