/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x140781E5C
 * Callers:
 *     RtlAssert @ 0x1405E6890 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x1408F32A4 (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess(KeGetCurrentThread()->ApcState.Process, 3221225473LL);
}
