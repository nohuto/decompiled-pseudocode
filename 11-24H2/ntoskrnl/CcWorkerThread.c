/*
 * XREFs of CcWorkerThread @ 0x1404D4DF0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcNotifyWriteBehindVolume @ 0x1402650BC (CcNotifyWriteBehindVolume.c)
 *     CcLazyWriteScan @ 0x1402654C8 (CcLazyWriteScan.c)
 *     CcWriteBehind @ 0x1402798D4 (CcWriteBehind.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x140279B04 (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     CcFreeWorkQueueEntry @ 0x140279C5C (CcFreeWorkQueueEntry.c)
 *     ExQueueWorkItemToPartition @ 0x140279D60 (ExQueueWorkItemToPartition.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140279DE0 (CcPerfLogWorkItemEnqueue.c)
 *     CcFindNextWorkQueueEntry @ 0x14027ACDC (CcFindNextWorkQueueEntry.c)
 *     CcPerfLogWorkItemComplete @ 0x14027AD94 (CcPerfLogWorkItemComplete.c)
 *     CcPerfLogWorkItemDequeue @ 0x14027AE00 (CcPerfLogWorkItemDequeue.c)
 *     CcShouldWorkOnThisQueue @ 0x14027B03C (CcShouldWorkOnThisQueue.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402E624C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x1402E62E0 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcLazyWriteScanVolume @ 0x1404AFE00 (CcLazyWriteScanVolume.c)
 *     CcLogExtraWBThreadAction @ 0x1404C68AC (CcLogExtraWBThreadAction.c)
 *     CcReEngageWorkerThreads @ 0x1404D4C20 (CcReEngageWorkerThreads.c)
 *     CcPerformReadAhead @ 0x1404D78D0 (CcPerformReadAhead.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CcDebugExceptionFilter @ 0x1405778A4 (CcDebugExceptionFilter.c)
 *     CcOkToAddWriteBehindThread @ 0x14057792C (CcOkToAddWriteBehindThread.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall CcWorkerThread(__int64 a1)
{
  _QWORD *v1; // r15
  _QWORD *NextWorkQueueEntry; // r14
  int v3; // r12d
  __int64 v4; // r13
  __int64 v5; // rdi
  int v6; // ebx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  signed __int64 v12; // rbx
  __int64 **v13; // r12
  int v14; // eax
  __int64 v15; // rax
  _QWORD *v16; // r10
  _QWORD *v17; // rax
  __int64 *v18; // r10
  __int64 v19; // rcx
  _QWORD *v20; // r10
  char v21; // bl
  volatile signed __int32 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned int v27; // r9d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v29; // ebx
  struct _KTHREAD *v30; // rax
  volatile signed __int32 *v31; // rax
  _QWORD *v32; // rdx
  _QWORD *v33; // r8
  char v35; // [rsp+30h] [rbp-C8h]
  __int64 v36; // [rsp+38h] [rbp-C0h]
  __int64 v37; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD *v38; // [rsp+48h] [rbp-B0h]
  int v39; // [rsp+50h] [rbp-A8h]
  _QWORD *v40; // [rsp+58h] [rbp-A0h]
  _QWORD *v41; // [rsp+60h] [rbp-98h]
  _QWORD *v42; // [rsp+68h] [rbp-90h]
  __int64 v43; // [rsp+70h] [rbp-88h]
  __int64 v44; // [rsp+78h] [rbp-80h]
  __int64 v45; // [rsp+80h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v47; // [rsp+A0h] [rbp-58h] BYREF
  char v49; // [rsp+108h] [rbp+10h]
  char v50; // [rsp+110h] [rbp+18h]
  int v51; // [rsp+118h] [rbp+20h]

  v1 = 0LL;
  NextWorkQueueEntry = 0LL;
  v35 = 0;
  v37 = 0LL;
  v41 = (_QWORD *)a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v47, 0, sizeof(v47));
  v38 = 0LL;
  v3 = *(_DWORD *)(a1 + 32);
  v51 = v3;
  v39 = v3;
  if ( (unsigned int)(v3 - 1) > 1 )
    KeBugCheckEx(0x34u, 0x19E9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v50 = v3 == 2;
  v4 = *(_QWORD *)(a1 + 56);
  v43 = v4;
  v5 = *(_QWORD *)(a1 + 72);
  v44 = v5;
  v36 = *(_QWORD *)(a1 + 64);
  v45 = v36;
  while ( 1 )
  {
    v6 = 0;
    v49 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 832), &LockHandle);
    if ( v35 )
    {
      *(_BYTE *)(v5 + 196) = 0;
      v35 = 0;
      CcReEngageWorkerThreads(v4, v5, *(_DWORD *)(v5 + 180), *(_DWORD *)(v5 + 184));
    }
    if ( v38 == (_QWORD *)35422 )
    {
      if ( *((_DWORD *)NextWorkQueueEntry + 32) == 2 )
        *(_QWORD *)(NextWorkQueueEntry[2] + 504LL) = NextWorkQueueEntry;
      v7 = (_QWORD *)v1[1];
      if ( (_QWORD *)*v7 != v1 )
        goto LABEL_82;
      *NextWorkQueueEntry = v1;
      NextWorkQueueEntry[1] = v7;
      *v7 = NextWorkQueueEntry;
      v1[1] = NextWorkQueueEntry;
      v38 = 0LL;
    }
    if ( v3 == 2 )
      break;
LABEL_17:
    if ( (v6 & 1) == 0 )
    {
      v6 |= 1u;
      v1 = (_QWORD *)(v5 + 72);
      if ( (_QWORD *)*v1 != v1 )
        goto LABEL_23;
    }
    if ( (v6 & 2) == 0 )
    {
      v6 |= 2u;
      v1 = (_QWORD *)(v5 + 88);
      if ( (_QWORD *)*v1 != v1 )
        goto LABEL_23;
    }
    while ( 1 )
    {
      if ( (v6 & 4) != 0 )
        goto LABEL_13;
      v6 |= 4u;
      v1 = (_QWORD *)(v5 + 104);
      if ( (_QWORD *)*v1 == v1 )
        goto LABEL_13;
LABEL_23:
      v40 = v1;
      if ( CcShouldWorkOnThisQueue(v4, v5, (__int64)v1, v50) )
      {
        NextWorkQueueEntry = CcFindNextWorkQueueEntry(v11, v10, v1);
        v42 = NextWorkQueueEntry;
        if ( NextWorkQueueEntry )
          break;
      }
LABEL_16:
      if ( v3 != 2 )
        goto LABEL_17;
    }
    v12 = MEMORY[0xFFFFF78000000014];
    if ( *(_BYTE *)(v5 + 224)
      && MEMORY[0xFFFFF78000000014] >= *(_QWORD *)(v5 + 216) + (unsigned int)CcExtraWBThreadDelay
      && *(_QWORD *)(v5 + 56) == v5 + 56
      && *(_DWORD *)(v4 + 976)
      && *(_QWORD *)(v5 + 104) != v5 + 104 )
    {
      v13 = (__int64 **)(v5 + 136);
      if ( *v13 != (__int64 *)v13 )
      {
        v14 = CcOkToAddWriteBehindThread(v4, v5);
        *(_QWORD *)(v5 + 216) = v12;
        if ( *(_DWORD *)(v5 + 152) && v14 == 3 )
          *(_BYTE *)(v5 + 225) = 1;
        if ( v14 == 2 )
        {
          v15 = **v13;
          if ( (__int64 **)(*v13)[1] != v13 || *(__int64 **)(v15 + 8) != *v13 )
            goto LABEL_82;
          *v13 = (__int64 *)v15;
          *(_QWORD *)(v15 + 8) = v13;
          ++*(_DWORD *)(v5 + 152);
          CcReferencePartitionAndPrivateVolumeCacheMap(v4, v36);
          *v16 = 0LL;
          ExQueueWorkItemToPartition((ULONG_PTR)v16, 0, *(_DWORD *)(v5 + 24), *(_QWORD *)(v4 + 8));
          v49 = 1;
        }
      }
      v3 = v51;
    }
    if ( v1 == (_QWORD *)(v5 + 104) )
      *(_QWORD *)(v5 + 208) = v12;
    if ( CcIsWriteBehindThreadpoolAtLowPriority(v4)
      || v12 < *(_QWORD *)(v5 + 208) + (unsigned int)CcExtraWBThreadDelay
      || *(_QWORD *)(v5 + 56) != v5 + 56
      || *(_QWORD *)(v5 + 104) == v5 + 104
      || (v17 = (_QWORD *)(v5 + 136), v18 = *(__int64 **)(v5 + 136), v18 == (__int64 *)(v5 + 136))
      || *(_DWORD *)(v5 + 152) )
    {
      v21 = v49;
    }
    else
    {
      v19 = *v18;
      if ( (_QWORD *)v18[1] != v17 || *(__int64 **)(v19 + 8) != v18 )
        goto LABEL_82;
      *v17 = v19;
      *(_QWORD *)(v19 + 8) = v17;
      ++*(_DWORD *)(v5 + 152);
      CcReferencePartitionAndPrivateVolumeCacheMap(v4, v36);
      *v20 = 0LL;
      ExQueueWorkItemToPartition((ULONG_PTR)v20, 0, *(_DWORD *)(v5 + 24), *(_QWORD *)(v4 + 8));
      *(_QWORD *)(v5 + 208) = v12;
      v21 = 1;
    }
    if ( v1 == (_QWORD *)(v5 + 104) || (v22 = (volatile signed __int32 *)(v5 + 192), v1 == (_QWORD *)(v5 + 120)) )
      v22 = (volatile signed __int32 *)(v5 + 188);
    _InterlockedIncrement(v22);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (xmmword_140FC6B50 & 0x20000) != 0 && v21 )
      CcLogExtraWBThreadAction(v4, v5, 2);
    if ( (xmmword_140FC6B50 & 0x20000) != 0 )
      CcPerfLogWorkItemDequeue((__int64)NextWorkQueueEntry);
    switch ( *((_DWORD *)NextWorkQueueEntry + 32) )
    {
      case 1:
        CcPerformReadAhead(NextWorkQueueEntry, NextWorkQueueEntry[2]);
        break;
      case 2:
        CurrentThread = KeGetCurrentThread();
        *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
        v29 = 0;
        do
        {
          v38 = NextWorkQueueEntry;
          CcWriteBehind(NextWorkQueueEntry[2], (__int64)&v37, v5);
          if ( v29 >= 0xA )
            break;
          ++v29;
        }
        while ( v38 == (_QWORD *)35422 );
        v30 = KeGetCurrentThread();
        *((_DWORD *)&v30[1].SwapListEntry + 3) &= ~2u;
        break;
      case 3:
        v26 = *(_QWORD *)(a1 + 64);
        v27 = *((_DWORD *)NextWorkQueueEntry + 4);
        if ( v26 )
          CcLazyWriteScanVolume(v26, v5, (__int64)NextWorkQueueEntry, v27);
        else
          CcLazyWriteScan(v4, v5, (int)NextWorkQueueEntry, v27);
        break;
      case 4:
        KeSetEvent((PRKEVENT)NextWorkQueueEntry[2], 0, 0);
        v35 = 1;
        break;
    }
    if ( v1 == (_QWORD *)(v5 + 104) || (v31 = (volatile signed __int32 *)(v5 + 192), v1 == (_QWORD *)(v5 + 120)) )
      v31 = (volatile signed __int32 *)(v5 + 188);
    _InterlockedDecrement(v31);
    if ( v38 == (_QWORD *)35422 )
    {
      if ( (xmmword_140FC6B50 & 0x20000) != 0 )
        CcPerfLogWorkItemEnqueue((__int64)v1, (__int64)NextWorkQueueEntry, 1, 0);
    }
    else
    {
      if ( (xmmword_140FC6B50 & 0x20000) != 0 )
        CcPerfLogWorkItemComplete((__int64)NextWorkQueueEntry);
      CcFreeWorkQueueEntry((_SLIST_ENTRY *)NextWorkQueueEntry, v23, v24, v25);
    }
  }
  if ( !*(_BYTE *)(v5 + 225) )
    goto LABEL_16;
  *(_BYTE *)(v5 + 225) = 0;
LABEL_13:
  if ( v3 != 2 )
  {
    v32 = *(_QWORD **)(v5 + 64);
    if ( *v32 == v5 + 56 )
    {
      v33 = v41;
      *v41 = v5 + 56;
      v33[1] = v32;
      *v32 = v33;
      *(_QWORD *)(v5 + 64) = v33;
      --*(_DWORD *)(v5 + 48);
      goto LABEL_84;
    }
LABEL_82:
    __fastfail(3u);
  }
  v8 = *(_QWORD **)(v5 + 144);
  if ( *v8 != v5 + 136 )
    goto LABEL_82;
  v9 = v41;
  *v41 = v5 + 136;
  v9[1] = v8;
  *v8 = v9;
  *(_QWORD *)(v5 + 144) = v9;
  --*(_DWORD *)(v5 + 152);
  v3 = v51;
LABEL_84:
  if ( *(_BYTE *)(v5 + 224) && !*(_DWORD *)(v5 + 152) && *(_DWORD *)(v5 + 48) <= 1u )
  {
    *(_BYTE *)(v5 + 224) = 0;
    memset_0(*(void **)(v4 + 1136), 0, 8LL * (unsigned int)(*(_DWORD *)(v4 + 864) + 1));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v36
    && v3 != 2
    && *(_DWORD *)(v5 + 48) <= 1u
    && *(_QWORD *)(v36 + 992) >= (unsigned __int64)*(unsigned int *)(v36 + 1040)
    && MEMORY[0xFFFFF78000000014] >= *(_QWORD *)(v36 + 1600) + 5000000LL )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 768), &v47);
    CcNotifyWriteBehindVolume(v36, 32);
    KeReleaseInStackQueuedSpinLock(&v47);
  }
  if ( (xmmword_140FC6B50 & 0x20000) != 0 && v3 == 2 )
    CcLogExtraWBThreadAction(v4, v5, 3);
  return CcDereferencePartitionAndPrivateVolumeCacheMap(v4, v36);
}
