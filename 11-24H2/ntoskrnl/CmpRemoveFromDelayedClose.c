/*
 * XREFs of CmpRemoveFromDelayedClose @ 0x140874C40
 * Callers:
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140874DC4 (CmpCommitDiscardReplacePost.c)
 *     CmpCleanUpKCBCacheTable @ 0x14096478C (CmpCleanUpKCBCacheTable.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A46048 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x140441108 (ExpAcquireFastMutexContended.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall CmpRemoveFromDelayedClose(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int8 CurrentIrql; // si
  char v6; // cl
  __int64 v7; // rax
  _BYTE *v8; // rdx
  _QWORD *v9; // rcx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

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
  v6 = *(_BYTE *)(a1 + 64);
  if ( (v6 & 2) != 0 )
  {
    v7 = a1 + 224;
    if ( (v6 & 4) != 0 )
    {
      **(_BYTE **)v7 = 1;
      *(_BYTE *)(a1 + 64) &= ~4u;
    }
    else
    {
      v8 = *(_BYTE **)v7;
      if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || (v9 = *(_QWORD **)(a1 + 232), *v9 != v7) )
        __fastfail(3u);
      --CmpDelayedCloseElements;
      *v9 = v8;
      *((_QWORD *)v8 + 1) = v9;
      --qword_140FDA428;
    }
    *(_QWORD *)(a1 + 232) = a1 + 224;
    *(_QWORD *)v7 = v7;
    _InterlockedOr(v10, 0);
    *(_BYTE *)(a1 + 64) &= ~2u;
  }
  KeReleaseGuardedMutex(&CmpDelayedCloseTableLock);
}
