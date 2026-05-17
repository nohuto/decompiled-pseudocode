/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x180164AA0
 * Callers:
 *     SignalStartWerSvc @ 0x18000182C (SignalStartWerSvc.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800F6A40 (RtlWaitForWnfMetaNotification.c)
 *     RtlQueryWnfMetaNotification @ 0x180106F20 (RtlQueryWnfMetaNotification.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180147750 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryWnfStateNameInformation()
{
  __int64 result; // rax

  result = 369LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
