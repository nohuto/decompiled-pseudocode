/*
 * XREFs of ZwUpdateWnfStateData @ 0x1801658A0
 * Callers:
 *     SignalStartWerSvc @ 0x18000182C (SignalStartWerSvc.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1800D6E50 (RtlpFcNotifyFeatureUsageTarget.c)
 *     RtlTestAndPublishWnfStateData @ 0x1800F12F0 (RtlTestAndPublishWnfStateData.c)
 *     RtlPublishWnfStateData @ 0x1800F13B0 (RtlPublishWnfStateData.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180147750 (RtlRaiseCustomSystemEventTrigger.c)
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
