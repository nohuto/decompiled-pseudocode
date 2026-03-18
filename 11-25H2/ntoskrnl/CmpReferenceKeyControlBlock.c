/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x140849E30
 * Callers:
 *     CmpTransEnlistUowInKcb @ 0x1404838EC (CmpTransEnlistUowInKcb.c)
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpGetVirtualStoreRoot @ 0x1407CC2D4 (CmpGetVirtualStoreRoot.c)
 *     CmpPrepareDiscardReplacePost @ 0x1407D1A60 (CmpPrepareDiscardReplacePost.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1408471B0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1408489A0 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140848B80 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCreateKeyControlBlock @ 0x140875390 (CmpCreateKeyControlBlock.c)
 *     CmpFindSubKeyByNumberEx @ 0x14087D350 (CmpFindSubKeyByNumberEx.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1409DAED8 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1409DB09C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpCreateLayerLink @ 0x140A01B9C (CmpCreateLayerLink.c)
 *     CmpResolveHiveLoadConflict @ 0x140A82524 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x14044AE54 (ExpAcquireFastMutexContended.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall CmpReferenceKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  __int64 *v2; // rdi
  unsigned __int8 CurrentIrql; // si
  char v4; // al
  ULONG_PTR v5; // rcx
  _BYTE *v6; // rdx
  _QWORD *v7; // rax
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF

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
      ExpAcquireFastMutexContended((__int64)&CmpDelayedCloseTableLock, v2);
    if ( v2 )
      *((_BYTE *)v2 + 10) = 1;
    CmpDelayedCloseTableLock.Owner = KeGetCurrentThread();
    CmpDelayedCloseTableLock.OldIrql = CurrentIrql;
    v4 = *(_BYTE *)(BugCheckParameter2 + 64);
    if ( (v4 & 2) != 0 )
    {
      v5 = BugCheckParameter2 + 224;
      if ( (v4 & 4) != 0 )
      {
        **(_BYTE **)v5 = 1;
        *(_BYTE *)(BugCheckParameter2 + 64) &= ~4u;
      }
      else
      {
        v6 = *(_BYTE **)v5;
        if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD **)(BugCheckParameter2 + 232), *v7 != v5) )
          __fastfail(3u);
        --CmpDelayedCloseElements;
        *v7 = v6;
        *((_QWORD *)v6 + 1) = v7;
        --qword_140FD9448;
      }
      *(_QWORD *)(BugCheckParameter2 + 232) = BugCheckParameter2 + 224;
      *(_QWORD *)v5 = v5;
      _InterlockedOr(v8, 0);
      *(_BYTE *)(BugCheckParameter2 + 64) &= ~2u;
    }
    KeReleaseGuardedMutex(&CmpDelayedCloseTableLock);
  }
}
