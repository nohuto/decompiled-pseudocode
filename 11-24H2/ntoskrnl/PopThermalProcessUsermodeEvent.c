/*
 * XREFs of PopThermalProcessUsermodeEvent @ 0x140A9C104
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopThermalWriteShutdownToRegistry @ 0x1404BD1AC (PopThermalWriteShutdownToRegistry.c)
 *     PopThermalEventTransitionDisableDeepSleep @ 0x1404CFE44 (PopThermalEventTransitionDisableDeepSleep.c)
 *     PopDiagTraceUsermodeTripPointExceeded @ 0x140A9C220 (PopDiagTraceUsermodeTripPointExceeded.c)
 *     PopDiagTraceTripPointExceeded @ 0x140A9C298 (PopDiagTraceTripPointExceeded.c)
 *     PopSqmThermalUsermodeEvent @ 0x140A9C37C (PopSqmThermalUsermodeEvent.c)
 *     PopDiagTraceUsermodeThermalEvent @ 0x140A9C474 (PopDiagTraceUsermodeThermalEvent.c)
 */

__int64 __fastcall PopThermalProcessUsermodeEvent(__int64 a1)
{
  unsigned __int16 v2; // bx
  unsigned int v3; // edi
  __int16 v4; // ax
  _WORD v6[2]; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+34h] [rbp-14h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  v7 = 0;
  PopDiagTraceUsermodeThermalEvent();
  PopThermalEventTransitionDisableDeepSleep(*(_DWORD *)a1);
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
    {
      PopDiagTraceUsermodeTripPointExceeded(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(unsigned int *)(a1 + 8), 0LL);
      PopSqmThermalUsermodeEvent(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 4), 0);
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopThermalStateTransitionContext);
      byte_140F0AF72 = 1;
      PopReleaseRwLock(&PopThermalStateTransitionContext);
    }
  }
  else
  {
    v2 = *(_WORD *)(a1 + 12);
    v3 = *(_DWORD *)(a1 + 8);
    PopDiagTraceTripPointExceeded(v2, a1 + 14, v3, &POP_ETW_EVENT_CRITICAL_TRIP_POINT_DIAGNOSTIC);
    PopDiagTraceTripPointExceeded(v2, a1 + 14, v3, &POP_ETW_EVENT_CRITICAL_TRIP_POINT_SYSTEM);
    PopSqmThermalUsermodeEvent(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 4), 1);
    v4 = 2 * *(_WORD *)(a1 + 12);
    v8 = a1 + 14;
    v6[0] = v4;
    v6[1] = v4;
    PopThermalWriteShutdownToRegistry((__int64)v6, (void *)(a1 + 4));
  }
  return 0LL;
}
