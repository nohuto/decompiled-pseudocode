/*
 * XREFs of PopDeactiveThermalRequest @ 0x140AB450C
 * Callers:
 *     PoDeleteThermalRequest @ 0x14073FDE0 (PoDeleteThermalRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140425554 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x140427548 (PopTraceThermalRequestActiveActivity.c)
 *     PopPropogateCoolingChange @ 0x1404313FC (PopPropogateCoolingChange.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopGetDope @ 0x1404C0F1C (PopGetDope.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405CF604 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDiagTraceCoolingExtension @ 0x140A3331C (PopDiagTraceCoolingExtension.c)
 *     PopDiagTraceThermalRequest @ 0x140A70EF4 (PopDiagTraceThermalRequest.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140A8AAD8 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140A9CEA4 (PopThermalUpdateActiveTimeTracking.c)
 *     PopCleanCoolingExtension @ 0x140AAC394 (PopCleanCoolingExtension.c)
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
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCoolingExtensionLock);
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
  PopReleaseRwLock(&PopCoolingExtensionLock);
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
    PopCleanCoolingExtension(v1);
  }
}
