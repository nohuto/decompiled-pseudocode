/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x180166030
 * Callers:
 *     SignalStartWerSvc @ 0x1800D00FC (SignalStartWerSvc.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800F86A0 (RtlWaitForWnfMetaNotification.c)
 *     RtlQueryWnfMetaNotification @ 0x180109830 (RtlQueryWnfMetaNotification.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180148D00 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryWnfStateNameInformation(
        PCWNF_STATE_NAME StateName,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        const void *ExplicitScope,
        PVOID InfoBuffer,
        ULONG InfoBufferSize)
{
  NTSTATUS result; // eax

  result = 369;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
