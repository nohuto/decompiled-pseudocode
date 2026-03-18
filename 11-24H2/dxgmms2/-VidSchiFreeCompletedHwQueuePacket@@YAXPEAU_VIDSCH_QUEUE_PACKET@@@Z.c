/*
 * XREFs of ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140029970
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140011740 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140028748 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140028980 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14002A774 (-VidSchiCompleteHwQueueWaitPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x140015574 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiProfilePerformanceTick @ 0x140015D90 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140035354 (-VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140035468 (-VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiFreeCompletedHwQueuePacket(LARGE_INTEGER *a1)
{
  LARGE_INTEGER v2; // rsi
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 *v5; // r15
  __int64 v6; // rbp
  LARGE_INTEGER *v7; // rax
  LARGE_INTEGER v8; // rdx
  LARGE_INTEGER *QuadPart; // rcx
  struct _KEVENT *v10; // r12
  __int64 v11; // rcx
  int v12; // eax
  KIRQL v13; // r14
  struct _KEVENT *v14; // r13
  int Flink; // ecx
  BOOL v16; // eax
  __int64 *v17; // r14
  bool v18; // zf
  KSPIN_LOCK *v19; // r14
  LARGE_INTEGER *v20; // rdi
  LARGE_INTEGER v21; // rcx
  LARGE_INTEGER *v22; // rax
  _DWORD *v23; // rbp
  _QWORD **v24; // rbx
  LARGE_INTEGER **v25; // rax
  int v26; // ecx
  BOOL v27; // eax
  _QWORD *v28; // rdi
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  struct _KLOCK_QUEUE_HANDLE v31; // [rsp+40h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v33; // [rsp+70h] [rbp-48h] BYREF

  v2 = a1[12];
  v3 = *(_QWORD *)(v2.QuadPart + 40);
  v4 = *(_QWORD *)(v3 + 16);
  v5 = *(__int64 **)(v3 + 8);
  v6 = *(_QWORD *)(v4 + 24);
  a1[7].QuadPart = MEMORY[0xFFFFF78000000320];
  v7 = a1 + 4;
  a1[6].HighPart = 16;
  v8 = a1[4];
  if ( *(LARGE_INTEGER **)(v8.QuadPart + 8) != &a1[4] )
    goto LABEL_26;
  QuadPart = (LARGE_INTEGER *)a1[5].QuadPart;
  if ( (LARGE_INTEGER *)QuadPart->QuadPart != v7 )
    goto LABEL_26;
  *QuadPart = v8;
  *(_QWORD *)(v8.QuadPart + 8) = QuadPart;
  v10 = 0LL;
  v7->QuadPart = 0LL;
  v7[1].QuadPart = 0LL;
  v11 = *(_QWORD *)(v2.QuadPart + 160);
  v12 = *(_DWORD *)(v2.QuadPart + 124);
  if ( v11 == v2.QuadPart + 160 )
  {
    if ( v12 )
      goto LABEL_39;
  }
  else if ( v11 == *(_QWORD *)(v2.QuadPart + 208) )
  {
    if ( v12 != 2 )
    {
      if ( v12 == 1 && !*(_BYTE *)(*(_QWORD *)(v2.QuadPart + 40) + 144LL) )
        VidSchiNotifyReadyQueueRemoved((struct VIDSCH_HW_QUEUE *)v2.QuadPart);
      *(_DWORD *)(v2.QuadPart + 124) = 2;
    }
  }
  else if ( v12 != 1 )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(v2.QuadPart + 40) + 144LL) )
      VidSchiNotifyReadyQueueAdded((struct VIDSCH_HW_QUEUE *)v2.QuadPart);
    *(_DWORD *)(v2.QuadPart + 124) = 1;
  }
  while ( 1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 780));
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 3012));
    _InterlockedDecrement((volatile signed __int32 *)v5 + 459);
    _InterlockedDecrement((volatile signed __int32 *)(v2.QuadPart + 148));
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 308));
    VidSchiProfilePerformanceTick(9, v6, v4, 0LL, (__int64)v10, (__int64)a1, (__int64)v10, (__int64)v10);
    VidSchiCheckPendingDeviceCommand(v5);
    v10 = (struct _KEVENT *)(v4 + 424);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v13 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 2000), &LockHandle);
    v14 = *(struct _KEVENT **)(v4 + 424);
    if ( *(struct _KEVENT **)&v10->Header.Lock != v10 )
    {
      do
      {
        if ( LODWORD(v14->Header.WaitListHead.Blink) == 4 )
        {
          v16 = *(_DWORD *)(*(_QWORD *)&v14[1].Header.Lock + 4LL * LODWORD(v14[1].Header.WaitListHead.Blink) + 1700) < *(_DWORD *)(*(_QWORD *)&v14[1].Header.Lock + 244LL);
        }
        else
        {
          if ( ((__int64)v14[1].Header.WaitListHead.Flink & 0x10) == 0 )
            goto LABEL_16;
          Flink = (int)v14[1].Header.WaitListHead.Blink->Flink;
          HIDWORD(v14[5].Header.WaitListHead.Blink) = Flink;
          v16 = Flink == 0;
        }
        if ( v16 )
        {
LABEL_16:
          ++v14[5].Header.LockNV;
          KeSetEvent(v14 + 4, 0, 0);
        }
        v14 = *(struct _KEVENT **)&v14->Header.Lock;
      }
      while ( v14 != v10 );
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v13);
    v17 = (__int64 *)(v6 + 1912);
    memset(&v33, 0, sizeof(v33));
    LOBYTE(v10) = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 2000), &v33);
    v5 = *(__int64 **)(v6 + 1912);
    if ( (__int64 *)*v17 != v17 )
    {
      do
      {
        if ( *((_DWORD *)v5 + 4) == 4 )
        {
          v27 = *(_DWORD *)(v5[3] + 4LL * *((unsigned int *)v5 + 10) + 1700) < *(_DWORD *)(v5[3] + 244);
        }
        else
        {
          if ( (v5[4] & 0x10) == 0 )
            goto LABEL_31;
          v26 = *(_DWORD *)v5[5];
          *((_DWORD *)v5 + 35) = v26;
          v27 = v26 == 0;
        }
        if ( v27 )
        {
LABEL_31:
          ++*((_DWORD *)v5 + 30);
          KeSetEvent((PRKEVENT)v5 + 4, 0, 0);
        }
        v5 = (__int64 *)*v5;
      }
      while ( v5 != v17 );
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v33);
    KeLowerIrql((KIRQL)v10);
    *(_QWORD *)(v4 + 328) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v4 + 296), 0, 0);
    *(_QWORD *)(v6 + 1760) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v6 + 1728), 0, 0);
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2.QuadPart + 40) + 16LL) + 24LL);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogSingleEntry2)(4LL, a1, (LARGE_INTEGER)v2.QuadPart);
    v18 = *(_BYTE *)(v3 + 7059) == 0;
    WdLogGlobalForLineNumber = 2195;
    if ( v18 )
      break;
    if ( a1[6].LowPart != 4 )
      break;
    a1[7 * a1[93].LowPart + 37] = KeQueryPerformanceCounter(0LL);
    a1[7 * a1[93].LowPart + 38].LowPart = a1[6].LowPart;
    RtlCaptureStackBackTrace(1u, 5u, (PVOID *)&a1[7 * a1[93].LowPart + 39], 0LL);
    v18 = a1[96].QuadPart == 0;
    a1[93].LowPart = ((unsigned __int8)a1[93].LowPart + 1) & 7;
    if ( v18 && !a1[97].QuadPart && !a1[22].QuadPart && !a1[23].QuadPart )
      break;
    g_DxgMmsBugcheckExportIndex = 1;
    v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry5)(
            0LL,
            281LL,
            61440LL,
            a1,
            (LARGE_INTEGER)v2.QuadPart,
            0LL);
    WdLogGlobalForLineNumber = 906;
LABEL_39:
    if ( v12 == 1 && *(_BYTE *)(*(_QWORD *)(v2.QuadPart + 40) + 144LL) == (_BYTE)v10 )
      VidSchiNotifyReadyQueueRemoved((struct VIDSCH_HW_QUEUE *)v2.QuadPart);
    *(_DWORD *)(v2.QuadPart + 124) = (_DWORD)v10;
  }
  a1[7].QuadPart = MEMORY[0xFFFFF78000000320];
  a1[6].HighPart = 0;
  v19 = (KSPIN_LOCK *)(v3 + 1992);
  v20 = a1 + 1;
  memset(&v31, 0, sizeof(v31));
  KeAcquireInStackQueuedSpinLock(v19, &v31);
  v21 = a1[1];
  if ( *(LARGE_INTEGER **)(v20->QuadPart + 8) != v20 )
    goto LABEL_26;
  v22 = (LARGE_INTEGER *)a1[2].QuadPart;
  if ( (LARGE_INTEGER *)v22->QuadPart != v20 )
    goto LABEL_26;
  *v22 = v21;
  *(_QWORD *)(v21.QuadPart + 8) = v22;
  if ( v2.QuadPart != -256 )
    --*(_DWORD *)(v2.QuadPart + 256);
  KeReleaseInStackQueuedSpinLock(&v31);
  v23 = (_DWORD *)(v2.QuadPart + 232);
  memset(&v31, 0, sizeof(v31));
  v24 = (_QWORD **)(v2.QuadPart + 216);
  KeAcquireInStackQueuedSpinLock(v19, &v31);
  v25 = *(LARGE_INTEGER ***)(v2.QuadPart + 224);
  if ( *v25 != (LARGE_INTEGER *)(v2.QuadPart + 216) )
LABEL_26:
    __fastfail(3u);
  v20->QuadPart = (LONGLONG)v24;
  v20[1].QuadPart = (LONGLONG)v25;
  *v25 = v20;
  *(_QWORD *)(v2.QuadPart + 224) = v20;
  if ( v2.QuadPart != -232 )
    ++*v23;
  KeReleaseInStackQueuedSpinLock(&v31);
  while ( 1 )
  {
    memset(&v31, 0, sizeof(v31));
    v28 = 0LL;
    KeAcquireInStackQueuedSpinLock(v19, &v31);
    v29 = *v24;
    if ( *v24 == v24 )
      break;
    if ( *v23 > 0x10u )
    {
      v28 = *v24;
      if ( (_QWORD **)v29[1] != v24 )
        goto LABEL_26;
      v30 = (_QWORD *)*v29;
      if ( (_QWORD *)v30[1] != v28 )
        goto LABEL_26;
      *v24 = v30;
      v30[1] = v24;
      --*v23;
    }
    KeReleaseInStackQueuedSpinLock(&v31);
    if ( !v28 )
      return;
    ExFreePoolWithTag(v28 - 1, 0);
  }
  KeReleaseInStackQueuedSpinLock(&v31);
}
