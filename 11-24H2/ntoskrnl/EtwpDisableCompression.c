/*
 * XREFs of EtwpDisableCompression @ 0x140651400
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x1404EF438 (EtwpDequeueFreeBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140651298 (EtwpDequeueBufferPendingCompression.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EtwpRelinquishCompressionTarget @ 0x14065164C (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpDisableCompression(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rsi

  if ( *(_DWORD *)(a1 + 1444) != 1
    && _InterlockedExchange((volatile __int32 *)(a1 + 1432), 0)
    && !*(_DWORD *)(a1 + 1400)
    && KeGetEffectiveIrql() < 2u )
  {
    v2 = KeAbPreAcquire(a1 + 1408, 0LL);
    v3 = v2;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1408), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1408), (__int64)v2, a1 + 1408);
    if ( v3 )
      *((_BYTE *)v3 + 10) = 1;
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1408), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1408));
    KeAbPostRelease(a1 + 1408);
  }
}
