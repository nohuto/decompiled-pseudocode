/*
 * XREFs of PopRundownPowerLimitRequests @ 0x140A38A64
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140A37E50 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopDiagTracePowerLimitExtension @ 0x14075706C (PopDiagTracePowerLimitExtension.c)
 *     PopDiagTracePowerLimitRequest @ 0x140757400 (PopDiagTracePowerLimitRequest.c)
 */

__int64 PopRundownPowerLimitRequests()
{
  __int64 i; // rbx
  __int64 j; // rdi

  PopAcquireRwLockExclusive(&PopPowerLimitExtensionLock);
  for ( i = PopPowerLimitExtensionList; (__int64 *)i != &PopPowerLimitExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 48) )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)(i + 32));
      PopDiagTracePowerLimitExtension(i, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_POWER_LIMIT_EXTENSION_RUNDOWN);
      for ( j = *(_QWORD *)(i + 16); j != i + 16; j = *(_QWORD *)j )
      {
        if ( *(_BYTE *)(j + 16) )
          PopDiagTracePowerLimitRequest(j, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_POWER_LIMIT_REQUEST_RUNDOWN);
      }
      PopReleaseRwLock((signed __int64 *)(i + 32));
    }
  }
  return PopReleaseRwLock((signed __int64 *)&PopPowerLimitExtensionLock);
}
