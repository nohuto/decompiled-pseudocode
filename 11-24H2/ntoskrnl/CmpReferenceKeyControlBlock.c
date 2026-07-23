/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x140841D90
 * Callers:
 *     CmpTransEnlistUowInKcb @ 0x14047F6A0 (CmpTransEnlistUowInKcb.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpGetVirtualStoreRoot @ 0x1407DBFE4 (CmpGetVirtualStoreRoot.c)
 *     CmpPrepareDiscardReplacePost @ 0x1407E1890 (CmpPrepareDiscardReplacePost.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14083F9C0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1408406B0 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140840AF0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 *     CmpFindSubKeyByNumberEx @ 0x140881510 (CmpFindSubKeyByNumberEx.c)
 *     CmpCreateLayerLink @ 0x1409FD390 (CmpCreateLayerLink.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A14D64 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A14F28 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpResolveHiveLoadConflict @ 0x140A8189C (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x140441108 (ExpAcquireFastMutexContended.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall CmpReferenceKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v2; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int8 CurrentIrql; // si
  char v6; // al
  ULONG_PTR v7; // rcx
  _BYTE *v8; // rdx
  _QWORD *v9; // rax
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF

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
      ExpAcquireFastMutexContended((__int64)&CmpDelayedCloseTableLock, (__int64)v2, v3, v4);
    if ( v2 )
      *((_BYTE *)v2 + 10) = 1;
    CmpDelayedCloseTableLock.Owner = KeGetCurrentThread();
    CmpDelayedCloseTableLock.OldIrql = CurrentIrql;
    v6 = *(_BYTE *)(BugCheckParameter2 + 64);
    if ( (v6 & 2) != 0 )
    {
      v7 = BugCheckParameter2 + 224;
      if ( (v6 & 4) != 0 )
      {
        **(_BYTE **)v7 = 1;
        *(_BYTE *)(BugCheckParameter2 + 64) &= ~4u;
      }
      else
      {
        v8 = *(_BYTE **)v7;
        if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || (v9 = *(_QWORD **)(BugCheckParameter2 + 232), *v9 != v7) )
          __fastfail(3u);
        --CmpDelayedCloseElements;
        *v9 = v8;
        *((_QWORD *)v8 + 1) = v9;
        --qword_140FDA428;
      }
      *(_QWORD *)(BugCheckParameter2 + 232) = BugCheckParameter2 + 224;
      *(_QWORD *)v7 = v7;
      _InterlockedOr(v10, 0);
      *(_BYTE *)(BugCheckParameter2 + 64) &= ~2u;
    }
    KeReleaseGuardedMutex(&CmpDelayedCloseTableLock);
  }
}
