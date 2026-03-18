/*
 * XREFs of PsGetProcessCreateTimeQuadPart @ 0x140450700
 * Callers:
 *     NtTerminateProcess @ 0x14093B030 (NtTerminateProcess.c)
 * Callees:
 *     <none>
 */

LONGLONG __stdcall PsGetProcessCreateTimeQuadPart(PEPROCESS Process)
{
  return (LONGLONG)Process[1].ThreadListHead.Flink;
}
