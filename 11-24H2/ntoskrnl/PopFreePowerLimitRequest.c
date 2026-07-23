/*
 * XREFs of PopFreePowerLimitRequest @ 0x140749974
 * Callers:
 *     PoCreatePowerLimitRequest @ 0x140748E40 (PoCreatePowerLimitRequest.c)
 *     PoDeletePowerLimitRequest @ 0x140748F20 (PoDeletePowerLimitRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PoDestroyReasonContext @ 0x1402BC528 (PoDestroyReasonContext.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PopGetDope @ 0x1403E6628 (PopGetDope.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopCleanPowerLimitExtension @ 0x1405CCE74 (PopCleanPowerLimitExtension.c)
 *     PopUpdatePowerLimitTimeTracking @ 0x1405CD00C (PopUpdatePowerLimitTimeTracking.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405D17D4 (PopThermalUpdateTelemetryClientCount.c)
 *     PopTracePowerLimitHistogram @ 0x1405D3820 (PopTracePowerLimitHistogram.c)
 *     PopEvaluatePowerLimitChange @ 0x140749704 (PopEvaluatePowerLimitChange.c)
 *     PopDiagTracePowerLimitRequest @ 0x140755880 (PopDiagTracePowerLimitRequest.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  _QWORD *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerLimitExtensionLock);
  v2 = (unsigned __int64 *)P[8];
  if ( !v2 )
    goto LABEL_23;
  PopReleaseRwLock(&PopPowerLimitExtensionLock);
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
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerLimitExtensionLock);
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
  PopReleaseRwLock(&PopPowerLimitExtensionLock);
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
    PopCleanPowerLimitExtension(v2, v10);
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerLimitExtensionLock);
LABEL_23:
  v11 = (_QWORD *)P[3];
  if ( v11 )
  {
    PoDestroyReasonContext(v11);
    P[3] = 0LL;
  }
  v12 = (void *)P[7];
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0x6D6C5050u);
    P[7] = 0LL;
  }
  v13 = (void *)P[5];
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x6D6C5050u);
    P[5] = 0LL;
  }
  ExFreePoolWithTag(P, 0x6D6C5050u);
  return PopReleaseRwLock(&PopPowerLimitExtensionLock);
}
