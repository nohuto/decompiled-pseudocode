/*
 * XREFs of NtOpenThreadToken @ 0x1801636A0
 * Callers:
 *     RtlDeleteTimer @ 0x18003B680 (RtlDeleteTimer.c)
 *     RtlpTpRevertCapture @ 0x18003B900 (RtlpTpRevertCapture.c)
 *     RtlQueueWorkItem @ 0x18003BEE0 (RtlQueueWorkItem.c)
 *     RtlRegisterWait @ 0x18003C400 (RtlRegisterWait.c)
 *     RtlDeregisterWaitEx @ 0x18003C7B0 (RtlDeregisterWaitEx.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x1800F2010 (LdrpThreadTokenSetMainThreadToken.c)
 *     RtlAdjustPrivilege @ 0x1800F3870 (RtlAdjustPrivilege.c)
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
