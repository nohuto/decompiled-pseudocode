/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x140845AD0
 * Callers:
 *     CmpTransEnlistUowInKcb @ 0x140484100 (CmpTransEnlistUowInKcb.c)
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpGetVirtualStoreRoot @ 0x1407DBA94 (CmpGetVirtualStoreRoot.c)
 *     CmpPrepareDiscardReplacePost @ 0x1407E1340 (CmpPrepareDiscardReplacePost.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140843700 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1408443F0 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140844830 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCreateKeyControlBlock @ 0x1408717C0 (CmpCreateKeyControlBlock.c)
 *     CmpFindSubKeyByNumberEx @ 0x14087D660 (CmpFindSubKeyByNumberEx.c)
 *     CmpCreateLayerLink @ 0x140A003B8 (CmpCreateLayerLink.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A1FC64 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1FE28 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpResolveHiveLoadConflict @ 0x140A86DC4 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1404489B8 (ExpAcquireFastMutexContended.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall CmpReferenceKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v2; // rdi
  __int64 v3; // r8
  unsigned __int8 CurrentIrql; // si
  char v5; // al
  ULONG_PTR v6; // rcx
  _BYTE *v7; // rdx
  _QWORD *v8; // rax
  signed __int32 v9[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
    KeBugCheckEx(0x51u, 0x20uLL, BugCheckParameter2, 0LL, 0LL);
  if ( !_InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2) )
    KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 64) & 2) != 0 )
  {
    v2 = KeAbPreAcquire((__int64)&CmpDelayedCloseTableLock, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
      ExpAcquireFastMutexContended((__int64)&CmpDelayedCloseTableLock, (__int64)v2, v3);
    if ( v2 )
      *((_BYTE *)v2 + 10) = 1;
    CmpDelayedCloseTableLock.Owner = KeGetCurrentThread();
    CmpDelayedCloseTableLock.OldIrql = CurrentIrql;
    v5 = *(_BYTE *)(BugCheckParameter2 + 64);
    if ( (v5 & 2) != 0 )
    {
      v6 = BugCheckParameter2 + 224;
      if ( (v5 & 4) != 0 )
      {
        **(_BYTE **)v6 = 1;
        *(_BYTE *)(BugCheckParameter2 + 64) &= ~4u;
      }
      else
      {
        v7 = *(_BYTE **)v6;
        if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = *(_QWORD **)(BugCheckParameter2 + 232), *v8 != v6) )
          __fastfail(3u);
        --CmpDelayedCloseElements;
        *v8 = v7;
        *((_QWORD *)v7 + 1) = v8;
        --qword_140FD9418;
      }
      *(_QWORD *)(BugCheckParameter2 + 232) = BugCheckParameter2 + 224;
      *(_QWORD *)v6 = v6;
      _InterlockedOr(v9, 0);
      *(_BYTE *)(BugCheckParameter2 + 64) &= ~2u;
    }
    KeReleaseGuardedMutex(&CmpDelayedCloseTableLock);
  }
}
