/*
 * XREFs of PopScanIdleList @ 0x14048872C
 * Callers:
 *     PopSystemIdleWorker @ 0x140A1E6C0 (PopSystemIdleWorker.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopRequestPowerIrp @ 0x140359B00 (PopRequestPowerIrp.c)
 *     PopDiagTraceEventNoPayload @ 0x140488BD4 (PopDiagTraceEventNoPayload.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x140488C34 (PopDiagTraceDeviceIdleCheck.c)
 *     PopDiagTraceDiskIdleCheck @ 0x1404B42C4 (PopDiagTraceDiskIdleCheck.c)
 *     Feature_LegacyDeviceIdleAcceleration__private_IsEnabledDeviceUsageNoInline @ 0x1404F210C (Feature_LegacyDeviceIdleAcceleration__private_IsEnabledDeviceUsageNoInline.c)
 *     PopCoalescingCheck @ 0x1405CE674 (PopCoalescingCheck.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x1405D0AB4 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409649CC (PopSetPowerSettingValueAcDc.c)
 *     PopSetPowerSettingValue @ 0x140964AB4 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x140964F00 (PopFindPowerSettingConfiguration.c)
 */

__int64 __fastcall PopScanIdleList(int a1, unsigned __int64 a2)
{
  char v2; // bl
  int v3; // edi
  unsigned __int64 v4; // rbp
  int v5; // r14d
  unsigned int v6; // r15d
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r12
  KIRQL v9; // al
  __int64 *v10; // r13
  int v11; // r8d
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 PowerSettingConfiguration; // rax
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 *v21; // rbx
  unsigned __int32 v22; // edi
  unsigned __int32 v23; // esi
  unsigned int v24; // r14d
  unsigned __int32 v25; // ebp
  signed __int32 v26; // eax
  unsigned int v27; // eax
  char v28; // al
  int v29; // ebp
  unsigned int v30; // edi
  unsigned int v31; // edi
  int v32; // eax
  char v33; // [rsp+40h] [rbp-78h]
  int v34; // [rsp+44h] [rbp-74h]
  int v35; // [rsp+48h] [rbp-70h]
  unsigned int v36; // [rsp+4Ch] [rbp-6Ch]
  unsigned int v37; // [rsp+50h] [rbp-68h]
  unsigned int v38; // [rsp+54h] [rbp-64h]
  unsigned __int32 v39; // [rsp+58h] [rbp-60h]
  unsigned __int64 v40; // [rsp+60h] [rbp-58h]
  KIRQL NewIrql; // [rsp+D0h] [rbp+18h]
  int v44; // [rsp+D8h] [rbp+20h] BYREF

  v44 = 0;
  v2 = 0;
  v3 = 0;
  v35 = dword_140F0B728;
  LODWORD(v4) = 0;
  v5 = a1;
  v33 = 0;
  v6 = 0;
  v7 = a2;
  v34 = 0;
  LODWORD(v8) = 0;
  v38 = dword_140F0B724;
  LODWORD(v40) = 0;
  v36 = *((_DWORD *)PopPolicy + 53);
  v37 = PopCurrentCoalescingSpindownTimeout;
  if ( (unsigned int)Feature_LegacyDeviceIdleAcceleration__private_IsEnabledDeviceUsageNoInline() )
  {
    v4 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
    v40 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
    v8 = (MEMORY[0xFFFFF78000000008] - PopIdleLastRunTime) / 0x989680uLL;
    PopIdleLastRunTime = MEMORY[0xFFFFF78000000008];
  }
  v9 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  NewIrql = v9;
  if ( byte_140E6717C )
  {
    KeReleaseSpinLock(&PopDopeGlobalLock, v9);
    return 0LL;
  }
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_START);
  v10 = (__int64 *)PopIdleDetectList;
  if ( (__int64 *)PopIdleDetectList == &PopIdleDetectList )
    goto LABEL_5;
  do
  {
    v21 = v10 - 4;
    v22 = _InterlockedExchange((volatile __int32 *)v10 - 7, 0);
    *((_DWORD *)v10 - 5) += v22;
    v39 = v22;
    if ( v22 || *((_DWORD *)v21 + 2) )
      *(_DWORD *)v21 = 0;
    if ( !(unsigned int)Feature_LegacyDeviceIdleAcceleration__private_IsEnabledDeviceUsageNoInline() )
    {
      v23 = _InterlockedExchangeAdd((volatile signed __int32 *)v21, PopIdleScanInterval);
      goto LABEL_39;
    }
    v26 = _InterlockedCompareExchange((volatile signed __int32 *)v21, v4, 0);
    v23 = v26;
    if ( v26 )
    {
      v23 = v4 - v26;
LABEL_39:
      if ( v23 )
        goto LABEL_40;
    }
    *((_DWORD *)v21 + 14) = 1;
LABEL_40:
    if ( v35 == 1 )
      v24 = *((_DWORD *)v21 + 4);
    else
      v24 = *((_DWORD *)v21 + 5);
    if ( *((_DWORD *)v21 + 12) == 1 )
    {
      if ( v24 == -1 )
        v24 = v36;
      v27 = PopCoalescingCheck(v37, v24, v23);
      v24 = v27;
      if ( v27 )
        ++v34;
      v6 = v38;
      v29 = *((_DWORD *)v21 + 24);
      v30 = *((_DWORD *)v21 + 25);
      if ( v38 > v27 )
        v6 = v27;
      if ( (unsigned int)Feature_LegacyDeviceIdleAcceleration__private_IsEnabledDeviceUsageNoInline() )
      {
        v25 = v8 + v29;
        if ( !v23 )
        {
          v31 = v8 + v30;
LABEL_73:
          if ( v31 > v6 )
          {
            v25 = v6;
            v31 = v6;
          }
          goto LABEL_81;
        }
        if ( v30 > (unsigned int)v8 )
        {
          v31 = v30 - v8;
          goto LABEL_81;
        }
      }
      else
      {
        v25 = PopIdleScanInterval + v29;
        if ( !v23 )
        {
          v31 = PopIdleScanInterval + v30;
          goto LABEL_73;
        }
        if ( v30 > PopIdleScanInterval )
        {
          v31 = v30 - PopIdleScanInterval;
LABEL_81:
          *((_DWORD *)v21 + 25) = v31;
          v22 = v39;
          *((_DWORD *)v21 + 24) = v25;
          goto LABEL_44;
        }
      }
      v31 = 0;
      goto LABEL_81;
    }
    v25 = v23;
LABEL_44:
    if ( v24 && v25 >= v24 && *((_DWORD *)v21 + 14) == 1 && (v23 || (PopSimulate & 0x2000000) != 0) )
    {
      if ( *((_DWORD *)v21 + 12) == 1 )
        PopDiagTraceIoCoalescingDiskIdle(v21[3], 1LL);
      if ( (int)PopRequestPowerIrp(v21[3], 2, *((_DWORD *)v21 + 13), (int)PopDeviceIdleCompletion, 0LL, 0, 0LL) >= 0 )
      {
        *((_DWORD *)v21 + 3) = 0;
        v32 = *((_DWORD *)v21 + 13);
        ++dword_140E67178;
        *((_DWORD *)v21 + 14) = v32;
      }
    }
    else if ( *((_DWORD *)v21 + 12) == 1 )
    {
      v28 = v33;
      if ( !v23 )
        v28 = 1;
      v33 = v28;
    }
    PopDiagTraceDeviceIdleCheck(v10 - 4, v23, v22);
    if ( *((_DWORD *)v21 + 12) == 1 )
      PopDiagTraceDiskIdleCheck(v10 - 4, v24, v6);
    v10 = (__int64 *)*v10;
    LODWORD(v4) = v40;
  }
  while ( v10 != &PopIdleDetectList );
  v2 = v33;
  v3 = v34;
  v7 = a2;
  v5 = a1;
