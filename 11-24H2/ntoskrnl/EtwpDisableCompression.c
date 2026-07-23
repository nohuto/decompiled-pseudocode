/*
 * XREFs of EtwpDisableCompression @ 0x14064FB00
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x1404EC950 (EtwpDequeueFreeBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x14064F998 (EtwpDequeueBufferPendingCompression.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwpRelinquishCompressionTarget @ 0x14064FD4C (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpDisableCompression(__int64 a1, __int64 a2)
{
  char *v3; // rax
  char *v4; // rsi

  if ( *(_DWORD *)(a1 + 1444) != 1
    && _InterlockedExchange((volatile __int32 *)(a1 + 1432), 0)
    && !*(_DWORD *)(a1 + 1400)
    && KeGetEffectiveIrql(a1, a2) < 2u )
  {
    v3 = (char *)KeAbPreAcquire(a1 + 1408, 0LL);
    v4 = v3;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1408), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1408), v3, a1 + 1408);
    if ( v4 )
      v4[10] = 1;
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1408), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1408));
    KeAbPostRelease(a1 + 1408);
  }
}
