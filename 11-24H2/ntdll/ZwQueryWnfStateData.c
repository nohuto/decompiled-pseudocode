/*
 * XREFs of ZwQueryWnfStateData @ 0x180164A80
 * Callers:
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180098D70 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1800D6E50 (RtlpFcNotifyFeatureUsageTarget.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180147750 (RtlRaiseCustomSystemEventTrigger.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x180157A04 (UcpRetrieveCurrentConfigSettings.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryWnfStateData()
{
  __int64 result; // rax

  result = 368LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
