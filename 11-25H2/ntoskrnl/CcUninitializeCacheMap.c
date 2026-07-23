/*
 * XREFs of CcUninitializeCacheMap @ 0x1404DADC0
 * Callers:
 *     CcPurgeCacheSection @ 0x1402C4260 (CcPurgeCacheSection.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcPurgeCacheSection @ 0x1402C4260 (CcPurgeCacheSection.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     IoDiskIoAttributionDereference @ 0x14034EA34 (IoDiskIoAttributionDereference.c)
 *     CcDeleteSharedCacheMap @ 0x1403A4DE4 (CcDeleteSharedCacheMap.c)
 *     ExFreeToLookasideListEx @ 0x1403A52A0 (ExFreeToLookasideListEx.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1403A549C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcNotifyWriteBehindInternal @ 0x1403A724C (CcNotifyWriteBehindInternal.c)
 *     CcNotifyWriteBehindVolume @ 0x1403A7B2C (CcNotifyWriteBehindVolume.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x1403AC55C (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     CcFreeWorkQueueEntry @ 0x1403AC6BC (CcFreeWorkQueueEntry.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1404498E8 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404DB798 (CcBoostLowPriorityWorkerThread.c)
 *     CcReEngageWorkerThreads @ 0x1404DBB10 (CcReEngageWorkerThreads.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall CcUninitializeCacheMap(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER TruncateSize,
        PCACHE_UNINITIALIZE_EVENT UninitializeEvent)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB **v9; // rdx
  PFILE_OBJECT *PrivateCacheMap; // r12
  char *SharedCacheMap; // rdi
  struct _KPRCB **v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 **v15; // rcx
  PFILE_OBJECT **v16; // rdx
  PVOID *v17; // rcx
  ULONG_PTR BugCheckParameter4; // r11
  int v19; // eax
  char v20; // di
  BOOLEAN v21; // r14
  char v22; // cl
  _BYTE *v23; // rax
  char v24; // di
  int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v29; // rdx
  struct _KLOCK_QUEUE_HANDLE v30; // [rsp+30h] [rbp-39h] BYREF
  struct _KLOCK_QUEUE_HANDLE v31; // [rsp+48h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-9h] BYREF
  struct _KLOCK_QUEUE_HANDLE v33; // [rsp+78h] [rbp+Fh] BYREF
  int v34; // [rsp+D0h] [rbp+67h]
  PVOID P; // [rsp+E8h] [rbp+7Fh]

  v30.LockQueue.Lock = &CcMasterLock;
  v30.LockQueue.Next = 0LL;
  *(_QWORD *)&v30.OldIrql = 0LL;
  v6 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  P = 0LL;
  v7 = 0LL;
  memset(&v31, 0, sizeof(v31));
  LOBYTE(v34) = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != LOBYTE(v30.LockQueue.Next) )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  v30.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v9 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v30);
    if ( v9 )
      KxWaitForLockOwnerShip((struct _KPRCB *)&v30, v9);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&v30, (volatile __int64 *)&CcMasterLock);
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
    v31.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 832);
    v31.LockQueue.Next = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v12 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)(v6 + 832), (__int64)&v31);
      if ( v12 )
        KxWaitForLockOwnerShip((struct _KPRCB *)&v31, v12);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&v31, (volatile __int64 *)(v6 + 832));
    }
    v13 = (__int64 *)PrivateCacheMap[14];
    if ( v13 )
    {
      v14 = *v13;
      ++CcDbgNumberOfNoopedReadAheads;
      v15 = (__int64 **)v13[1];
      P = v13;
      if ( *(__int64 **)(v14 + 8) != v13 || *v15 != v13 )
LABEL_37:
        __fastfail(3u);
      *v15 = (__int64 *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      v13[1] = 0LL;
      *v13 = 0LL;
      if ( (PFILE_OBJECT)v13[2] != FileObject )
        KeBugCheckEx(0x34u, 0xBC4uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      --*((_DWORD *)SharedCacheMap + 1);
      --*((_DWORD *)SharedCacheMap + 136);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v31);
  }
  --*((_DWORD *)SharedCacheMap + 1);
  v16 = (PFILE_OBJECT **)PrivateCacheMap[12];
  v17 = (PVOID *)PrivateCacheMap[13];
  if ( v16[1] != PrivateCacheMap + 12 || *v17 != PrivateCacheMap + 12 )
    goto LABEL_37;
  *v17 = v16;
  BugCheckParameter4 = 0LL;
  v16[1] = (PFILE_OBJECT *)v17;
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
      KeReleaseInStackQueuedSpinLock(&v30);
      CcPurgeCacheSection(FileObject->SectionObjectPointer, TruncateSize, 0, 0);
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&v30);
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
        LOBYTE(v34) = (FileObject->DeviceObject->Characteristics & 0x10) != 0;
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
    LOBYTE(v34) = (FileObject->DeviceObject->Characteristics & 0x10) != 0;
  }
  v19 = *((_DWORD *)SharedCacheMap + 38);
  if ( (v19 & 4) != 0 || UninitializeEvent )
  {
    if ( (v19 & 0x20) != 0 )
      goto LABEL_64;
    if ( !*((_DWORD *)SharedCacheMap + 28)
      && ((v19 & 0x400) == 0 || *((_QWORD *)SharedCacheMap + 5) == 0x7FFFFFFFFFFFFFFFLL) )
    {
      CcDeleteSharedCacheMap(SharedCacheMap, &v30, &LockHandle, 0, 0LL);
      v20 = 0;
      v21 = 1;
      goto LABEL_96;
    }
  }
  else if ( (v19 & 0x20) != 0 )
  {
    goto LABEL_64;
  }
  CcInsertIntoDirtySharedCacheMapList((__int64)SharedCacheMap);
LABEL_64:
  v22 = CcEnablePerVolumeLazyWriter;
  if ( CcEnablePerVolumeLazyWriter )
    v23 = (_BYTE *)(*((_QWORD *)SharedCacheMap + 75) + 986LL);
  else
    v23 = (_BYTE *)(*((_QWORD *)SharedCacheMap + 67) + 1050LL);
  *v23 = 1;
  if ( *(_BYTE *)(v6 + 1294) )
  {
    *((_DWORD *)SharedCacheMap + 38) |= 0x10000u;
LABEL_69:
    if ( v22 )
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
  if ( v22 )
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
  KeReleaseInStackQueuedSpinLock(&v30);
LABEL_95:
  v20 = v34;
  v21 = 0;
LABEL_96:
  if ( PrivateCacheMap )
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)&CcPrivateCacheMapLookasideList, PrivateCacheMap);
  if ( v20 )
  {
    v24 = 0;
    memset(&v33, 0, sizeof(v33));
    if ( !(_BYTE)dword_140FC420C && (unsigned int)CcNumberNumaNodes <= 1 && !CcEnablePerVolumeLazyWriter )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 832), &v33);
      if ( CcIsWriteBehindThreadpoolAtLowPriority(v6) )
      {
        if ( !v25 )
        {
          if ( (unsigned int)CcNumberNumaNodes <= 1 && !CcEnablePerVolumeLazyWriter )
          {
            v29 = *(_QWORD *)(v6
                            + 8LL
                            * (KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]
                             % (unsigned int)CcNumberNumaNodes)
                            + 128);
            *(_DWORD *)(v6 + 1288) = -1;
            if ( *(_QWORD *)(v29 + 104) != v29 + 104 && !*(_BYTE *)(v29 + 196) )
              CcReEngageWorkerThreads(v6, v29, *(unsigned int *)(v6 + 840), 0LL);
          }
          goto LABEL_107;
        }
        v24 = 1;
        if ( (unsigned int)CcNumberNumaNodes <= 1 && !CcEnablePerVolumeLazyWriter )
        {
          v26 = *(_QWORD *)(v6
                          + 8LL
                          * (KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] % (unsigned int)CcNumberNumaNodes)
                          + 128);
          *(_DWORD *)(v6 + 1288) = -1;
          if ( *(_QWORD *)(v26 + 104) == v26 + 104 )
          {
LABEL_107:
            KeReleaseInStackQueuedSpinLock(&v33);
LABEL_111:
            if ( KeGetCurrentIrql() < 2u )
              CcBoostLowPriorityWorkerThread(v6, 0LL);
            goto LABEL_113;
          }
          if ( !*(_BYTE *)(v26 + 196) )
            CcReEngageWorkerThreads(v6, v26, *(unsigned int *)(v6 + 840), 0LL);
        }
      }
      KeReleaseInStackQueuedSpinLock(&v33);
      if ( !v24 )
        goto LABEL_113;
      goto LABEL_111;
    }
  }
LABEL_113:
  if ( P )
  {
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    v27 = *((_QWORD *)P + 3);
    if ( v27 )
      IoDiskIoAttributionDereference(v27);
    CcFreeWorkQueueEntry((_SLIST_ENTRY *)P);
  }
  if ( v6 )
    CcDereferencePartitionAndPrivateVolumeCacheMap(v6, v7);
  return v21;
}
