/*
 * XREFs of ExTryToAcquireFastMutex @ 0x140447D40
 * Callers:
 *     FsRtlTryToAcquireHeaderMutex @ 0x140447CE0 (FsRtlTryToAcquireHeaderMutex.c)
 *     KeTryToAcquireGuardedMutex @ 0x140447D20 (KeTryToAcquireGuardedMutex.c)
 *     DifExTryToAcquireFastMutexWrapper @ 0x140615280 (DifExTryToAcquireFastMutexWrapper.c)
 *     DifKeTryToAcquireGuardedMutexWrapper @ 0x140624F70 (DifKeTryToAcquireGuardedMutexWrapper.c)
 *     RawScanDeletedList @ 0x14099F1A0 (RawScanDeletedList.c)
 *     PopFlushVolumeBlameResolverCallback @ 0x140B4F1F0 (PopFlushVolumeBlameResolverCallback.c)
 *     CreateMiniNtBootKey @ 0x140BF9220 (CreateMiniNtBootKey.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

BOOLEAN __stdcall ExTryToAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *v4; // rdi
  unsigned __int8 CurrentIrql; // si
  BOOLEAN result; // al

  v4 = KeAbPreAcquire((__int64)FastMutex, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v3);
  }
  if ( _interlockedbittestandreset(&FastMutex->Count, 0) )
  {
    if ( v4 )
      *((_BYTE *)v4 + 10) = 1;
    result = 1;
    FastMutex->Owner = KeGetCurrentThread();
    FastMutex->OldIrql = CurrentIrql;
  }
  else
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v2) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
    }
    __writecr8(CurrentIrql);
    if ( v4 )
      KeAbPostReleaseEx((ULONG_PTR)FastMutex, (ULONG_PTR)v4);
    _mm_pause();
    return 0;
  }
  return result;
}
