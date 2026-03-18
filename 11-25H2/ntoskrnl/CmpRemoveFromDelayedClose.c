/*
 * XREFs of CmpRemoveFromDelayedClose @ 0x140874820
 * Callers:
 *     CmpCleanUpKCBCacheTable @ 0x140865674 (CmpCleanUpKCBCacheTable.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpCommitDiscardReplacePost @ 0x1409D8BAC (CmpCommitDiscardReplacePost.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A5691C (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x14044AE54 (ExpAcquireFastMutexContended.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall CmpRemoveFromDelayedClose(__int64 a1)
{
  __int64 *v2; // rbx
  unsigned __int8 CurrentIrql; // si
  char v4; // cl
  __int64 v5; // rax
  _BYTE *v6; // rdx
  _QWORD *v7; // rcx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

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
  v4 = *(_BYTE *)(a1 + 64);
  if ( (v4 & 2) != 0 )
  {
    v5 = a1 + 224;
    if ( (v4 & 4) != 0 )
    {
      **(_BYTE **)v5 = 1;
      *(_BYTE *)(a1 + 64) &= ~4u;
    }
    else
    {
      v6 = *(_BYTE **)v5;
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD **)(a1 + 232), *v7 != v5) )
        __fastfail(3u);
      --CmpDelayedCloseElements;
      *v7 = v6;
      *((_QWORD *)v6 + 1) = v7;
      --qword_140FD9448;
    }
    *(_QWORD *)(a1 + 232) = a1 + 224;
    *(_QWORD *)v5 = v5;
    _InterlockedOr(v8, 0);
    *(_BYTE *)(a1 + 64) &= ~2u;
  }
  KeReleaseGuardedMutex(&CmpDelayedCloseTableLock);
}
