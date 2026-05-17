/*
 * XREFs of ZwQueryWnfStateData @ 0x180166010
 * Callers:
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x1800043E0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1800A04D4 (RtlpFcNotifyFeatureUsageTarget.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180148D00 (RtlRaiseCustomSystemEventTrigger.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x180158FB4 (UcpRetrieveCurrentConfigSettings.c)
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
