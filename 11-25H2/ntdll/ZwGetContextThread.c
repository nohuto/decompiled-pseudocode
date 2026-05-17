/*
 * XREFs of ZwGetContextThread @ 0x180165170
 * Callers:
 *     RtlpHpEnvThreadSuspend @ 0x180033BC0 (RtlpHpEnvThreadSuspend.c)
 *     PsspDumpThread @ 0x1800C77C4 (PsspDumpThread.c)
 *     RtlRemoteCall @ 0x180147F60 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetContextThread()
{
  __int64 result; // rax

  result = 251LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
