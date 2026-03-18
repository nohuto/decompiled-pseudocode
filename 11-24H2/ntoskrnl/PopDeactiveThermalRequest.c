/*
 * XREFs of PopDeactiveThermalRequest @ 0x140AB88D4
 * Callers:
 *     PoDeleteThermalRequest @ 0x14074BEB0 (PoDeleteThermalRequest.c)
 * Callees:
 *     PopTraceThermalRequestPassiveHistogram @ 0x140330D68 (PopTraceThermalRequestPassiveHistogram.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopGetDope @ 0x1403F2908 (PopGetDope.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     PopPropogateCoolingChange @ 0x14042796C (PopPropogateCoolingChange.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1404AB004 (PopTraceThermalRequestActiveActivity.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405D4014 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDiagTraceCoolingExtension @ 0x140A38BFC (PopDiagTraceCoolingExtension.c)
 *     PopDiagTraceThermalRequest @ 0x140A73644 (PopDiagTraceThermalRequest.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140A8FAF8 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140AA26A4 (PopThermalUpdateActiveTimeTracking.c)
 *     PopCleanCoolingExtension @ 0x140AB1600 (PopCleanCoolingExtension.c)
 */

void __fastcall PopDeactiveThermalRequest(__int64 a1)
{
  _QWORD *v1; // rbx
  char v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD **)(a1 + 32);
  memset(&Event, 0, sizeof(Event));
  v3 = 0;
  PopAcquireRwLockExclusive(v1 + 4);
  if ( *(_BYTE *)(a1 + 18) )
  {
    if ( v1[17] )
    {
      PopThermalUpdatePassiveTimeTracking(a1 + 40, *(_BYTE *)(a1 + 16));
      PopTraceThermalRequestPassiveHistogram(a1);
      PopThermalUpdateTelemetryClientCount(0);
    }
    if ( v1[16] )
    {
      LOBYTE(v4) = *(_BYTE *)(a1 + 17) == 0;
      PopThermalUpdateActiveTimeTracking(a1 + 40, v4);
      PopTraceThermalRequestActiveActivity(a1);
    }
    PopDiagTraceThermalRequest(a1, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_THERMAL_REQUEST_REMOVE);
    *(_BYTE *)(a1 + 18) = 0;
    PopPropogateCoolingChange((__int64)v1);
  }
  PopReleaseRwLock(v1 + 4);
  PopAcquireRwLockExclusive(&PopCoolingExtensionLock);
  PopAcquireRwLockExclusive(v1 + 4);
  v5 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 )
    goto LABEL_22;
  v6 = *(_QWORD **)(a1 + 8);
  if ( *v6 != a1 )
    goto LABEL_22;
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  if ( (_QWORD *)v1[2] != v1 + 2 )
    goto LABEL_17;
  v7 = v1[6];
  if ( v7 )
  {
    *(_QWORD *)(PopGetDope(v7) + 64) = 0LL;
    if ( *((_BYTE *)v1 + 64) )
      PopDiagTraceCoolingExtension((__int64)v1, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_COOLING_EXTENSION_REMOVE);
    v8 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) == v1 )
    {
      v9 = (_QWORD *)v1[1];
      if ( (_QWORD *)*v9 == v1 )
      {
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        *v1 = 0LL;
        goto LABEL_16;
      }
    }
LABEL_22:
    __fastfail(3u);
  }
LABEL_16:
  v3 = 1;
LABEL_17:
  PopReleaseRwLock(v1 + 4);
  PopReleaseRwLock((signed __int64 *)&PopCoolingExtensionLock);
  if ( v3 )
  {
    PopAcquireRwLockExclusive(v1 + 4);
    if ( *((_BYTE *)v1 + 67) )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v1[9] = &Event;
      PopReleaseRwLock(v1 + 4);
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      PopAcquireRwLockExclusive(v1 + 4);
      v1[9] = 0LL;
    }
    PopReleaseRwLock(v1 + 4);
    PopCleanCoolingExtension(v1, v10, v11, v12);
  }
}
