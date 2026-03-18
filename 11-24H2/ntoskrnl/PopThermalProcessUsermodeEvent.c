/*
 * XREFs of PopThermalProcessUsermodeEvent @ 0x140AA0D74
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopThermalWriteShutdownToRegistry @ 0x1404C1BBC (PopThermalWriteShutdownToRegistry.c)
 *     PopThermalEventTransitionDisableDeepSleep @ 0x1404D69F4 (PopThermalEventTransitionDisableDeepSleep.c)
 *     PopDiagTraceUsermodeTripPointExceeded @ 0x140AA0E90 (PopDiagTraceUsermodeTripPointExceeded.c)
 *     PopDiagTraceTripPointExceeded @ 0x140AA0F08 (PopDiagTraceTripPointExceeded.c)
 *     PopSqmThermalUsermodeEvent @ 0x140AA0FEC (PopSqmThermalUsermodeEvent.c)
 *     PopDiagTraceUsermodeThermalEvent @ 0x140AA10E4 (PopDiagTraceUsermodeThermalEvent.c)
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
      PopAcquireRwLockExclusive(&PopThermalStateTransitionContext);
      byte_140F0AB32 = 1;
      PopReleaseRwLock((signed __int64 *)&PopThermalStateTransitionContext);
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
