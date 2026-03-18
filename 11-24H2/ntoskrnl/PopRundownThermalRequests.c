/*
 * XREFs of PopRundownThermalRequests @ 0x140A38850
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140A37E50 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceCoolingExtension @ 0x140A38BFC (PopDiagTraceCoolingExtension.c)
 *     PopDiagTraceThermalRequest @ 0x140A73644 (PopDiagTraceThermalRequest.c)
 */

__int64 PopRundownThermalRequests()
{
  __int64 i; // rbx
  __int64 *j; // rdi

  PopAcquireRwLockExclusive(&PopCoolingExtensionLock);
  for ( i = PopCoolingExtensionList; (__int64 *)i != &PopCoolingExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)(i + 32));
      PopDiagTraceCoolingExtension(i, POP_ETW_EVENT_COOLING_EXTENSION_RUNDOWN);
      for ( j = *(__int64 **)(i + 16); j != (__int64 *)(i + 16); j = (__int64 *)*j )
      {
        if ( *((_BYTE *)j + 18) )
          PopDiagTraceThermalRequest(j, POP_ETW_EVENT_THERMAL_REQUEST_RUNDOWN);
      }
      PopReleaseRwLock((signed __int64 *)(i + 32));
    }
  }
  return PopReleaseRwLock((signed __int64 *)&PopCoolingExtensionLock);
}
