/*
 * XREFs of FsRtlPrivateCheckWaitingLocks @ 0x14024ACAC
 * Callers:
 *     FsRtlFastUnlockSingleExclusive @ 0x1402498C0 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingle @ 0x140249B60 (FsRtlFastUnlockSingle.c)
 *     FsRtlFastUnlockSingleShared @ 0x14024A1C0 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14024D62C (FsRtlPrivateFastUnlockAll.c)
 * Callees:
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x140247B34 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateInsertLock @ 0x140248AA0 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x140248EE0 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     IoGetRequestorProcess @ 0x1403DBA00 (IoGetRequestorProcess.c)
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     FsRtlPrivateRemoveLock @ 0x1404D8BCC (FsRtlPrivateRemoveLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rcx
  signed int v16; // ebx
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+30h] [rbp-20h]
  __int128 v19; // [rsp+40h] [rbp-10h]

  v3 = (_QWORD *)a2[3];
  v4 = a2 + 3;
  while ( v3 )
  {
    v6 = v3[3];
    v17 = 0LL;
    *(_OWORD *)Object = 0LL;
    v19 = 0LL;
    v7 = *(_QWORD *)(v6 + 184);
    *(_QWORD *)&v17 = *(_QWORD *)(v7 + 24);
    *((_QWORD *)&v17 + 1) = **(_QWORD **)(v7 + 8);
    *((_QWORD *)&v19 + 1) = *((_QWORD *)&v17 + 1) + v17 - 1;
    Object[1] = *(PVOID *)(v7 + 48);
    *(_QWORD *)&v19 = IoGetRequestorProcess((PIRP)v6);
    HIDWORD(Object[0]) = *(_DWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v7 + 2) & 2) != 0 )
    {
      LOBYTE(Object[0]) = 1;
      v8 = FsRtlPrivateCheckForExclusiveLockAccess((__int64)a2, (_RTL_SPLAY_LINKS **)&v17);
    }
    else
    {
      LOBYTE(Object[0]) = 0;
      v8 = FsRtlPrivateCheckForSharedLockAccess((__int64)a2, (__int64)&v17);
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
      inserted = FsRtlPrivateInsertLock(a1, *(_QWORD *)(v7 + 48), &v17);
      *v4 = *v3;
      if ( v3 == (_QWORD *)a2[4] )
        a2[4] = (KSPIN_LOCK)v4;
      KeReleaseSpinLock(a2, a3);
      ObfReferenceObjectWithTag(Object[1], 0x746C6644u);
      v14 = a1[1];
      v15 = v3[2];
      v16 = inserted == 0 ? 0xC000009A : 0;
      if ( v14 )
      {
        if ( Object[1] )
          *((_QWORD *)Object[1] + 15) = 0LL;
        *(_DWORD *)(v6 + 48) = v16;
        v16 = guard_dispatch_icall_no_overrides(v15, v6, v14, v13);
      }
      else
      {
        *(_DWORD *)(v6 + 48) = v16;
        IofCompleteRequest((PIRP)v6, 1);
      }
      if ( inserted )
      {
        if ( v16 < 0 )
          FsRtlPrivateRemoveLock(a1, &v17, 0LL);
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
