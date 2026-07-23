/*
 * XREFs of CcUninitializeCacheMap @ 0x1404D3ED0
 * Callers:
 *     CcPurgeCacheSection @ 0x1402070C0 (CcPurgeCacheSection.c)
 * Callees:
 *     CcPurgeCacheSection @ 0x1402070C0 (CcPurgeCacheSection.c)
 *     IoDiskIoAttributionDereference @ 0x14020D960 (IoDiskIoAttributionDereference.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcNotifyWriteBehindInternal @ 0x1402638AC (CcNotifyWriteBehindInternal.c)
 *     CcNotifyWriteBehindVolume @ 0x1402650BC (CcNotifyWriteBehindVolume.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x140279B04 (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     CcFreeWorkQueueEntry @ 0x140279C5C (CcFreeWorkQueueEntry.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     CcDeleteSharedCacheMap @ 0x1402E5B98 (CcDeleteSharedCacheMap.c)
 *     ExFreeToLookasideListEx @ 0x1402E6050 (ExFreeToLookasideListEx.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402E624C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14043F66C (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404D48A8 (CcBoostLowPriorityWorkerThread.c)
 *     CcReEngageWorkerThreads @ 0x1404D4C20 (CcReEngageWorkerThreads.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall CcUninitializeCacheMap(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER TruncateSize,
        PCACHE_UNINITIALIZE_EVENT UninitializeEvent)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // di
  _QWORD *v9; // rdx
  PFILE_OBJECT *PrivateCacheMap; // r12
  char *SharedCacheMap; // rdi
  _QWORD *v12; // rdx
  PFILE_OBJECT v13; // rax
  _QWORD *p_Type; // rcx
  PFILE_OBJECT **v15; // rdx
  PVOID *v16; // rcx
  ULONG_PTR BugCheckParameter4; // r11
  int v18; // eax
  bool v19; // di
  BOOLEAN v20; // r14
  char v21; // cl
  _BYTE *v22; // rax
  char v23; // di
  int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 FsContext; // rcx
  __int64 v31; // rdx
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+30h] [rbp-39h] BYREF
  __int128 v33; // [rsp+48h] [rbp-21h] BYREF
  __int64 v34; // [rsp+58h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-9h] BYREF
  struct _KLOCK_QUEUE_HANDLE v36; // [rsp+78h] [rbp+Fh] BYREF
  bool v37; // [rsp+D0h] [rbp+67h]
  PFILE_OBJECT P; // [rsp+E8h] [rbp+7Fh]

  v32.LockQueue.Lock = &CcMasterLock;
  v32.LockQueue.Next = 0LL;
  *(_QWORD *)&v32.OldIrql = 0LL;
  v34 = 0LL;
  v6 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  P = 0LL;
  v7 = 0LL;
  v33 = 0LL;
  v37 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != LOBYTE(v32.LockQueue.Next) )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v32.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v9 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v32);
    if ( v9 )
      KxWaitForLockOwnerShip((__int64)&v32, v9);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&v32, (volatile __int64 *)&CcMasterLock);
  }
  PrivateCacheMap = (PFILE_OBJECT *)FileObject->PrivateCacheMap;
  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    v6 = *((_QWORD *)SharedCacheMap + 67);
    if ( CcEnablePerVolumeLazyWriter )
      v7 = *((_QWORD *)SharedCacheMap + 75);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 1296)) <= 1 )
      __fastfail(0xEu);
    if ( v7 && _InterlockedIncrement64((volatile signed __int64 *)(v7 + 8)) <= 1 )
      __fastfail(0xEu);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
  }
  if ( !PrivateCacheMap )
  {
    BugCheckParameter4 = 0LL;
    goto LABEL_39;
  }
  if ( PrivateCacheMap[1] != FileObject )
    KeBugCheckEx(0x34u, 0xB9DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !v6 )
    KeBugCheckEx(0x34u, 0xBA3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( PrivateCacheMap[14] )
  {
    *((_QWORD *)&v33 + 1) = v6 + 832;
    *(_QWORD *)&v33 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v12 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v6 + 832), (__int64)&v33);
      if ( v12 )
        KxWaitForLockOwnerShip((__int64)&v33, v12);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&v33, (volatile __int64 *)(v6 + 832));
    }
    v13 = PrivateCacheMap[14];
    if ( v13 )
    {
      v12 = *(_QWORD **)&v13->Type;
      ++CcDbgNumberOfNoopedReadAheads;
      p_Type = &v13->DeviceObject->Type;
      P = v13;
      if ( (PFILE_OBJECT)v12[1] != v13 || (PFILE_OBJECT)*p_Type != v13 )
LABEL_37:
        __fastfail(3u);
      *p_Type = v12;
      v12[1] = p_Type;
      v13->DeviceObject = 0LL;
      *(_QWORD *)&v13->Type = 0LL;
      if ( (PFILE_OBJECT)v13->Vpb != FileObject )
        KeBugCheckEx(0x34u, 0xBC4uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      --*((_DWORD *)SharedCacheMap + 1);
      --*((_DWORD *)SharedCacheMap + 136);
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v33, (__int64)v12);
  }
  --*((_DWORD *)SharedCacheMap + 1);
  v15 = (PFILE_OBJECT **)PrivateCacheMap[12];
  v16 = (PVOID *)PrivateCacheMap[13];
  if ( v15[1] != PrivateCacheMap + 12 || *v16 != PrivateCacheMap + 12 )
    goto LABEL_37;
  *v16 = v15;
  BugCheckParameter4 = 0LL;
  v15[1] = (PFILE_OBJECT *)v16;
  if ( PrivateCacheMap == (PFILE_OBJECT *)(SharedCacheMap + 384) )
  {
    *(_WORD *)PrivateCacheMap = 0;
    PrivateCacheMap = 0LL;
  }
  FileObject->PrivateCacheMap = 0LL;
LABEL_39:
  if ( !SharedCacheMap )
  {
    if ( TruncateSize && !TruncateSize->QuadPart && FileObject->SectionObjectPointer->DataSectionObject )
    {
      if ( v6 )
        KeBugCheckEx(0x34u, 0xCEBuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      KeReleaseInStackQueuedSpinLock(&v32);
      CcPurgeCacheSection(FileObject->SectionObjectPointer, TruncateSize, 0, 0);
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&v32);
    }
    if ( UninitializeEvent )
      KeSetEvent(&UninitializeEvent->Event, 0, 0);
    goto LABEL_95;
  }
  if ( TruncateSize )
  {
    if ( TruncateSize->QuadPart || !*((_QWORD *)SharedCacheMap + 1) )
    {
      if ( *((char **)SharedCacheMap + 29) == SharedCacheMap + 232 )
        *((LARGE_INTEGER *)SharedCacheMap + 1) = *TruncateSize;
    }
    else
    {
      *((_DWORD *)SharedCacheMap + 38) |= 0x10u;
    }
  }
  if ( *((_DWORD *)SharedCacheMap + 1) )
  {
    if ( UninitializeEvent )
    {
      if ( *((char **)SharedCacheMap + 29) == SharedCacheMap + 232 )
      {
        UninitializeEvent->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 35);
        *((_QWORD *)SharedCacheMap + 35) = UninitializeEvent;
        v37 = (FileObject->DeviceObject->Characteristics & 0x10) != 0;
      }
      else
      {
        KeSetEvent(&UninitializeEvent->Event, 0, 0);
      }
    }
    goto LABEL_51;
  }
  if ( *((char **)SharedCacheMap + 29) != SharedCacheMap + 232 )
    KeBugCheckEx(0x34u, 0xC40uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( UninitializeEvent )
  {
    UninitializeEvent->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 35);
    *((_QWORD *)SharedCacheMap + 35) = UninitializeEvent;
    v37 = (FileObject->DeviceObject->Characteristics & 0x10) != 0;
  }
  v18 = *((_DWORD *)SharedCacheMap + 38);
  if ( (v18 & 4) != 0 || UninitializeEvent )
  {
    if ( (v18 & 0x20) != 0 )
      goto LABEL_64;
    if ( !*((_DWORD *)SharedCacheMap + 28)
      && ((v18 & 0x400) == 0 || *((_QWORD *)SharedCacheMap + 5) == 0x7FFFFFFFFFFFFFFFLL) )
    {
      CcDeleteSharedCacheMap(SharedCacheMap, &v32, &LockHandle, 0, 0LL);
      v19 = 0;
      v20 = 1;
      goto LABEL_96;
    }
  }
  else if ( (v18 & 0x20) != 0 )
  {
    goto LABEL_64;
  }
  CcInsertIntoDirtySharedCacheMapList((__int64)SharedCacheMap);
LABEL_64:
  v21 = CcEnablePerVolumeLazyWriter;
  if ( CcEnablePerVolumeLazyWriter )
    v22 = (_BYTE *)(*((_QWORD *)SharedCacheMap + 75) + 986LL);
  else
    v22 = (_BYTE *)(*((_QWORD *)SharedCacheMap + 67) + 1050LL);
  *v22 = 1;
  if ( *(_BYTE *)(v6 + 1294) )
  {
    *((_DWORD *)SharedCacheMap + 38) |= 0x10000u;
LABEL_69:
    if ( v21 )
    {
      CcNotifyWriteBehindVolume(v7, 8);
LABEL_71:
      if ( !*(_BYTE *)(v7 + 1172) )
        *(_BYTE *)(v7 + 985) = 1;
      goto LABEL_51;
    }
    CcNotifyWriteBehindInternal(v6, 8);
LABEL_74:
    if ( !*(_BYTE *)(v6 + 1292) )
      *(_BYTE *)(v6 + 1049) = 1;
    goto LABEL_51;
  }
  if ( UninitializeEvent && (*((_DWORD *)SharedCacheMap + 38) & 0x20) == 0 )
    goto LABEL_69;
  if ( v21 )
  {
    if ( !*(_BYTE *)(v7 + 1172) )
    {
      if ( !*(_BYTE *)(v7 + 985) )
      {
        if ( !*(_BYTE *)(v7 + 984) )
          KeBugCheckEx(0x34u, 0x7CBuLL, 0xFFFFFFFFC0000420uLL, 0LL, BugCheckParameter4);
        KiSetTimerEx(v7 + 920, CcFirstDelay, 0, 0, BugCheckParameter4);
      }
      goto LABEL_71;
    }
  }
  else if ( !*(_BYTE *)(v6 + 1292) )
  {
    if ( !*(_BYTE *)(v6 + 1049) )
    {
      if ( !*(_BYTE *)(v6 + 1048) )
        KeBugCheckEx(0x34u, 0x371uLL, 0xFFFFFFFFC0000420uLL, 0LL, BugCheckParameter4);
      KiSetTimerEx(v6 + 984, CcFirstDelay, 0, 0, BugCheckParameter4);
    }
    goto LABEL_74;
  }
LABEL_51:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeReleaseInStackQueuedSpinLock(&v32);
LABEL_95:
  v19 = v37;
  v20 = 0;
LABEL_96:
  if ( PrivateCacheMap )
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)&CcPrivateCacheMapLookasideList, PrivateCacheMap);
  if ( v19 )
  {
    v23 = 0;
    memset(&v36, 0, sizeof(v36));
    if ( !(_BYTE)dword_140FC521C && (unsigned int)CcNumberNumaNodes <= 1 && !CcEnablePerVolumeLazyWriter )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 832), &v36);
      if ( CcIsWriteBehindThreadpoolAtLowPriority(v6) )
      {
        if ( !v24 )
        {
          if ( (unsigned int)CcNumberNumaNodes <= 1 && !CcEnablePerVolumeLazyWriter )
          {
            v31 = *(_QWORD *)(v6
                            + 8LL
                            * (KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]
                             % (unsigned int)CcNumberNumaNodes)
                            + 128);
            *(_DWORD *)(v6 + 1288) = -1;
            if ( *(_QWORD *)(v31 + 104) != v31 + 104 && !*(_BYTE *)(v31 + 196) )
              CcReEngageWorkerThreads(v6, v31, *(unsigned int *)(v6 + 840), 0LL);
          }
          goto LABEL_107;
        }
        v23 = 1;
        if ( (unsigned int)CcNumberNumaNodes <= 1 && !CcEnablePerVolumeLazyWriter )
        {
          v25 = *(_QWORD *)(v6
                          + 8LL
                          * (KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] % (unsigned int)CcNumberNumaNodes)
                          + 128);
          *(_DWORD *)(v6 + 1288) = -1;
          if ( *(_QWORD *)(v25 + 104) == v25 + 104 )
          {
LABEL_107:
            KeReleaseInStackQueuedSpinLock(&v36);
LABEL_111:
            if ( KeGetCurrentIrql() < 2u )
              CcBoostLowPriorityWorkerThread(v6, 0LL);
            goto LABEL_113;
          }
          if ( !*(_BYTE *)(v25 + 196) )
            CcReEngageWorkerThreads(v6, v25, *(unsigned int *)(v6 + 840), 0LL);
        }
      }
      KeReleaseInStackQueuedSpinLock(&v36);
      if ( !v23 )
        goto LABEL_113;
      goto LABEL_111;
    }
  }
LABEL_113:
  if ( P )
  {
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    FsContext = (__int64)P->FsContext;
    if ( FsContext )
      IoDiskIoAttributionDereference(FsContext);
    CcFreeWorkQueueEntry((_SLIST_ENTRY *)P, v26, v27, v28);
  }
  if ( v6 )
    CcDereferencePartitionAndPrivateVolumeCacheMap(v6, v7);
  return v20;
}
