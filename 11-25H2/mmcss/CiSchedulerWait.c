/*
 * XREFs of CiSchedulerWait @ 0x1C0002650
 * Callers:
 *     CiSchedulerThreadFunction @ 0x1C00018F0 (CiSchedulerThreadFunction.c)
 * Callees:
 *     CiSchedulerSleep @ 0x1C0001F80 (CiSchedulerSleep.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0002F70 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSystemDetectPotentiallyStarvedProcessors @ 0x1C0003040 (CiSystemDetectPotentiallyStarvedProcessors.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C0003950 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1C00039C0 (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogTurboEngaged @ 0x1C00041D0 (CiLogTurboEngaged.c)
 *     CiSchedulerRefreshTaskIndexQosProperties @ 0x1C000430C (CiSchedulerRefreshTaskIndexQosProperties.c)
 *     WPP_SF_ @ 0x1C0004620 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C0004960 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x1C0004EE0 (__security_check_cookie.c)
 */

char __fastcall CiSchedulerWait(__int64 a1, __int32 *a2)
{
  unsigned int DpcData_high; // edx
  int v4; // ecx
  unsigned int v5; // edi
  int v6; // esi
  struct _DEVICE_OBJECT **p_NextDevice; // r8
  struct _DEVICE_OBJECT *SystemArgument1; // rcx
  struct _DEVICE_OBJECT *NextDevice; // rdx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 DeviceObjectExtension; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rbx
  __int32 v16; // ebx
  int v17; // r14d
  int v18; // r12d
  __int64 v19; // rax
  unsigned __int64 v20; // r15
  __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  bool v23; // zf
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // eax
  __int32 v31; // [rsp+38h] [rbp-49h] BYREF
  int v32; // [rsp+40h] [rbp-41h] BYREF
  unsigned int v33; // [rsp+48h] [rbp-39h] BYREF
  __int32 v34; // [rsp+50h] [rbp-31h] BYREF
  __int64 v35; // [rsp+60h] [rbp-21h] BYREF
  __int64 v36; // [rsp+68h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+70h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+90h] [rbp+Fh] BYREF
  int *v40; // [rsp+A0h] [rbp+1Fh]
  __int64 v41; // [rsp+A8h] [rbp+27h]

  if ( !CiThreadsMovedUp )
  {
    CiSchedulerSleep(0, HIDWORD(WPP_MAIN_CB.SecurityDescriptor), a2);
    return 1;
  }
  if ( CiSchedulerInLazyMode )
  {
    DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
    v4 = 2;
  }
  else
  {
    DpcData_high = (unsigned int)WPP_MAIN_CB.SecurityDescriptor;
    v4 = 1;
  }
  CiSchedulerSleep(v4, DpcData_high, a2);
  while ( 1 )
  {
    if ( (*a2 & 0xC) != 0 )
      return 0;
    CiSystemDetectPotentiallyStarvedProcessors();
    if ( !CiProcessorIdleHistoryBits )
      break;
    if ( CiProcessorIdleHistoryBits == CiSchedulerIdleCycleBitMask )
    {
      if ( !CiSchedulerInLazyMode )
      {
        if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          WPP_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            13LL,
            &WPP_e00c2d44edf236fb41cafbc4576a8546_Traceguids,
            HIDWORD(WPP_MAIN_CB.Dpc.DpcData));
        CiSchedulerInLazyMode = 1;
      }
      v5 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      v6 = 4;
    }
    else
    {
      v5 = *(&WPP_MAIN_CB.ActiveThreadCount + 1);
      v6 = 3;
    }
    if ( byte_1C00090D0 )
    {
      v31 = *a2;
      *(_QWORD *)&v37.Size = 4LL;
      v37.Ptr = (ULONGLONG)&v31;
      EtwWrite(RegHandle, &CiSchedulerWakeupEvent, 0LL, 1u, &v37);
    }
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    if ( CiSchedulerInLazyMode )
    {
      SystemArgument1 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 == &WPP_MAIN_CB.Dpc.SystemArgument1 )
        goto LABEL_87;
      while ( 1 )
      {
        NextDevice = SystemArgument1->NextDevice;
        p_NextDevice = &SystemArgument1->NextDevice;
        while ( NextDevice != (struct _DEVICE_OBJECT *)p_NextDevice )
        {
          if ( (BYTE4(NextDevice->DeviceExtension) & 1) == 0 )
            goto LABEL_16;
          NextDevice = *(struct _DEVICE_OBJECT **)&NextDevice->Type;
        }
        SystemArgument1 = *(struct _DEVICE_OBJECT **)&SystemArgument1->Type;
        if ( SystemArgument1 == (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1 )
        {
LABEL_87:
          *a2 |= 0x80u;
          WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
          return 0;
        }
      }
    }
LABEL_16:
    if ( qword_1C0009278 )
      RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
    v35 = 0LL;
    if ( CiSchedulerWaitStatus == 257 )
      v10 = KeQueryInterruptTimePrecise(&v35);
    else
      v10 = MEMORY[0xFFFFF78000000008];
    byte_1C0009284 = 0;
    qword_1C0009278 = v10 + v5;
    if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) == 0 )
    {
      v11 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
      goto LABEL_22;
    }
    p_NextDevice = *(struct _DEVICE_OBJECT ***)&WPP_MAIN_CB.SectorSize;
    if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
    {
      v11 = *(_QWORD *)&WPP_MAIN_CB.SectorSize ^ (unsigned __int64)&WPP_MAIN_CB.SectorSize;
LABEL_22:
      LOBYTE(p_NextDevice) = 0;
      if ( !v11 )
        goto LABEL_26;
      while ( 1 )
      {
        if ( *(_QWORD *)(v11 + 24) <= v10 + v5 )
        {
          v12 = *(_QWORD *)(v11 + 8);
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( !v12 )
            {
LABEL_82:
              LOBYTE(p_NextDevice) = 1;
              goto LABEL_26;
            }
            v12 ^= v11;
          }
          if ( !v12 )
            goto LABEL_82;
        }
        else
        {
          v12 = *(_QWORD *)v11;
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( !v12 )
              goto LABEL_26;
            v12 ^= v11;
          }
          if ( !v12 )
            goto LABEL_26;
        }
        v11 = v12;
      }
    }
    v11 = 0LL;
    LOBYTE(p_NextDevice) = 0;
