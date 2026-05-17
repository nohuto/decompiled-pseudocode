/*
 * XREFs of ZwGetContextThread @ 0x180163BE0
 * Callers:
 *     PsspDumpThread @ 0x1800C30B4 (PsspDumpThread.c)
 *     RtlpHpEnvThreadSuspend @ 0x1800E8B60 (RtlpHpEnvThreadSuspend.c)
 *     RtlRemoteCall @ 0x1801469B0 (RtlRemoteCall.c)
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
