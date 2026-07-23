/*
 * XREFs of ZwGetContextThread @ 0x180161FA0
 * Callers:
 *     PsspDumpThread @ 0x1800BAC78 (PsspDumpThread.c)
 *     RtlpHpEnvThreadSuspend @ 0x1800E4250 (RtlpHpEnvThreadSuspend.c)
 *     RtlRemoteCall @ 0x180144D60 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  NTSTATUS result; // eax

  result = 251;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
