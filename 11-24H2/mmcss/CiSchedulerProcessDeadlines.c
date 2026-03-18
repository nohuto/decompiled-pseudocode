/*
 * XREFs of CiSchedulerProcessDeadlines @ 0x140001BB0
 * Callers:
 *     CiSchedulerDeepSleep @ 0x140001540 (CiSchedulerDeepSleep.c)
 * Callees:
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x140002F70 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x140003950 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1400039C0 (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogTurboEngaged @ 0x1400041D0 (CiLogTurboEngaged.c)
 *     CiSchedulerRefreshTaskIndexQosProperties @ 0x14000430C (CiSchedulerRefreshTaskIndexQosProperties.c)
 */

char __fastcall CiSchedulerProcessDeadlines(_DWORD *a1)
{
  char result; // al
  int v3; // ebp
  int v4; // r13d
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 DeviceObjectExtension; // rbx
  bool v8; // zf
  char v9; // cl
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // r15
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF
  _BYTE *v17; // [rsp+78h] [rbp+20h]

  result = WPP_MAIN_CB.SectorSize;
  if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
    return result;
  v3 = 0;
  v4 = 0;
  v16 = 0LL;
  if ( CiSchedulerWaitStatus == 257 )
    v5 = KeQueryInterruptTimePrecise(&v16);
  else
    v5 = MEMORY[0xFFFFF78000000008];
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  CiSchedulerTimerNode = 2LL;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
      goto LABEL_21;
    DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                 + 1);
  }
  else
  {
    DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
  }
  if ( DeviceObjectExtension )
  {
    while ( *(_QWORD *)(DeviceObjectExtension + 24) <= v5 + 2000 )
    {
      RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, DeviceObjectExtension);
      v8 = *(_DWORD *)(DeviceObjectExtension + 32) == 1;
      *(_QWORD *)(DeviceObjectExtension + 24) = 0LL;
      if ( v8 )
      {
        v9 = *(_BYTE *)(DeviceObjectExtension + 36);
        v17 = (_BYTE *)(DeviceObjectExtension + 36);
        v3 |= 0x20u;
        v10 = 96LL;
        if ( !v9 )
          v10 = 56LL;
        v11 = DeviceObjectExtension - v10;
        if ( v9 )
        {
          *(_DWORD *)(v11 + 184) |= 0x10u;
        }
        else
        {
          v15 = *(_DWORD *)(v11 + 184) | 0x30;
          *(_DWORD *)(v11 + 184) = v15;
          if ( (v15 & 1) != 0 )
            v4 = 1;
          ++CiTotalTasksDeadlineExpired;
        }
        CiSchedulerUpdateTaskIndexPriorities(v11);
        CiSchedulerRefreshTaskIndexQosProperties(v11);
        if ( byte_14000A0D0 )
        {
          if ( *v17 )
            CiLogTaskIndexPreDeadlineExpired(v11);
          else
            CiLogTaskIndexDeadlineExpired(v11);
        }
      }
      else
      {
        v3 |= 0x10u;
      }
      if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
      {
        if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
          break;
        DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                     + 1);
      }
      else
      {
        DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
      }
      if ( !DeviceObjectExtension )
        break;
    }
    if ( (v3 & 0x20) != 0 )
    {
      if ( v4 )
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
        LOBYTE(v6) = CiTotalTasksBuffering != 0;
        PoNotifyMediaBuffering(v6);
      }
    }
    if ( (v3 & 0x10) != 0 )
      goto LABEL_29;
  }
LABEL_21:
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
    {
LABEL_54:
      if ( CiSchedulerTimerNode != 1 )
      {
        CiSchedulerTimerNode = 1LL;
        ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
      }
      goto LABEL_29;
    }
    v12 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize + 1);
  }
  else
  {
    v12 = (__int64)WPP_MAIN_CB.DeviceObjectExtension;
  }
  if ( !v12 )
    goto LABEL_54;
  if ( v12 != CiSchedulerTimerNode )
  {
    v13 = *(_QWORD *)(v12 + 24);
    if ( v5 > v13 )
    {
      v14 = 0LL;
    }
    else
    {
      v14 = v5 - v13;
      if ( v14 < -2000 )
        v14 += 2000LL;
    }
    CiSchedulerTimerNode = v12;
    ExSetTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v14, 0LL, &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
  }
LABEL_29:
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  if ( v4 )
  {
    if ( byte_14000A0D0 )
      CiLogTurboEngaged();
    PoLatencySensitivityHint(4LL);
  }
  *a1 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v3;
  return (*a1 & 0xFFFFFFDF) != 0;
}
