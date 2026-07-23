/*
 * XREFs of ZwUpdateWnfStateData @ 0x180163C60
 * Callers:
 *     SignalStartWerSvc @ 0x1800AE124 (SignalStartWerSvc.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1800D21C0 (RtlpFcNotifyFeatureUsageTarget.c)
 *     RtlTestAndPublishWnfStateData @ 0x1800EBF70 (RtlTestAndPublishWnfStateData.c)
 *     RtlPublishWnfStateData @ 0x1800EC030 (RtlPublishWnfStateData.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180145B00 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUpdateWnfStateData(
        PCWNF_STATE_NAME StateName,
        const void *Buffer,
        ULONG Length,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp,
        LOGICAL CheckStamp)
{
  NTSTATUS result; // eax

  result = 481;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
