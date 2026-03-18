/*
 * XREFs of PopFreePowerLimitRequest @ 0x14073F574
 * Callers:
 *     PoCreatePowerLimitRequest @ 0x14073EA40 (PoCreatePowerLimitRequest.c)
 *     PoDeletePowerLimitRequest @ 0x14073EB20 (PoDeletePowerLimitRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopGetDope @ 0x1404C0F1C (PopGetDope.c)
 *     PoDestroyReasonContext @ 0x1404E90C0 (PoDestroyReasonContext.c)
 *     PopCleanPowerLimitExtension @ 0x1405CB0A4 (PopCleanPowerLimitExtension.c)
 *     PopUpdatePowerLimitTimeTracking @ 0x1405CB23C (PopUpdatePowerLimitTimeTracking.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1405CF604 (PopThermalUpdateTelemetryClientCount.c)
 *     PopTracePowerLimitHistogram @ 0x1405D18AC (PopTracePowerLimitHistogram.c)
 *     PopEvaluatePowerLimitChange @ 0x14073F304 (PopEvaluatePowerLimitChange.c)
 *     PopDiagTracePowerLimitRequest @ 0x14074B34C (PopDiagTracePowerLimitRequest.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFreePowerLimitRequest(_QWORD *P)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 *v5; // rdi
  unsigned int i; // ebp
  char v7; // bp
  _QWORD *v8; // rcx
  PVOID *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 **v12; // rax
  _QWORD *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerLimitExtensionLock);
  v5 = (unsigned __int64 *)P[8];
  if ( !v5 )
    goto LABEL_23;
  PopReleaseRwLock(&PopPowerLimitExtensionLock);
  PopAcquireRwLockExclusive(v5 + 4);
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
    PopEvaluatePowerLimitChange((__int64)v5);
  }
  PopReleaseRwLock((signed __int64 *)v5 + 4);
  v7 = 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerLimitExtensionLock);
  PopAcquireRwLockExclusive(v5 + 4);
  if ( P[8] )
  {
    v8 = (_QWORD *)*P;
    if ( *(_QWORD **)(*P + 8LL) != P )
      goto LABEL_30;
    v9 = (PVOID *)P[1];
    if ( *v9 != P )
      goto LABEL_30;
    *v9 = v8;
    v8[1] = v9;
    P[8] = 0LL;
    if ( (unsigned __int64 *)v5[2] == v5 + 2 )
    {
      v10 = v5[7];
      if ( !v10 )
      {
LABEL_16:
        v7 = 1;
        goto LABEL_17;
      }
      *(_QWORD *)(PopGetDope(v10) + 72) = 0LL;
      v11 = *v5;
      if ( *(unsigned __int64 **)(*v5 + 8) == v5 )
      {
        v12 = (unsigned __int64 **)v5[1];
        if ( *v12 == v5 )
        {
          *v12 = (unsigned __int64 *)v11;
          *(_QWORD *)(v11 + 8) = v12;
          *v5 = 0LL;
          goto LABEL_16;
        }
      }
LABEL_30:
      __fastfail(3u);
    }
  }
LABEL_17:
  PopReleaseRwLock((signed __int64 *)v5 + 4);
  PopReleaseRwLock(&PopPowerLimitExtensionLock);
  if ( v7 )
  {
    PopAcquireRwLockExclusive(v5 + 4);
    if ( *((_DWORD *)v5 + 44) || *((_DWORD *)v5 + 45) )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v5[23] = (unsigned __int64)&Event;
      PopReleaseRwLock((signed __int64 *)v5 + 4);
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      PopAcquireRwLockExclusive(v5 + 4);
      v5[23] = 0LL;
    }
    PopReleaseRwLock((signed __int64 *)v5 + 4);
    PopCleanPowerLimitExtension(v5);
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerLimitExtensionLock);
LABEL_23:
  v13 = (_QWORD *)P[3];
  if ( v13 )
  {
    PoDestroyReasonContext(v13, v2, v3, v4);
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
  return PopReleaseRwLock(&PopPowerLimitExtensionLock);
}
