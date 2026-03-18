/*
 * XREFs of CiSchedulerSleep @ 0x1C0001F80
 * Callers:
 *     CiSchedulerWait @ 0x1C0002650 (CiSchedulerWait.c)
 * Callees:
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0002F70 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C0003950 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1C00039C0 (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogTurboEngaged @ 0x1C00041D0 (CiLogTurboEngaged.c)
 *     CiSchedulerRefreshTaskIndexQosProperties @ 0x1C000430C (CiSchedulerRefreshTaskIndexQosProperties.c)
 *     __security_check_cookie @ 0x1C0004EE0 (__security_check_cookie.c)
 */

__int64 __fastcall CiSchedulerSleep(int a1, unsigned int a2, __int32 *a3)
{
  __int64 v4; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int8 v8; // al
  unsigned __int64 v9; // rax
  __int64 DeviceObjectExtension; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rbx
  __int32 v13; // ebx
  int v14; // esi
  int v15; // r15d
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  bool v20; // zf
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 result; // rax
  int v27; // eax
  int v28; // [rsp+30h] [rbp-98h] BYREF
  int v29; // [rsp+38h] [rbp-90h] BYREF
  __int32 v30; // [rsp+40h] [rbp-88h] BYREF
  __int64 v31; // [rsp+50h] [rbp-78h] BYREF
  __int64 v32; // [rsp+58h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+70h] [rbp-58h] BYREF
  int *v35; // [rsp+80h] [rbp-48h]
  __int64 v36; // [rsp+88h] [rbp-40h]

  v4 = a2;
  if ( qword_1C0009278 )
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
  v31 = 0LL;
  if ( CiSchedulerWaitStatus == 257 )
    v6 = KeQueryInterruptTimePrecise(&v31);
  else
    v6 = MEMORY[0xFFFFF78000000008];
  v7 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  qword_1C0009278 = v6 + v4;
  byte_1C0009284 = 0;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) == 0 )
  {
LABEL_6:
    v8 = 0;
    if ( !v7 )
      goto LABEL_11;
    while ( 1 )
    {
      if ( *(_QWORD *)(v7 + 24) <= v6 + v4 )
      {
        v9 = *(_QWORD *)(v7 + 8);
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v9 )
          {
LABEL_64:
            v8 = 1;
            goto LABEL_11;
          }
          v9 ^= v7;
        }
        if ( !v9 )
          goto LABEL_64;
      }
      else
      {
        v9 = *(_QWORD *)v7;
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v9 )
            goto LABEL_10;
          v9 ^= v7;
        }
        if ( !v9 )
          goto LABEL_10;
      }
      v7 = v9;
    }
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
  {
    v7 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
    goto LABEL_6;
  }
  v7 = 0LL;
LABEL_10:
  v8 = 0;
LABEL_11:
  RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v7, v8, &WPP_MAIN_CB.Reserved);
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
      goto LABEL_93;
    DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                 + 1);
  }
  else
  {
    DeviceObjectExtension = (__int64)WPP_MAIN_CB.DeviceObjectExtension;
  }
  if ( DeviceObjectExtension )
  {
    if ( DeviceObjectExtension != CiSchedulerTimerNode )
    {
      v11 = *(_QWORD *)(DeviceObjectExtension + 24);
      if ( v6 > v11 )
      {
        v12 = 0LL;
      }
      else
      {
        v12 = v6 - v11;
        if ( v12 < -2000 )
          v12 += 2000LL;
      }
      CiSchedulerTimerNode = DeviceObjectExtension;
      ExSetTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v12, 0LL, &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    }
    goto LABEL_19;
  }
LABEL_93:
  if ( CiSchedulerTimerNode != 1 )
  {
    CiSchedulerTimerNode = 1LL;
    ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
  }
