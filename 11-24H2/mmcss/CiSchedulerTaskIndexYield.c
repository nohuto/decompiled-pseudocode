/*
 * XREFs of CiSchedulerTaskIndexYield @ 0x140003320
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x14000DEF0 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiLogSchedulerEvent @ 0x140003860 (CiLogSchedulerEvent.c)
 *     CiSchedulerRefreshTaskIndexQosProperties @ 0x14000430C (CiSchedulerRefreshTaskIndexQosProperties.c)
 *     __security_check_cookie @ 0x1400059D0 (__security_check_cookie.c)
 */

void __fastcall CiSchedulerTaskIndexYield(__int64 a1, ULONG a2, ULONG a3)
{
  ULONG ActiveThreadCount; // esi
  ULONG v4; // ebx
  unsigned __int64 v6; // rbp
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 *i; // rbx
  __int64 v16; // rax
  unsigned __int8 v17; // dl
  unsigned int v18; // r12d
  __int64 DeviceObjectExtension; // r14
  unsigned __int64 v20; // rax
  __int64 v21; // rbp
  int v22; // eax
  ULONG v23; // [rsp+30h] [rbp-78h] BYREF
  ULONG v24; // [rsp+38h] [rbp-70h] BYREF
  __int64 v25; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-60h] BYREF
  ULONG *v27; // [rsp+58h] [rbp-50h]
  __int64 v28; // [rsp+60h] [rbp-48h]
  ULONG *v29; // [rsp+68h] [rbp-40h]
  __int64 v30; // [rsp+70h] [rbp-38h]

  v25 = 0LL;
  ActiveThreadCount = a2;
  if ( a2 < WPP_MAIN_CB.ActiveThreadCount )
    ActiveThreadCount = WPP_MAIN_CB.ActiveThreadCount;
  v4 = a3;
  if ( a3 != -1 )
  {
    if ( a3 < WPP_MAIN_CB.ActiveThreadCount )
      v4 = WPP_MAIN_CB.ActiveThreadCount;
    if ( v4 >= ActiveThreadCount )
      v4 = -1;
  }
  if ( byte_14000A0D0 )
  {
    v24 = v4;
    UserData.Ptr = a1 + 144;
    v23 = ActiveThreadCount;
    v27 = &v23;
    *(_QWORD *)&UserData.Size = 4LL;
    v29 = &v24;
    v28 = 4LL;
    v30 = 4LL;
    EtwWrite(RegHandle, &CiTaskIndexYieldEvent, 0LL, 3u, &UserData);
  }
  v6 = KeQueryInterruptTimePrecise(&v25);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  *(_DWORD *)(a1 + 184) |= 8u;
  if ( *(_QWORD *)(a1 + 80) )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    if ( *(_BYTE *)(a1 + 92) )
      *(_BYTE *)(a1 + 92) = 0;
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, a1 + 56);
    if ( CiSchedulerTimerNode == a1 + 56 )
      CiSchedulerTimerNode = 2LL;
  }
  *(_BYTE *)(a1 + 92) = 0;
  v8 = v6 + ActiveThreadCount;
  *(_QWORD *)(a1 + 80) = v8;
  v9 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
    {
      v9 = 0LL;
      LOBYTE(v7) = 0;
      goto LABEL_20;
    }
    v9 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  }
  LOBYTE(v7) = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v9 + 24) <= v8 )
      {
        v10 = *(_QWORD *)(v9 + 8);
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v10 )
          {
LABEL_66:
            LOBYTE(v7) = 1;
            break;
          }
          v10 ^= v9;
        }
        if ( !v10 )
          goto LABEL_66;
      }
      else
      {
        v10 = *(_QWORD *)v9;
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v10 )
            break;
          v10 ^= v9;
        }
        if ( !v10 )
          break;
      }
      v9 = v10;
    }
  }
