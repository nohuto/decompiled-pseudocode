/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x140781F2C
 * Callers:
 *     RtlAssert @ 0x1405E9340 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x140938BD4 (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess(KeGetCurrentThread()->ApcState.Process, 3221225473LL);
}
