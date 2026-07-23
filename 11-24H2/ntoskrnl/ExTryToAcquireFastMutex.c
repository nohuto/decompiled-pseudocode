/*
 * XREFs of ExTryToAcquireFastMutex @ 0x14043D8E0
 * Callers:
 *     FsRtlTryToAcquireHeaderMutex @ 0x14043D880 (FsRtlTryToAcquireHeaderMutex.c)
 *     KeTryToAcquireGuardedMutex @ 0x14043D8C0 (KeTryToAcquireGuardedMutex.c)
 *     DifExTryToAcquireFastMutexWrapper @ 0x14061F800 (DifExTryToAcquireFastMutexWrapper.c)
 *     DifKeTryToAcquireGuardedMutexWrapper @ 0x14062F4F0 (DifKeTryToAcquireGuardedMutexWrapper.c)
 *     RawScanDeletedList @ 0x1408ACE04 (RawScanDeletedList.c)
 *     PopFlushVolumeBlameResolverCallback @ 0x140B613B0 (PopFlushVolumeBlameResolverCallback.c)
 *     CreateMiniNtBootKey @ 0x140C0C220 (CreateMiniNtBootKey.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

BOOLEAN __stdcall ExTryToAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  unsigned __int8 CurrentIrql; // si
  BOOLEAN result; // al

  v4 = KeAbPreAcquire((__int64)FastMutex, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v2) = 1;
    LOBYTE(v3) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v3, v2);
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