LABEL_26:
    RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v11, p_NextDevice, &WPP_MAIN_CB.Reserved);
    if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
    {
      if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
        goto LABEL_122;
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
        v14 = *(_QWORD *)(DeviceObjectExtension + 24);
        if ( v10 > v14 )
        {
          v15 = 0LL;
        }
        else
        {
          v15 = v10 - v14;
          if ( v15 < -2000 )
            v15 += 2000LL;
        }
        CiSchedulerTimerNode = DeviceObjectExtension;
        ExSetTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v15, 0LL, &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
      }
      goto LABEL_34;
    }
LABEL_122:
    if ( CiSchedulerTimerNode != 1 )
    {
      CiSchedulerTimerNode = 1LL;
      ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
    }
LABEL_34:
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
    if ( byte_1C00090D0 )
    {
      v39.Ptr = (ULONGLONG)&v32;
      v33 = v5;
      v40 = (int *)&v33;
      v32 = v6;
      *(_QWORD *)&v39.Size = 4LL;
      v41 = 4LL;
      EtwWrite(RegHandle, &CiSchedulerSleepEvent, 0LL, 2u, &v39);
    }
    v16 = _InterlockedExchange(&CiSchedulerWakeupReason, 0);
    if ( !v16 )
      goto LABEL_37;
    while ( 2 )
    {
      if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
        goto LABEL_66;
      v17 = 0;
      v18 = 0;
      v36 = 0LL;
      if ( CiSchedulerWaitStatus == 257 )
        v19 = KeQueryInterruptTimePrecise(&v36);
      else
        v19 = MEMORY[0xFFFFF78000000008];
      v20 = v19 + 2000;
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
      CiSchedulerTimerNode = 2LL;
      if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
      {
        if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
          goto LABEL_56;
        v22 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize + 1);
      }
      else
      {
        v22 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
      }
      if ( !v22 )
        goto LABEL_56;
      while ( *(_QWORD *)(v22 + 24) <= v20 )
      {
        RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, v22);
        v23 = *(_DWORD *)(v22 + 32) == 1;
        *(_QWORD *)(v22 + 24) = 0LL;
        if ( v23 )
        {
          v17 |= 0x20u;
          if ( *(_BYTE *)(v22 + 36) )
          {
            *(_DWORD *)(v22 + 88) |= 0x10u;
            v24 = v22 - 96;
          }
          else
          {
            *(_DWORD *)(v22 + 128) |= 0x10u;
            v24 = v22 - 56;
            v29 = *(_DWORD *)(v22 + 128) | 0x20;
            *(_DWORD *)(v22 - 56 + 184) = v29;
            if ( (v29 & 1) != 0 )
              v18 = 1;
            ++CiTotalTasksDeadlineExpired;
          }
          CiSchedulerUpdateTaskIndexPriorities(v24);
          CiSchedulerRefreshTaskIndexQosProperties(v24);
          if ( byte_1C00090D0 )
          {
            if ( *(_BYTE *)(v22 + 36) )
              CiLogTaskIndexPreDeadlineExpired(v24);
            else
              CiLogTaskIndexDeadlineExpired(v24);
          }
        }
        else
        {
          v17 |= 0x10u;
        }
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
            break;
          v22 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize + 1);
        }
        else
        {
          v22 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
        }
        if ( !v22 )
          break;
      }
      if ( (v17 & 0x20) != 0 )
      {
        if ( v18 )
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
          LOBYTE(v21) = CiTotalTasksBuffering != 0;
          PoNotifyMediaBuffering(v21);
        }
      }
      if ( (v17 & 0x10) == 0 )
      {
LABEL_56:
        v25 = v20 - 2000;
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( WPP_MAIN_CB.DeviceObjectExtension != (struct _DEVOBJ_EXTENSION *)1 )
          {
            v26 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize + 1);
            goto LABEL_58;
          }
        }
        else
        {
          v26 = (__int64)WPP_MAIN_CB.DeviceObjectExtension;
LABEL_58:
          if ( v26 )
          {
            if ( v26 != CiSchedulerTimerNode )
            {
              v27 = *(_QWORD *)(v26 + 24);
              if ( v25 > v27 )
              {
                v28 = 0LL;
              }
              else
              {
                v28 = v25 - v27;
                if ( v28 < -2000 )
                  v28 += 2000LL;
              }
              CiSchedulerTimerNode = v26;
              ExSetTimer(
                *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
                v28,
                0LL,
                &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
            }
            goto LABEL_64;
          }
        }
        if ( CiSchedulerTimerNode != 1 )
        {
          CiSchedulerTimerNode = 1LL;
          ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
        }
      }
LABEL_64:
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
      if ( v18 )
      {
        if ( byte_1C00090D0 )
          CiLogTurboEngaged();
        PoLatencySensitivityHint(4LL);
      }
      v16 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v17;
      if ( (v16 & 0xFFFFFFDF) == 0 )
      {
LABEL_66:
        if ( byte_1C00090D0 )
        {
          UserData.Ptr = (ULONGLONG)&v34;
          v34 = v16;
          *(_QWORD *)&UserData.Size = 4LL;
          EtwWrite(RegHandle, &CiSchedulerWakeupEvent, 0LL, 1u, &UserData);
        }
        v16 = 0;
LABEL_37:
        CiSchedulerWaitStatus = KeWaitForSingleObject(
                                  *(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
                                  Executive,
                                  0,
                                  1u,
                                  0LL);
        continue;
      }
      break;
    }
    *a2 = v16;
  }
  if ( CiSchedulerInLazyMode )
  {
    CiSchedulerInLazyMode = 0;
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 12LL, &WPP_e00c2d44edf236fb41cafbc4576a8546_Traceguids);
  }
  return 0;
}
