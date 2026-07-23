/*
 * XREFs of PopScanIdleList @ 0x1404E1E10
 * Callers:
 *     PopSystemIdleWorker @ 0x140A1C0E0 (PopSystemIdleWorker.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PopRequestPowerIrp @ 0x1403A7FD0 (PopRequestPowerIrp.c)
 *     PopDiagTraceEventNoPayload @ 0x1404874D4 (PopDiagTraceEventNoPayload.c)
 *     PopGetPowerSettingValue @ 0x14048C3EC (PopGetPowerSettingValue.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x14049C678 (PopDiagTraceDeviceIdleCheck.c)
 *     PopCoalescingCheck @ 0x1405D0674 (PopCoalescingCheck.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x1405D2A28 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409A2DCC (PopSetPowerSettingValueAcDc.c)
 *     PopSetPowerSettingValue @ 0x1409A2EB4 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopScanIdleList(int a1, unsigned __int64 a2)
{
  int v2; // r15d
  unsigned __int64 v3; // rsi
  int v4; // ebx
  char v5; // r12
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r13
  KIRQL v8; // al
  __int64 *v9; // r14
  __int64 *v10; // rbx
  int v11; // r15d
  signed __int32 v12; // eax
  unsigned int v13; // esi
  unsigned int v14; // edi
  unsigned int v15; // r8d
  unsigned int v16; // eax
  unsigned int v17; // r9d
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v22; // eax
  __int64 v23; // rdx
  int v24; // r8d
  unsigned __int64 v25; // rcx
  int v27; // [rsp+48h] [rbp-79h] BYREF
  KIRQL NewIrql; // [rsp+4Ch] [rbp-75h]
  int v29; // [rsp+50h] [rbp-71h]
  unsigned int v30; // [rsp+54h] [rbp-6Dh]
  unsigned int v31; // [rsp+58h] [rbp-69h] BYREF
  int v32; // [rsp+5Ch] [rbp-65h]
  unsigned int v33; // [rsp+60h] [rbp-61h]
  unsigned int v34; // [rsp+64h] [rbp-5Dh]
  unsigned int v35; // [rsp+68h] [rbp-59h]
  unsigned int v36; // [rsp+70h] [rbp-51h] BYREF
  unsigned int v37; // [rsp+78h] [rbp-49h] BYREF
  int v38; // [rsp+80h] [rbp-41h]
  unsigned __int64 v39; // [rsp+88h] [rbp-39h]
  unsigned __int64 v40; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-29h] BYREF
  unsigned int *v42; // [rsp+A8h] [rbp-19h]
  int v43; // [rsp+B0h] [rbp-11h]
  int v44; // [rsp+B4h] [rbp-Dh]
  unsigned int *v45; // [rsp+B8h] [rbp-9h]
  int v46; // [rsp+C0h] [rbp-1h]
  int v47; // [rsp+C4h] [rbp+3h]
  __int64 *v48; // [rsp+C8h] [rbp+7h]
  int v49; // [rsp+D0h] [rbp+Fh]
  int v50; // [rsp+D4h] [rbp+13h]
  char *v51; // [rsp+D8h] [rbp+17h]
  int v52; // [rsp+E0h] [rbp+1Fh]
  int v53; // [rsp+E4h] [rbp+23h]

  v2 = a1;
  v32 = dword_140F0B3A8;
  v38 = a1;
  v3 = a2;
  v35 = dword_140F0B3A4;
  v4 = 0;
  v40 = a2;
  v5 = 0;
  v27 = 0;
  v33 = *((_DWORD *)PopPolicy + 53);
  v34 = PopCurrentCoalescingSpindownTimeout;
  v31 = 0;
  v29 = 0;
  v6 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  v30 = 0;
  v7 = (MEMORY[0xFFFFF78000000008] - PopIdleLastRunTime) / 0x989680uLL;
  v39 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  PopIdleLastRunTime = MEMORY[0xFFFFF78000000008];
  v8 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  NewIrql = v8;
  if ( byte_140E6759C )
  {
    KeReleaseSpinLock(&PopDopeGlobalLock, v8);
  }
  else
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_START);
    v9 = (__int64 *)PopIdleDetectList;
    if ( (__int64 *)PopIdleDetectList != &PopIdleDetectList )
    {
      do
      {
        v10 = v9 - 4;
        v11 = _InterlockedExchange((volatile __int32 *)v9 - 7, 0);
        *((_DWORD *)v9 - 5) += v11;
        if ( v11 || *((_DWORD *)v10 + 2) )
          *(_DWORD *)v10 = 0;
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)v10, v6, 0);
        v13 = v12;
        if ( !v12 || (v13 = v6 - v12, (_DWORD)v6 == v12) )
          *((_DWORD *)v10 + 14) = 1;
        if ( v32 == 1 )
          v14 = *((_DWORD *)v10 + 4);
        else
          v14 = *((_DWORD *)v10 + 5);
        v15 = v13;
        if ( *((_DWORD *)v10 + 12) == 1 )
        {
          if ( v14 == -1 )
            v14 = v33;
          v16 = PopCoalescingCheck(v34, v14, v13);
          v14 = v16;
          if ( v16 )
            ++v29;
          v17 = v35;
          v18 = *((_DWORD *)v10 + 25);
          if ( v35 > v16 )
            v17 = v16;
          v15 = v7 + *((_DWORD *)v10 + 24);
          v30 = v17;
          if ( v13 )
          {
            if ( v18 <= (unsigned int)v7 )
              v21 = 0;
            else
              v21 = v18 - v7;
          }
          else
          {
            v19 = v18 + v7;
            v20 = v17;
            v21 = v17;
            if ( v19 <= v17 )
            {
              v20 = v15;
              v21 = v19;
            }
            v15 = v20;
          }
          *((_DWORD *)v10 + 25) = v21;
          *((_DWORD *)v10 + 24) = v15;
        }
        if ( v14 && v15 >= v14 && *((_DWORD *)v10 + 14) == 1 && (v13 || (PopSimulate & 0x2000000) != 0) )
        {
          if ( *((_DWORD *)v10 + 12) == 1 )
            PopDiagTraceIoCoalescingDiskIdle(v10[3], 1LL);
          if ( (int)PopRequestPowerIrp(v10[3], 2, *((_DWORD *)v10 + 13), (int)PopDeviceIdleCompletion, 0LL, 0, 0LL) >= 0 )
          {
            *((_DWORD *)v10 + 3) = 0;
            v22 = *((_DWORD *)v10 + 13);
            ++dword_140E67598;
            *((_DWORD *)v10 + 14) = v22;
          }
        }
        else if ( *((_DWORD *)v10 + 12) == 1 && !v13 )
        {
          v5 = 1;
        }
        PopDiagTraceDeviceIdleCheck((__int64)(v9 - 4), v13, v11);
        if ( *((_DWORD *)v10 + 12) == 1 )
        {
          v37 = v30;
          v36 = v14;
          if ( PopDiagHandleRegistered )
          {
            if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DISK_IDLE_CHECK) )
            {
              UserData.Reserved = 0;
              v44 = 0;
              v47 = 0;
              v50 = 0;
              v53 = 0;
              UserData.Ptr = (ULONGLONG)(v10 + 3);
              v42 = &v36;
              v45 = &v37;
              v48 = v10 + 12;
              v51 = (char *)v10 + 100;
              v43 = 4;
              v46 = 4;
              v49 = 4;
              v52 = 4;
              UserData.Size = 8;
              EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DISK_IDLE_CHECK, 0LL, 0, 0LL, 0LL, 5u, &UserData);
            }
          }
        }
        v9 = (__int64 *)*v9;
        LODWORD(v6) = v39;
      }
      while ( v9 != &PopIdleDetectList );
      v4 = v29;
      v3 = v40;
      v2 = v38;
    }
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_END);
    KeReleaseSpinLock(&PopDopeGlobalLock, NewIrql);
    v24 = PopIdleBackgroundIgnoreCount;
    if ( PopIdleBackgroundIgnoreCount )
      v24 = --PopIdleBackgroundIgnoreCount;
    if ( PopBackgroundTaskIgnoreCount )
      --PopBackgroundTaskIgnoreCount;
    if ( !v2
      || (v23 = (PopIdleScanInterval + 179) % (unsigned int)PopIdleScanInterval,
          v25 = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval,
          v3 == v25) )
    {
      PopBackgroundTaskAllowed = 1;
    }
    else if ( v3 < v25 )
    {
      PopBackgroundTaskAllowed = 0;
    }
    if ( !v4 || v5 )
    {
      if ( !v24 && !dword_140F0B38C )
      {
        PopGetPowerSettingValue((__int64)&GUID_IDLE_BACKGROUND_TASK, v23, 3, &v27, 4u, &v31);
        ++v27;
        PopSetPowerSettingValueAcDc(&GUID_IDLE_BACKGROUND_TASK, 4LL, &v27);
        v23 = (PopIdleScanInterval + 59) % (unsigned int)PopIdleScanInterval;
        PopIdleBackgroundIgnoreCount = (PopIdleScanInterval + 59) / (unsigned int)PopIdleScanInterval;
      }
      if ( !PopBackgroundTaskIgnoreCount && !dword_140F0B38C && PopSIdle >= 50 && PopBackgroundTaskAllowed )
      {
        PopGetPowerSettingValue((__int64)&GUID_BACKGROUND_TASK_NOTIFICATION, v23, 0, &v27, 4u, &v31);
        ++v27;
        PopSetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, 0xFFFFFFFFLL, 0LL, 4LL, &v27);
        PopBackgroundTaskAllowed = 0;
        PopBackgroundTaskIgnoreCount = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval;
      }
    }
  }
  return 0LL;
}