LABEL_5:
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_END);
  KeReleaseSpinLock(&PopDopeGlobalLock, NewIrql);
  v11 = PopIdleBackgroundIgnoreCount;
  if ( PopIdleBackgroundIgnoreCount )
    v11 = --PopIdleBackgroundIgnoreCount;
  if ( PopBackgroundTaskIgnoreCount )
    --PopBackgroundTaskIgnoreCount;
  if ( !v5 || (v12 = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval, v7 == v12) )
  {
    PopBackgroundTaskAllowed = 1;
  }
  else if ( v7 < v12 )
  {
    PopBackgroundTaskAllowed = 0;
  }
  if ( !v3 || v2 )
  {
    if ( !v11 && !dword_140F0B70C )
    {
      ExAcquireFastMutex(&PopSettingLock);
      v13 = dword_140F0B70C;
      PowerSettingConfiguration = PopFindPowerSettingConfiguration(&GUID_IDLE_BACKGROUND_TASK, 0xFFFFFFFFLL);
      if ( PowerSettingConfiguration )
      {
        v15 = *(_QWORD *)(PowerSettingConfiguration + 8 * v13 + 64);
        if ( v15 )
        {
          v16 = *(_DWORD *)(v15 + 4);
          if ( v16 <= 4 )
            memmove(&v44, (const void *)(v15 + 12), v16);
        }
      }
      KeReleaseGuardedMutex(&PopSettingLock);
      ++v44;
      PopSetPowerSettingValueAcDc(&GUID_IDLE_BACKGROUND_TASK, 4LL, &v44);
      PopIdleBackgroundIgnoreCount = (PopIdleScanInterval + 59) / (unsigned int)PopIdleScanInterval;
    }
    if ( !PopBackgroundTaskIgnoreCount && PopBackgroundTaskAllowed && PopSIdle >= 50 && !dword_140F0B70C )
    {
      ExAcquireFastMutex(&PopSettingLock);
      v18 = PopFindPowerSettingConfiguration(&GUID_BACKGROUND_TASK_NOTIFICATION, 0xFFFFFFFFLL);
      if ( v18 )
      {
        v19 = *(_QWORD *)(v18 + 64);
        if ( v19 )
        {
          v20 = *(_DWORD *)(v19 + 4);
          if ( v20 <= 4 )
            memmove(&v44, (const void *)(v19 + 12), v20);
        }
      }
      KeReleaseGuardedMutex(&PopSettingLock);
      ++v44;
      PopSetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, 0xFFFFFFFFLL, 0LL, 4LL, &v44);
      PopBackgroundTaskAllowed = 0;
      PopBackgroundTaskIgnoreCount = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval;
    }
  }
  return 0LL;
}
