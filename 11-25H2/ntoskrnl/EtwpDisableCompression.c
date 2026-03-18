/*
 * XREFs of EtwpDisableCompression @ 0x140645400
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x1403E4D34 (EtwpDequeueFreeBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140645298 (EtwpDequeueBufferPendingCompression.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     EtwpRelinquishCompressionTarget @ 0x14064564C (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpDisableCompression(__int64 a1)
{
  __int64 *v2; // rax
  __int64 *v3; // rsi

  if ( *(_DWORD *)(a1 + 1444) != 1
    && _InterlockedExchange((volatile __int32 *)(a1 + 1432), 0)
    && !*(_DWORD *)(a1 + 1400)
    && ObGetCurrentIrql() < 2u )
  {
    v2 = KeAbPreAcquire(a1 + 1408, 0LL);
    v3 = v2;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1408), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1408), v2, a1 + 1408);
    if ( v3 )
      *((_BYTE *)v3 + 10) = 1;
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1408), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1408));
    KeAbPostRelease(a1 + 1408);
  }
}
