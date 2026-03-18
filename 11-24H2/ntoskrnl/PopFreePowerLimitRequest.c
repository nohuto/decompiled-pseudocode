/*
 * XREFs of PopFreePowerLimitRequest @ 0x14074B644
 * Callers:
 *     PoCreatePowerLimitRequest @ 0x14074AB10 (PoCreatePowerLimitRequest.c)
 *     PoDeletePowerLimitRequest @ 0x14074ABF0 (PoDeletePowerLimitRequest.c)
 * Callees:
 *     PoDestroyReasonContext @ 0x140331BA4 (PoDestroyReasonContext.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopGetDope @ 0x1403F2908 (PopGetDope.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopCleanPowerLimitExtension @ 0x1405CF754 (PopCleanPowerLimitExtension.c)
 *     PopUpdatePowerLimitTimeTracking @ 0x1405CF8EC (PopUpdatePowerLimitTimeTracking.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405D4014 (PopThermalUpdateTelemetryClientCount.c)
 *     PopTracePowerLimitHistogram @ 0x1405D620C (PopTracePowerLimitHistogram.c)
 *     PopEvaluatePowerLimitChange @ 0x14074B3D4 (PopEvaluatePowerLimitChange.c)
 *     PopDiagTracePowerLimitRequest @ 0x140757400 (PopDiagTracePowerLimitRequest.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFreePowerLimitRequest(_QWORD *P)
{
  unsigned __int64 *v2; // rdi
  unsigned int i; // ebp
  char v4; // bp
  _QWORD *v5; // rcx
  PVOID *v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  PopAcquireRwLockExclusive(&PopPowerLimitExtensionLock);
  v2 = (unsigned __int64 *)P[8];
  if ( !v2 )
    goto LABEL_23;
  PopReleaseRwLock((signed __int64 *)&PopPowerLimitExtensionLock);
  PopAcquireRwLockExclusive(v2 + 4);
  if ( *((_BYTE *)P + 16) )
  {
    *((_BYTE *)P + 16) = 0;
    PopDiagTracePowerLimitRequest(P, POP_ETW_EVENT_POWER_LIMIT_REQUEST_REMOVE);
    if ( *((_BYTE *)P + 48) )
    {
      for ( i = 0; i < *((_DWORD *)P + 8); ++i )
        PopUpdatePowerLimitTimeTracking((__int64)P, i);
      PopTracePowerLimitHistogram((__int64)P);
      PopThermalUpdateTelemetryClientCount(0);
      *((_BYTE *)P + 48) = 0;
    }
    PopEvaluatePowerLimitChange((__int64)v2);
  }
  PopReleaseRwLock((signed __int64 *)v2 + 4);
  v4 = 0;
  PopAcquireRwLockExclusive(&PopPowerLimitExtensionLock);
  PopAcquireRwLockExclusive(v2 + 4);
  if ( P[8] )
  {
    v5 = (_QWORD *)*P;
    if ( *(_QWORD **)(*P + 8LL) != P )
      goto LABEL_30;
    v6 = (PVOID *)P[1];
    if ( *v6 != P )
      goto LABEL_30;
    *v6 = v5;
    v5[1] = v6;
    P[8] = 0LL;
    if ( (unsigned __int64 *)v2[2] == v2 + 2 )
    {
      v7 = v2[7];
      if ( !v7 )
      {
LABEL_16:
        v4 = 1;
        goto LABEL_17;
      }
      *(_QWORD *)(PopGetDope(v7) + 72) = 0LL;
      v8 = *v2;
      if ( *(unsigned __int64 **)(*v2 + 8) == v2 )
      {
        v9 = (unsigned __int64 **)v2[1];
        if ( *v9 == v2 )
        {
          *v9 = (unsigned __int64 *)v8;
          *(_QWORD *)(v8 + 8) = v9;
          *v2 = 0LL;
          goto LABEL_16;
        }
      }
LABEL_30:
      __fastfail(3u);
    }
  }
LABEL_17:
  PopReleaseRwLock((signed __int64 *)v2 + 4);
  PopReleaseRwLock((signed __int64 *)&PopPowerLimitExtensionLock);
  if ( v4 )
  {
    PopAcquireRwLockExclusive(v2 + 4);
    if ( *((_DWORD *)v2 + 44) || *((_DWORD *)v2 + 45) )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v2[23] = (unsigned __int64)&Event;
      PopReleaseRwLock((signed __int64 *)v2 + 4);
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      PopAcquireRwLockExclusive(v2 + 4);
      v2[23] = 0LL;
    }
    PopReleaseRwLock((signed __int64 *)v2 + 4);
    PopCleanPowerLimitExtension(v2, v10, v11, v12);
  }
  PopAcquireRwLockExclusive(&PopPowerLimitExtensionLock);
LABEL_23:
  v13 = (_QWORD *)P[3];
  if ( v13 )
  {
    PoDestroyReasonContext(v13);
    P[3] = 0LL;
  }
  v14 = (void *)P[7];
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0x6D6C5050u);
    P[7] = 0LL;
  }
  v15 = (void *)P[5];
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0x6D6C5050u);
    P[5] = 0LL;
  }
  ExFreePoolWithTag(P, 0x6D6C5050u);
  return PopReleaseRwLock((signed __int64 *)&PopPowerLimitExtensionLock);
}
