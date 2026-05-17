/*
 * XREFs of NtOpenThreadToken @ 0x180162110
 * Callers:
 *     RtlDeleteTimer @ 0x18006AB60 (RtlDeleteTimer.c)
 *     RtlpTpRevertCapture @ 0x18006CFA0 (RtlpTpRevertCapture.c)
 *     RtlQueueWorkItem @ 0x18006D9E0 (RtlQueueWorkItem.c)
 *     RtlRegisterWait @ 0x18006DF00 (RtlRegisterWait.c)
 *     RtlDeregisterWaitEx @ 0x18006E2B0 (RtlDeregisterWaitEx.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x1800F0760 (LdrpThreadTokenSetMainThreadToken.c)
 *     RtlAdjustPrivilege @ 0x1800F1D00 (RtlAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenThreadToken()
{
  __int64 result; // rax

  result = 36LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
