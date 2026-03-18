/*
 * XREFs of CiSchedulerThreadFunction @ 0x1C00018F0
 * Callers:
 *     <none>
 * Callees:
 *     CiSchedulerDeepSleep @ 0x1C0001540 (CiSchedulerDeepSleep.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0001730 (CiSchedulerRemoveDeadline.c)
 *     CiSchedulerWait @ 0x1C0002650 (CiSchedulerWait.c)
 *     CiSchedulerSetPriority @ 0x1C0003260 (CiSchedulerSetPriority.c)
 *     CiLogSchedulerWakeup @ 0x1C0004010 (CiLogSchedulerWakeup.c)
 *     WPP_SF_ @ 0x1C0004620 (WPP_SF_.c)
 */

void __fastcall CiSchedulerThreadFunction(struct _KEVENT *StartContext)
{
  PVOID *p_Reserved; // rbp
  struct _KTHREAD *CurrentThread; // rax
  char v4; // di
  int v5; // r14d
  unsigned __int64 v6; // rcx
  unsigned int v7; // r15d
  struct _DEVICE_OBJECT *SystemArgument1; // rbx
  struct _DEVICE_OBJECT *NextDevice; // rsi
  __int64 i; // rdi
  char v11; // bl
  unsigned __int8 v12; // al
  bool v13; // zf
  int v14; // eax
  unsigned int v15; // eax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 *v18; // rdx
  unsigned int v19; // [rsp+50h] [rbp+8h] BYREF

  p_Reserved = 0LL;
  if ( byte_1C00090D0 )
    CiLogSchedulerWakeup(1LL);
  CurrentThread = KeGetCurrentThread();
  v4 = 1;
  CiThreadsMovedUp = 1;
  CiSchedulerThread = CurrentThread;
  CiSchedulerInLazyMode = 0;
  KeSetActualBasePriorityThread(CurrentThread, 27LL);
  KeSetEvent(StartContext, 0, 0);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 15LL, &WPP_e00c2d44edf236fb41cafbc4576a8546_Traceguids);
  v19 = 0;
  do
  {
    v5 = 0;
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v7 = 0;
    SystemArgument1 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    for ( CiThreadsMovedUp = v4;
          SystemArgument1 != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1;
          SystemArgument1 = *(struct _DEVICE_OBJECT **)&SystemArgument1->Type )
    {
      p_Reserved = &SystemArgument1[-1].Reserved;
      NextDevice = SystemArgument1->NextDevice;
      for ( i = (__int64)&SystemArgument1->NextDevice; NextDevice != (struct _DEVICE_OBJECT *)i; v7 = v15 )
      {
        v12 = CiSchedulerSetPriority(&NextDevice[-1].Dpc.DpcData);
        NextDevice = *(struct _DEVICE_OBJECT **)&NextDevice->Type;
        v6 = v12;
        v13 = v12 == 0;
        v14 = v5 + 1;
        if ( v13 )
          v14 = v5;
        v5 = v14;
        v15 = v7 + 1;
        if ( v13 )
          v15 = v7;
      }
    }
    if ( CiThreadsMovedUp && v7 > 1 )
    {
      v6 = (unsigned __int64)p_Reserved[4];
      v16 = p_Reserved + 4;
      if ( *(PVOID **)(v6 + 8) != p_Reserved + 4
        || (v17 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6)
        || (*v16 = v17, *(_QWORD *)(v17 + 8) = v16, v18 = (unsigned __int64 *)p_Reserved[5], (_QWORD *)*v18 != v16) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)v6 = v16;
      *(_QWORD *)(v6 + 8) = v18;
      *v18 = v6;
      p_Reserved[5] = (PVOID)v6;
    }
    if ( v5 )
    {
      v4 = CiSchedulerWait(v6, &v19);
    }
    else
    {
      v4 = 1;
      CiThreadsMovedUp = 1;
      CiSchedulerInLazyMode = 1;
      CiSchedulerRemoveDeadline((__int64)&WPP_MAIN_CB.Reserved);
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
      CiSchedulerDeepSleep((__int32 *)&v19);
    }
    v11 = v19;
    if ( byte_1C00090D0 )
      CiLogSchedulerWakeup(v19);
  }
  while ( (v11 & 8) == 0 );
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_e00c2d44edf236fb41cafbc4576a8546_Traceguids);
  PsTerminateSystemThread(0);
}