LABEL_20:
  RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v9, v7, a1 + 56);
  if ( *(_BYTE *)(a1 + 132) && *(_QWORD *)(a1 + 120) )
  {
    *(_QWORD *)(a1 + 120) = 0LL;
    if ( *(_BYTE *)(a1 + 132) )
      *(_BYTE *)(a1 + 132) = 0;
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, a1 + 96);
    if ( CiSchedulerTimerNode == a1 + 96 )
      CiSchedulerTimerNode = 2LL;
  }
  if ( v4 == -1 )
  {
    *(_BYTE *)(a1 + 132) = 0;
  }
  else
  {
    v12 = v6 + v4;
    *(_BYTE *)(a1 + 132) = 1;
    *(_QWORD *)(a1 + 120) = v12;
    v13 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
    if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) == 0 )
      goto LABEL_28;
    if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
    {
      v13 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
LABEL_28:
      LOBYTE(v11) = 0;
      if ( !v13 )
        goto LABEL_32;
      while ( 1 )
      {
        if ( *(_QWORD *)(v13 + 24) <= v12 )
        {
          v14 = *(_QWORD *)(v13 + 8);
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( !v14 )
            {
LABEL_68:
              LOBYTE(v11) = 1;
              goto LABEL_32;
            }
            v14 ^= v13;
          }
          if ( !v14 )
            goto LABEL_68;
        }
        else
        {
          v14 = *(_QWORD *)v13;
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( !v14 )
              goto LABEL_32;
            v14 ^= v13;
          }
          if ( !v14 )
            goto LABEL_32;
        }
        v13 = v14;
      }
    }
    v13 = 0LL;
    LOBYTE(v11) = 0;
LABEL_32:
    RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v13, v11, a1 + 96);
  }
  for ( i = *(__int64 **)(a1 + 32); i != (__int64 *)(a1 + 32); i = (__int64 *)*i )
  {
    if ( (*((_BYTE *)i + 68) & 1) == 0 )
    {
      if ( CiThreadsMovedUp )
      {
        v16 = *(i - 1);
        if ( *(_QWORD *)(v16 + 120) || !*(_BYTE *)(v16 + 132) && *(_QWORD *)(v16 + 80) )
        {
          v17 = *(_BYTE *)(*(i - 2) + 40);
          if ( v17 > *((_BYTE *)i + 24) )
            v17 = *((_BYTE *)i + 24);
        }
        else
        {
          v17 = *((_BYTE *)i + 24);
        }
      }
      else
      {
        v17 = *((_BYTE *)i + 26);
      }
      v18 = v17;
      if ( *((unsigned __int8 *)i + 27) != v17 )
      {
        *((_BYTE *)i + 27) = v17;
        if ( byte_14000A0D0 )
          CiLogSchedulerEvent(i - 10, v17);
        KeSetActualBasePriorityThread(i[2], v18);
      }
    }
  }
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
  {
    if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
      goto LABEL_87;
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
      v20 = *(_QWORD *)(DeviceObjectExtension + 24);
      if ( v6 > v20 )
      {
        v21 = 0LL;
      }
      else
      {
        v21 = v6 - v20;
        if ( v21 < -2000 )
          v21 += 2000LL;
      }
      CiSchedulerTimerNode = DeviceObjectExtension;
      ExSetTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v21, 0LL, &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
    }
    goto LABEL_52;
  }
LABEL_87:
  if ( CiSchedulerTimerNode != 1 )
  {
    CiSchedulerTimerNode = 1LL;
    ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
  }
LABEL_52:
  v22 = *(_DWORD *)(a1 + 184);
  if ( (v22 & 0x20) != 0 )
  {
    v22 &= ~0x20u;
    --CiTotalTasksDeadlineExpired;
    *(_DWORD *)(a1 + 184) = v22;
  }
  if ( (v22 & 0x10) != 0 )
    *(_DWORD *)(a1 + 184) = v22 & 0xFFFFFFEF;
  CiSchedulerRefreshTaskIndexQosProperties(a1);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
