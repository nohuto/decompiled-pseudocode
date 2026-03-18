/*
 * XREFs of PopRundownPowerLimitRequests @ 0x140A33184
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140A32540 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopDiagTracePowerLimitExtension @ 0x14074AFB8 (PopDiagTracePowerLimitExtension.c)
 *     PopDiagTracePowerLimitRequest @ 0x14074B34C (PopDiagTracePowerLimitRequest.c)
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
