/*
 * XREFs of CcDeleteSharedCacheMap @ 0x1403A4DE4
 * Callers:
 *     CcWriteBehindPostProcess @ 0x1403ACE8C (CcWriteBehindPostProcess.c)
 *     CcInitializeCacheMapInternal @ 0x14045E3B0 (CcInitializeCacheMapInternal.c)
 *     CcUninitializeCacheMap @ 0x1404DADC0 (CcUninitializeCacheMap.c)
 *     CcDeleteSectionsForPartition @ 0x140579638 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402C2260 (ObFastDereferenceObjectDeferDelete.c)
 *     CcUnmapAndPurge @ 0x1402C3E48 (CcUnmapAndPurge.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDeleteMbcb @ 0x1403A3FF8 (CcDeleteMbcb.c)
 *     CcFreeSharedCacheMapIgnoreNull @ 0x1403A5274 (CcFreeSharedCacheMapIgnoreNull.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x1403A53D0 (CcDecrementVolumeUseCountWithDelete.c)
 *     CcGetPrivateVolumeCacheMap @ 0x1403A5480 (CcGetPrivateVolumeCacheMap.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1403A549C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x1403A5530 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcDeleteBcbs @ 0x1403A5A90 (CcDeleteBcbs.c)
 *     CcDecrementPrivateVolumeUseCount @ 0x1403A6674 (CcDecrementPrivateVolumeUseCount.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     CcPostPVCMForDeleteToPartition @ 0x1404B88A4 (CcPostPVCMForDeleteToPartition.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     FsRtlReleaseFile @ 0x14093E880 (FsRtlReleaseFile.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcDeleteSharedCacheMap(
        _QWORD *Entry,
        PKLOCK_QUEUE_HANDLE LockHandle,
        PKLOCK_QUEUE_HANDLE a3,
        int a4,
        PFILE_OBJECT FileObject)
{
  int v9; // r13d
  bool v10; // r14
  __int64 PrivateVolumeCacheMap; // rsi
  __int64 v12; // r9
  __int64 v13; // r9
  ULONG_PTR BugCheckParameter4; // r10
  _QWORD **v15; // rcx
  PVOID *v16; // rax
  char v17; // r8
  _QWORD **v18; // rdx
  PVOID *v19; // rcx
  _QWORD **v20; // rdx
  PVOID *v21; // rcx
  _QWORD **v22; // rdx
  PVOID *v23; // rcx
  void *v24; // rcx
  __int64 v25; // rax
  volatile signed __int64 *v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  _QWORD *v29; // rcx
  _QWORD *v30; // rcx
  _QWORD *v31; // rcx
  __int64 v33; // r8
  __int64 v34; // r8
  _QWORD *v35; // rdx
  __int64 v36; // rdx
  _QWORD *v37; // rcx
  unsigned __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // [rsp+B0h] [rbp+8h]

  v9 = 0;
  v10 = 0;
  v40 = Entry[67];
  PrivateVolumeCacheMap = CcGetPrivateVolumeCacheMap();
  CcReferencePartitionAndPrivateVolumeCacheMap(v12, PrivateVolumeCacheMap);
  v15 = (_QWORD **)Entry[17];
  if ( v15[1] != Entry + 17 || (v16 = (PVOID *)Entry[18], *v16 != Entry + 17) )
LABEL_3:
    __fastfail(3u);
  v17 = CcEnablePerVolumeLazyWriter;
  *v16 = v15;
  v15[1] = v16;
  if ( v17 )
  {
    v18 = (_QWORD **)Entry[71];
    if ( v18[1] != Entry + 71 )
      goto LABEL_3;
    v19 = (PVOID *)Entry[72];
    if ( *v19 != Entry + 71 )
      goto LABEL_3;
    *v19 = v18;
    v18[1] = v19;
    v10 = (*(_BYTE *)(PrivateVolumeCacheMap + 1616) & 8) != 0;
  }
  if ( (Entry[19] & 0x3000000) != 0 )
  {
    v20 = (_QWORD **)Entry[15];
    if ( v20[1] != Entry + 15 )
      goto LABEL_3;
    v21 = (PVOID *)Entry[16];
    if ( *v21 != Entry + 15 )
      goto LABEL_3;
    *v21 = v20;
    v20[1] = v21;
    if ( v17 )
    {
      v22 = (_QWORD **)Entry[73];
      if ( v22[1] != Entry + 73 )
        goto LABEL_3;
      v23 = (PVOID *)Entry[74];
      if ( *v23 != Entry + 73 )
        goto LABEL_3;
      *v23 = v22;
      v22[1] = v23;
    }
  }
  *(_QWORD *)(*(_QWORD *)((Entry[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) = BugCheckParameter4;
  *((_DWORD *)Entry + 38) |= 0x80020u;
  if ( LockHandle )
  {
    ++CcSectionDeletionSequencePhase1;
  }
  else if ( *(_BYTE *)(v13 + 1294) == (_BYTE)BugCheckParameter4 )
  {
    KeBugCheckEx(0x34u, 0x10CEuLL, 0xFFFFFFFFC0000420uLL, 0LL, BugCheckParameter4);
  }
  if ( Entry[75] )
  {
    v9 = CcDecrementPrivateVolumeUseCount();
    if ( !v9 )
    {
      v34 = *(_QWORD *)(PrivateVolumeCacheMap + 592);
      if ( *(_QWORD *)(v34 + 8) != PrivateVolumeCacheMap + 592 )
        goto LABEL_3;
      v35 = *(_QWORD **)(PrivateVolumeCacheMap + 600);
      if ( *v35 != PrivateVolumeCacheMap + 592 )
        goto LABEL_3;
      *v35 = v34;
      *(_QWORD *)(v34 + 8) = v35;
      v36 = *(_QWORD *)(PrivateVolumeCacheMap + 576);
      if ( *(_QWORD *)(v36 + 8) != PrivateVolumeCacheMap + 576 )
        goto LABEL_3;
      v37 = *(_QWORD **)(PrivateVolumeCacheMap + 584);
      if ( *v37 != PrivateVolumeCacheMap + 576 )
        goto LABEL_3;
      *v37 = v36;
      *(_QWORD *)(v36 + 8) = v37;
      if ( !v10 )
        KeSetEvent((PRKEVENT)(PrivateVolumeCacheMap + 1176), 0, 0);
    }
  }
  KeReleaseInStackQueuedSpinLock(a3);
  if ( LockHandle )
    KeReleaseInStackQueuedSpinLock(LockHandle);
  if ( (_QWORD *)Entry[2] != Entry + 2 )
    CcDeleteBcbs(Entry);
  CcUnmapAndPurge((__int64)Entry, Entry[1] >= 0x100000LL);
  if ( a4 )
  {
    FsRtlReleaseFile(FileObject);
    ObFastDereferenceObjectDeferDelete(Entry + 12, (ULONG_PTR)FileObject, 1666409283LL);
  }
  v24 = (void *)Entry[22];
  if ( v24 )
  {
    ObfDereferenceObjectWithTag(v24, 0x746C6644u);
    Entry[22] = 0LL;
  }
  if ( Entry[21] )
    CcDeleteMbcb((__int64)Entry);
  CcDecrementVolumeUseCountWithDelete(Entry[64]);
  v25 = _InterlockedExchange64(Entry + 12, 0LL);
  v26 = (volatile signed __int64 *)(v25 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v25 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v27 = v25 & 0xF;
    if ( v27 )
      _InterlockedAdd64(v26 - 6, -v27);
  }
  ObfDereferenceObjectWithTag((PVOID)v26, 0x746C6644u);
  v28 = Entry[35];
  if ( v28 )
  {
    do
    {
      v38 = v28 & 0xFFFFFFFFFFFFFFFEuLL;
      v39 = *(_QWORD *)v38;
      KeSetEvent((PRKEVENT)(v38 + 8), 0, 0);
      v28 = v39;
    }
    while ( v39 );
  }
  if ( LockHandle )
  {
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, LockHandle);
    ++CcSectionDeletionSequencePhase2;
    KeReleaseInStackQueuedSpinLock(LockHandle);
  }
  v29 = (_QWORD *)Entry[11];
  if ( v29 != Entry + 7 && v29 )
    ExFreePoolWithTag(v29, 0);
  v30 = (_QWORD *)Entry[23];
  if ( v30 && v30 != Entry + 44 )
    ExFreePoolWithTag(v30, 0);
  v31 = (_QWORD *)Entry[24];
  if ( v31 && v31 != Entry + 44 )
    ExFreePoolWithTag(v31, 0);
  CcDereferencePartitionAndPrivateVolumeCacheMap(v40, PrivateVolumeCacheMap);
  if ( PrivateVolumeCacheMap && !v9 )
  {
    DbgPrintEx(
      0x7Fu,
      2u,
      "[%04x:%04x]CcDeleteSharedCacheMap: QUEUE-DEL-PVCM SCM:%p, VCM:%p(vid:%2lx), PVCM:%p(vid:%2lx)\n",
      LODWORD(KeGetCurrentThread()[1].CycleTime),
      KeGetCurrentThread()[1].CurrentRunTime,
      Entry,
      (const void *)Entry[64],
      *(_DWORD *)(Entry[64] + 212LL),
      (const void *)PrivateVolumeCacheMap,
      *(_DWORD *)(PrivateVolumeCacheMap + 24));
    LOBYTE(v33) = v10;
    CcPostPVCMForDeleteToPartition(PrivateVolumeCacheMap, 0LL, v33);
  }
  return CcFreeSharedCacheMapIgnoreNull(Entry);
}
