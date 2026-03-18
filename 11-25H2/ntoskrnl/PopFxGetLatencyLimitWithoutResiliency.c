/*
 * XREFs of PopFxGetLatencyLimitWithoutResiliency @ 0x140205200
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x140203AF8 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     <none>
 */

__int64 PopFxGetLatencyLimitWithoutResiliency()
{
  __int64 result; // rax

  if ( byte_140F0B74E )
    return (unsigned int)dword_140FC4438;
  if ( PpmDisableVsyncLatencyUpdate )
    return (unsigned int)PpmLatencyToleranceLimit;
  result = (unsigned int)dword_140FC4434;
  if ( !PopFxVSyncEnabled )
    return (unsigned int)PpmLatencyToleranceLimit;
  return result;
}
