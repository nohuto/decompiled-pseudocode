/*
 * XREFs of NtSuspendThread @ 0x180165660
 * Callers:
 *     RtlpHpEnvThreadSuspend @ 0x1800E8B60 (RtlpHpEnvThreadSuspend.c)
 *     RtlpWow64SuspendThread @ 0x1800F8F50 (RtlpWow64SuspendThread.c)
 *     RtlpProcessReflectionStartup @ 0x1801334B0 (RtlpProcessReflectionStartup.c)
 *     RtlRemoteCall @ 0x1801469B0 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 NtSuspendThread()
{
  __int64 result; // rax

  result = 463LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
