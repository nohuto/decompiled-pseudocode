/*
 * XREFs of PopOrphanCoolingExtension @ 0x14074C3B8
 * Callers:
 *     PopCoolingExtensionPnpNotification @ 0x14074C210 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     PopTraceThermalRequestPassiveHistogram @ 0x140330D68 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopGetDope @ 0x1403F2908 (PopGetDope.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1404AB004 (PopTraceThermalRequestActiveActivity.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405D4014 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDiagTraceThermalRequest @ 0x140A73644 (PopDiagTraceThermalRequest.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140A8FAF8 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140AA26A4 (PopThermalUpdateActiveTimeTracking.c)
 */

__int64 __fastcall PopOrphanCoolingExtension(unsigned __int64 *a1)
{
  __int64 v2; // rdx
  __int64 i; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 **v5; // rax

  PopAcquireRwLockExclusive(&PopCoolingExtensionLock);
  PopAcquireRwLockExclusive(a1 + 4);
  if ( a1[6] )
  {
    for ( i = a1[2]; (unsigned __int64 *)i != a1 + 2; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 18) )
      {
        *(_BYTE *)(i + 18) = 0;
        if ( a1[17] )
        {
          LOBYTE(v2) = *(_BYTE *)(i + 16);
          PopThermalUpdatePassiveTimeTracking(i + 40, v2);
          PopTraceThermalRequestPassiveHistogram(i);
          PopThermalUpdateTelemetryClientCount(0);
        }
        if ( a1[16] )
        {
          LOBYTE(v2) = *(_BYTE *)(i + 17) == 0;
          PopThermalUpdateActiveTimeTracking(i + 40, v2);
          PopTraceThermalRequestActiveActivity(i);
        }
        PopDiagTraceThermalRequest(i, POP_ETW_EVENT_THERMAL_REQUEST_REMOVE);
      }
    }
    *(_QWORD *)(PopGetDope(a1[6]) + 64) = 0LL;
    v4 = *a1;
    if ( *(unsigned __int64 **)(*a1 + 8) != a1 || (v5 = (unsigned __int64 **)a1[1], *v5 != a1) )
      __fastfail(3u);
    *v5 = (unsigned __int64 *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    *a1 = 0LL;
    a1[6] = 0LL;
  }
  PopReleaseRwLock((signed __int64 *)a1 + 4);
  return PopReleaseRwLock((signed __int64 *)&PopCoolingExtensionLock);
}
