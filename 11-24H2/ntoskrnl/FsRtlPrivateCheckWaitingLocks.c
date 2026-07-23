/*
 * XREFs of FsRtlPrivateCheckWaitingLocks @ 0x1402E4EEC
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x14027DC3C (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1402E3B00 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingle @ 0x1402E3DA0 (FsRtlFastUnlockSingle.c)
 *     FsRtlFastUnlockSingleShared @ 0x1402E4400 (FsRtlFastUnlockSingleShared.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1402E1F08 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateInsertLock @ 0x1402E2CE0 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1402E3120 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     IoGetRequestorProcess @ 0x1403CCCD0 (IoGetRequestorProcess.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     FsRtlPrivateRemoveLock @ 0x1404D201C (FsRtlPrivateRemoveLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall FsRtlPrivateCheckWaitingLocks(_QWORD *a1, KSPIN_LOCK *a2, KIRQL a3)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi
  __int64 v6; // r15
  __int64 v7; // r13
  char v8; // al
  char v9; // r12
  char v10; // bl
  char v11; // cl
  char inserted; // r12
  __int64 v13; // rcx
  signed int v14; // ebx
  __int128 v15; // [rsp+20h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+30h] [rbp-20h]
  __int128 v17; // [rsp+40h] [rbp-10h]

  v3 = (_QWORD *)a2[3];
  v4 = a2 + 3;
  while ( v3 )
  {
    v6 = v3[3];
    v15 = 0LL;
    *(_OWORD *)Object = 0LL;
    v17 = 0LL;
    v7 = *(_QWORD *)(v6 + 184);
    *(_QWORD *)&v15 = *(_QWORD *)(v7 + 24);
    *((_QWORD *)&v15 + 1) = **(_QWORD **)(v7 + 8);
    *((_QWORD *)&v17 + 1) = *((_QWORD *)&v15 + 1) + v15 - 1;
    Object[1] = *(PVOID *)(v7 + 48);
    *(_QWORD *)&v17 = IoGetRequestorProcess((PIRP)v6);
    HIDWORD(Object[0]) = *(_DWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v7 + 2) & 2) != 0 )
    {
      LOBYTE(Object[0]) = 1;
      v8 = FsRtlPrivateCheckForExclusiveLockAccess((__int64)a2, (_RTL_SPLAY_LINKS **)&v15);
    }
    else
    {
      LOBYTE(Object[0]) = 0;
      v8 = FsRtlPrivateCheckForSharedLockAccess((__int64)a2, (__int64)&v15);
    }
    v9 = v8;
    if ( !v8 )
      goto LABEL_9;
    *(_BYTE *)(v6 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v6 + 104), 0LL);
    v10 = *(_BYTE *)(v6 + 68);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v6 + 69));
    v11 = 0;
    if ( !v10 )
      v11 = v9;
    if ( v11 )
    {
      inserted = FsRtlPrivateInsertLock(a1, *(_QWORD *)(v7 + 48), &v15);
      *v4 = *v3;
      if ( v3 == (_QWORD *)a2[4] )
        a2[4] = (KSPIN_LOCK)v4;
      KeReleaseSpinLock(a2, a3);
      ObfReferenceObjectWithTag(Object[1], 0x746C6644u);
      v13 = v3[2];
      v14 = inserted == 0 ? 0xC000009A : 0;
      if ( a1[1] )
      {
        if ( Object[1] )
          *((_QWORD *)Object[1] + 15) = 0LL;
        *(_DWORD *)(v6 + 48) = v14;
        v14 = guard_dispatch_icall_no_overrides(v13, v6);
      }
      else
      {
        *(_DWORD *)(v6 + 48) = v14;
        IofCompleteRequest((PIRP)v6, 1);
      }
      if ( inserted )
      {
        if ( v14 < 0 )
          FsRtlPrivateRemoveLock(a1, &v15, 0LL);
      }
      ObfDereferenceObjectWithTag(Object[1], 0x746C6644u);
      a3 = KeAcquireSpinLockRaiseToDpc(a2);
      v4 = a2 + 3;
      ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v3);
    }
    else
    {
LABEL_9:
      v4 = v3;
    }
    v3 = (_QWORD *)*v4;
  }
}
