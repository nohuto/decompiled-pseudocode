/*
 * XREFs of NtSuspendThread @ 0x180166BF0
 * Callers:
 *     RtlpHpEnvThreadSuspend @ 0x180033BC0 (RtlpHpEnvThreadSuspend.c)
 *     RtlpWow64SuspendThread @ 0x1800FAB70 (RtlpWow64SuspendThread.c)
 *     RtlpProcessReflectionStartup @ 0x180134F90 (RtlpProcessReflectionStartup.c)
 *     RtlRemoteCall @ 0x180147F60 (RtlRemoteCall.c)
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
