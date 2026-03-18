/*
 * XREFs of PopOrphanCoolingExtension @ 0x1407402E8
 * Callers:
 *     PopCoolingExtensionPnpNotification @ 0x140740140 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140425554 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x140427548 (PopTraceThermalRequestActiveActivity.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopGetDope @ 0x1404C0F1C (PopGetDope.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405CF604 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDiagTraceThermalRequest @ 0x140A70EF4 (PopDiagTraceThermalRequest.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140A8AAD8 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140A9CEA4 (PopThermalUpdateActiveTimeTracking.c)
 */

__int64 __fastcall PopOrphanCoolingExtension(unsigned __int64 *a1)
{
  __int64 v2; // rdx
  __int64 i; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 **v5; // rax

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCoolingExtensionLock);
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
  return PopReleaseRwLock(&PopCoolingExtensionLock);
}
