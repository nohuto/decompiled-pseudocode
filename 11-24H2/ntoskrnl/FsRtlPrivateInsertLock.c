/*
 * XREFs of FsRtlPrivateInsertLock @ 0x140248AA0
 * Callers:
 *     FsRtlPrivateCheckWaitingLocks @ 0x14024ACAC (FsRtlPrivateCheckWaitingLocks.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140248B90 (ExAllocateFromNPagedLookasideList.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140248CD8 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x1402490B4 (FsRtlPrivateInsertExclusiveLock.c)
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 */

char __fastcall FsRtlPrivateInsertLock(_QWORD *a1, __int64 a2, _OWORD *a3)
{
  char *v6; // rax
  void *v7; // r14
  char *v8; // rbp
  char *v10; // rax

  if ( *((_BYTE *)a3 + 16) )
  {
    v10 = (char *)ExAllocateFromNPagedLookasideList(&FsRtlExclusiveLockLookasideList);
    if ( v10 )
    {
      v8 = v10 + 24;
      *(_OWORD *)(v10 + 24) = *a3;
      *(_OWORD *)(v10 + 40) = a3[1];
      *(_OWORD *)(v10 + 56) = a3[2];
      FsRtlPrivateInsertExclusiveLock(a1 + 3, v10);
      goto LABEL_4;
    }
    return 0;
  }
  v6 = (char *)ExAllocateFromNPagedLookasideList(&FsRtlSharedLockLookasideList);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = v6 + 8;
  *(_OWORD *)(v6 + 8) = *a3;
  *(_OWORD *)(v6 + 24) = a3[1];
  *(_OWORD *)(v6 + 40) = a3[2];
  if ( !(unsigned __int8)FsRtlPrivateInsertSharedLock(a1 + 3, v6) )
  {
    ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v7);
    return 0;
  }
LABEL_4:
  *(_QWORD *)(a2 + 120) = v8;
  if ( *(_QWORD *)a3 < *a1 )
    *a1 = *(_QWORD *)a3;
  return 1;
}