LABEL_19:
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  if ( byte_1C00090D0 )
  {
    v34.Ptr = (ULONGLONG)&v28;
    v29 = v4;
    v35 = &v29;
    v28 = a1;
    *(_QWORD *)&v34.Size = 4LL;
    v36 = 4LL;
    EtwWrite(RegHandle, &CiSchedulerSleepEvent, 0LL, 2u, &v34);
  }
  v13 = _InterlockedExchange(&CiSchedulerWakeupReason, 0);
  if ( v13 )
    goto LABEL_23;
  while ( 1 )
  {
    CiSchedulerWaitStatus = KeWaitForSingleObject(
                              *(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
                              Executive,
                              0,
                              1u,
                              0LL);
LABEL_23:
    if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
      break;
LABEL_51:
    if ( byte_1C00090D0 )
    {
      UserData.Ptr = (ULONGLONG)&v30;
      v30 = v13;
      *(_QWORD *)&UserData.Size = 4LL;
      EtwWrite(RegHandle, &CiSchedulerWakeupEvent, 0LL, 1u, &UserData);
    }
    v13 = 0;
  }
  v14 = 0;
  v15 = 0;
  v32 = 0LL;
  if ( CiSchedulerWaitStatus == 257 )
    v16 = KeQueryInterruptTimePrecise(&v32);
  else
    v16 = MEMORY[0xFFFFF78000000008];
  v17 = v16 + 2000;
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  CiSchedulerTimerNode = 2LL;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
      goto LABEL_41;
    v19 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize + 1);
  }
  else
  {
    v19 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
  }
  if ( !v19 )
    goto LABEL_41;
  while ( *(_QWORD *)(v19 + 24) <= v17 )
  {
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, v19);
    v20 = *(_DWORD *)(v19 + 32) == 1;
    *(_QWORD *)(v19 + 24) = 0LL;
    if ( v20 )
    {
      v14 |= 0x20u;
      if ( *(_BYTE *)(v19 + 36) )
      {
        *(_DWORD *)(v19 + 88) |= 0x10u;
        v21 = v19 - 96;
      }
      else
      {
        *(_DWORD *)(v19 + 128) |= 0x10u;
        v21 = v19 - 56;
        v27 = *(_DWORD *)(v19 + 128) | 0x20;
        *(_DWORD *)(v19 - 56 + 184) = v27;
        if ( (v27 & 1) != 0 )
          v15 = 1;
        ++CiTotalTasksDeadlineExpired;
      }
      CiSchedulerUpdateTaskIndexPriorities(v21);
      CiSchedulerRefreshTaskIndexQosProperties(v21);
      if ( byte_1C00090D0 )
      {
        if ( *(_BYTE *)(v19 + 36) )
          CiLogTaskIndexPreDeadlineExpired(v21);
        else
          CiLogTaskIndexDeadlineExpired(v21);
      }
    }
    else
    {
      v14 |= 0x10u;
    }
    if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
    {
      if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
        break;
      v19 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize + 1);
    }
    else
    {
      v19 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
    }
    if ( !v19 )
      break;
  }
  if ( (v14 & 0x20) != 0 )
  {
    if ( v15 )
    {
      if ( CiCurrentMediaBufferingState )
      {
        CiCurrentMediaBufferingState = 0;
        PoNotifyMediaBuffering(0LL);
      }
    }
    else if ( (CiTotalTasksBuffering != 0) != CiCurrentMediaBufferingState
           && (!CiTotalTasksBuffering || !CiTotalTasksDeadlineExpired) )
    {
      CiCurrentMediaBufferingState = CiTotalTasksBuffering != 0;
      LOBYTE(v18) = CiTotalTasksBuffering != 0;
      PoNotifyMediaBuffering(v18);
    }
  }
  if ( (v14 & 0x10) == 0 )
  {
LABEL_41:
    v22 = v17 - 2000;
    if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
    {
      if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
      {
LABEL_91:
        if ( CiSchedulerTimerNode != 1 )
        {
          CiSchedulerTimerNode = 1LL;
          ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
        }
        goto LABEL_49;
      }
      v23 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize + 1);
    }
    else
    {
      v23 = (__int64)WPP_MAIN_CB.DeviceObjectExtension;
    }
    if ( v23 )
    {
      if ( v23 != CiSchedulerTimerNode )
      {
        v24 = *(_QWORD *)(v23 + 24);
        if ( v22 > v24 )
        {
          v25 = 0LL;
        }
        else
        {
          v25 = v22 - v24;
          if ( v25 < -2000 )
            v25 += 2000LL;
        }
        CiSchedulerTimerNode = v23;
        ExSetTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v25, 0LL, &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
      }
      goto LABEL_49;
    }
    goto LABEL_91;
  }
LABEL_49:
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  if ( v15 )
  {
    if ( byte_1C00090D0 )
      CiLogTurboEngaged();
    PoLatencySensitivityHint(4LL);
  }
  result = (unsigned int)_InterlockedExchange(&CiSchedulerWakeupReason, 0);
  v13 |= result | v14;
  if ( (v13 & 0xFFFFFFDF) == 0 )
    goto LABEL_51;
  *a3 = v13;
  return result;
}
