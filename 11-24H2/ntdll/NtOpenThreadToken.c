/*
 * XREFs of NtOpenThreadToken @ 0x1801604D0
 * Callers:
 *     RtlDeleteTimer @ 0x180087440 (RtlDeleteTimer.c)
 *     RtlpTpRevertCapture @ 0x180089880 (RtlpTpRevertCapture.c)
 *     RtlQueueWorkItem @ 0x18008A2C0 (RtlQueueWorkItem.c)
 *     RtlRegisterWait @ 0x18008A7E0 (RtlRegisterWait.c)
 *     RtlDeregisterWaitEx @ 0x18008AB90 (RtlDeregisterWaitEx.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x1800EB3E0 (LdrpThreadTokenSetMainThreadToken.c)
 *     RtlAdjustPrivilege @ 0x1800EC980 (RtlAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 36;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
