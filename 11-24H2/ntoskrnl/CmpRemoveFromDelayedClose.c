/*
 * XREFs of CmpRemoveFromDelayedClose @ 0x140870910
 * Callers:
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140870A94 (CmpCommitDiscardReplacePost.c)
 *     CmpCleanUpKCBCacheTable @ 0x14097BF7C (CmpCleanUpKCBCacheTable.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A4F298 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1404489B8 (ExpAcquireFastMutexContended.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall CmpRemoveFromDelayedClose(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // r8
  unsigned __int8 CurrentIrql; // si
  char v5; // cl
  __int64 v6; // rax
  _BYTE *v7; // rdx
  _QWORD *v8; // rcx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

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
  v5 = *(_BYTE *)(a1 + 64);
  if ( (v5 & 2) != 0 )
  {
    v6 = a1 + 224;
    if ( (v5 & 4) != 0 )
    {
      **(_BYTE **)v6 = 1;
      *(_BYTE *)(a1 + 64) &= ~4u;
    }
    else
    {
      v7 = *(_BYTE **)v6;
      if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = *(_QWORD **)(a1 + 232), *v8 != v6) )
        __fastfail(3u);
      --CmpDelayedCloseElements;
      *v8 = v7;
      *((_QWORD *)v7 + 1) = v8;
      --qword_140FD9418;
    }
    *(_QWORD *)(a1 + 232) = a1 + 224;
    *(_QWORD *)v6 = v6;
    _InterlockedOr(v9, 0);
    *(_BYTE *)(a1 + 64) &= ~2u;
  }
  KeReleaseGuardedMutex(&CmpDelayedCloseTableLock);
}
