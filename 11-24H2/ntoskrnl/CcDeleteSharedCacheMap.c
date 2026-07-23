/*
 * XREFs of CcDeleteSharedCacheMap @ 0x1402E5B98
 * Callers:
 *     CcWriteBehindPostProcess @ 0x14027A62C (CcWriteBehindPostProcess.c)
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 *     CcUninitializeCacheMap @ 0x1404D3ED0 (CcUninitializeCacheMap.c)
 *     CcDeleteSectionsForPartition @ 0x140579DD8 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     CcUnmapAndPurge @ 0x140207728 (CcUnmapAndPurge.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402090F0 (ObFastDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDecrementPrivateVolumeUseCount @ 0x1402639F8 (CcDecrementPrivateVolumeUseCount.c)
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     CcDeleteMbcb @ 0x1402E5278 (CcDeleteMbcb.c)
 *     CcFreeSharedCacheMapIgnoreNull @ 0x1402E6020 (CcFreeSharedCacheMapIgnoreNull.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x1402E6180 (CcDecrementVolumeUseCountWithDelete.c)
 *     CcGetPrivateVolumeCacheMap @ 0x1402E6230 (CcGetPrivateVolumeCacheMap.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402E624C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcReferencePartitionAndPrivateVolumeCacheMap @ 0x1402E62E0 (CcReferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDeleteBcbs @ 0x1404B21D4 (CcDeleteBcbs.c)
 *     CcPostPVCMForDeleteToPartition @ 0x1404B2A84 (CcPostPVCMForDeleteToPartition.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     FsRtlReleaseFile @ 0x14098D3F0 (FsRtlReleaseFile.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v24; // rcx
  void *v25; // rcx
  __int64 v26; // rax
  volatile signed __int64 *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  _QWORD *v30; // rcx
  _QWORD *v31; // rcx
  _QWORD *v32; // rcx
  __int64 v34; // r8
  __int64 v35; // r8
  _QWORD *v36; // rdx
  __int64 v37; // rdx
  _QWORD *v38; // rcx
  unsigned __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // [rsp+B0h] [rbp+8h]

  v9 = 0;
  v10 = 0;
  v41 = Entry[67];
  PrivateVolumeCacheMap = CcGetPrivateVolumeCacheMap(Entry);
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
  v24 = Entry[75];
  if ( v24 )
  {
    v9 = CcDecrementPrivateVolumeUseCount(v24);
    if ( !v9 )
    {
      v35 = *(_QWORD *)(PrivateVolumeCacheMap + 592);
      if ( *(_QWORD *)(v35 + 8) != PrivateVolumeCacheMap + 592 )
        goto LABEL_3;
      v36 = *(_QWORD **)(PrivateVolumeCacheMap + 600);
      if ( *v36 != PrivateVolumeCacheMap + 592 )
        goto LABEL_3;
      *v36 = v35;
      *(_QWORD *)(v35 + 8) = v36;
      v37 = *(_QWORD *)(PrivateVolumeCacheMap + 576);
      if ( *(_QWORD *)(v37 + 8) != PrivateVolumeCacheMap + 576 )
        goto LABEL_3;
      v38 = *(_QWORD **)(PrivateVolumeCacheMap + 584);
      if ( *v38 != PrivateVolumeCacheMap + 576 )
        goto LABEL_3;
      *v38 = v37;
      *(_QWORD *)(v37 + 8) = v38;
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
    ObFastDereferenceObjectDeferDelete(Entry + 12, (ULONG_PTR)FileObject);
  }
  v25 = (void *)Entry[22];
  if ( v25 )
  {
    ObfDereferenceObjectWithTag(v25, 0x746C6644u);
    Entry[22] = 0LL;
  }
  if ( Entry[21] )
    CcDeleteMbcb((__int64)Entry);
  CcDecrementVolumeUseCountWithDelete(Entry[64]);
  v26 = _InterlockedExchange64(Entry + 12, 0LL);
  v27 = (volatile signed __int64 *)(v26 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v26 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v28 = v26 & 0xF;
    if ( v28 )
      _InterlockedAdd64(v27 - 6, -v28);
  }
  ObfDereferenceObjectWithTag((PVOID)v27, 0x746C6644u);
  v29 = Entry[35];
  if ( v29 )
  {
    do
    {
      v39 = v29 & 0xFFFFFFFFFFFFFFFEuLL;
      v40 = *(_QWORD *)v39;
      KeSetEvent((PRKEVENT)(v39 + 8), 0, 0);
      v29 = v40;
    }
    while ( v40 );
  }
  if ( LockHandle )
  {
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, LockHandle);
    ++CcSectionDeletionSequencePhase2;
    KeReleaseInStackQueuedSpinLock(LockHandle);
  }
  v30 = (_QWORD *)Entry[11];
  if ( v30 != Entry + 7 && v30 )
    ExFreePoolWithTag(v30, 0);
  v31 = (_QWORD *)Entry[23];
  if ( v31 && v31 != Entry + 44 )
    ExFreePoolWithTag(v31, 0);
  v32 = (_QWORD *)Entry[24];
  if ( v32 && v32 != Entry + 44 )
    ExFreePoolWithTag(v32, 0);
  CcDereferencePartitionAndPrivateVolumeCacheMap(v41, PrivateVolumeCacheMap);
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
    LOBYTE(v34) = v10;
    CcPostPVCMForDeleteToPartition(PrivateVolumeCacheMap, 0LL, v34);
  }
  return CcFreeSharedCacheMapIgnoreNull(Entry);
}
