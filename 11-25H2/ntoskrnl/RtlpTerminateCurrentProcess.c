/*
 * XREFs of RtlpTerminateCurrentProcess @ 0x140772C84
 * Callers:
 *     RtlAssert @ 0x1405DD1F0 (RtlAssert.c)
 * Callees:
 *     PsTerminateProcess @ 0x14091F3D4 (PsTerminateProcess.c)
 */

__int64 RtlpTerminateCurrentProcess()
{
  return PsTerminateProcess(KeGetCurrentThread()->ApcState.Process, 3221225473LL);
}
