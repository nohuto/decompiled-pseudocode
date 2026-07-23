/*
 * XREFs of PopRundownPowerLimitRequests @ 0x140A2DB24
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140A2CF10 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopDiagTracePowerLimitExtension @ 0x1407554EC (PopDiagTracePowerLimitExtension.c)
 *     PopDiagTracePowerLimitRequest @ 0x140755880 (PopDiagTracePowerLimitRequest.c)
 */

__int64 PopRundownPowerLimitRequests()
{
  __int64 i; // rbx
  __int64 j; // rdi

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerLimitExtensionLock);
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
  return PopReleaseRwLock(&PopPowerLimitExtensionLock);
}
