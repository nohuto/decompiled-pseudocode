/*
 * XREFs of ZwUpdateWnfStateData @ 0x180166E30
 * Callers:
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1800A04D4 (RtlpFcNotifyFeatureUsageTarget.c)
 *     SignalStartWerSvc @ 0x1800D00FC (SignalStartWerSvc.c)
 *     RtlTestAndPublishWnfStateData @ 0x1800F2E60 (RtlTestAndPublishWnfStateData.c)
 *     RtlPublishWnfStateData @ 0x1800F2F20 (RtlPublishWnfStateData.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180148D00 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

__int64 ZwUpdateWnfStateData()
{
  __int64 result; // rax

  result = 481LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
