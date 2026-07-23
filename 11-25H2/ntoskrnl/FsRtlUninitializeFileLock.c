/*
 * XREFs of FsRtlUninitializeFileLock @ 0x1403D22C0
 * Callers:
 *     FsRtlFreeFileLock @ 0x1403D2290 (FsRtlFreeFileLock.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     RtlDeleteNoSplay @ 0x1403756F0 (RtlDeleteNoSplay.c)
 *     FsRtlCompleteLockIrpReal @ 0x14048BE20 (FsRtlCompleteLockIrpReal.c)
 */

void __stdcall FsRtlUninitializeFileLock(PFILE_LOCK FileLock)
{
  char *LockInformation; // rbx
  KIRQL v3; // r12
  _RTL_SPLAY_LINKS **v4; // r14
  _RTL_SPLAY_LINKS *v5; // rdi
  PRTL_SPLAY_LINKS *v6; // rsi
  PRTL_SPLAY_LINKS v7; // rdi
  _QWORD *i; // rdi
  _RTL_SPLAY_LINKS *v9; // rsi
  _RTL_SPLAY_LINKS *Parent; // rdx
  __int64 v11; // rsi
  KIRQL v12; // dl
  char v13; // [rsp+60h] [rbp+8h] BYREF

  LockInformation = (char *)FileLock->LockInformation;
  if ( LockInformation )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
    KxAcquireSpinLock((PKSPIN_LOCK)LockInformation + 3);
    v4 = (_RTL_SPLAY_LINKS **)(LockInformation + 32);
    while ( 1 )
    {
      v5 = *v4;
      if ( !*v4 )
        break;
      v9 = v5 - 1;
      while ( 1 )
      {
        Parent = v9->Parent;
        if ( !v9->Parent )
          break;
        v9->Parent = Parent->Parent;
        ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlSharedLockLookasideList, Parent);
      }
      RtlDeleteNoSplay(v5, (PRTL_SPLAY_LINKS *)LockInformation + 4);
      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlLockTreeNodeLookasideList, &v5[-1]);
    }
    v6 = (PRTL_SPLAY_LINKS *)(LockInformation + 40);
    while ( 1 )
    {
      v7 = *v6;
      if ( !*v6 )
        break;
      RtlDeleteNoSplay(*v6, (PRTL_SPLAY_LINKS *)LockInformation + 5);
      ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v7);
    }
    for ( i = (_QWORD *)*((_QWORD *)LockInformation + 6); i; i = (_QWORD *)*((_QWORD *)LockInformation + 6) )
    {
      *((_QWORD *)LockInformation + 6) = *i;
      v11 = i[3];
      KxReleaseSpinLock((volatile signed __int64 *)LockInformation + 3);
      *(_BYTE *)(v11 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v11 + 104), 0LL);
      v12 = *(_BYTE *)(v11 + 69);
      if ( *(_BYTE *)(v11 + 68) )
      {
        KeReleaseQueuedSpinLock(7uLL, v12);
        *i = FsRtlFileLockCancelCollideList;
        FsRtlFileLockCancelCollideList = (__int64)i;
      }
      else
      {
        KeReleaseQueuedSpinLock(7uLL, v12);
        KeReleaseSpinLock(&FsRtlFileLockCancelCollideLock, v3);
        *(_QWORD *)(v11 + 56) = 0LL;
        FsRtlCompleteLockIrpReal(*((_QWORD *)LockInformation + 1), i[2], v11, 3221225598LL, &v13, 0LL);
        ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, i);
        v3 = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
      }
      KxAcquireSpinLock((PKSPIN_LOCK)LockInformation + 3);
    }
    KxReleaseSpinLock((volatile signed __int64 *)LockInformation + 3);
    KeReleaseSpinLock(&FsRtlFileLockCancelCollideLock, v3);
    ExFreeToNPagedLookasideList(&FsRtlLockInfoLookasideList, LockInformation);
    FileLock->LockInformation = 0LL;
  }
}
