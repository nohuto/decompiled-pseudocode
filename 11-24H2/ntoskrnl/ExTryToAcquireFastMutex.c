/*
 * XREFs of ExTryToAcquireFastMutex @ 0x140445730
 * Callers:
 *     FsRtlTryToAcquireHeaderMutex @ 0x1404456D0 (FsRtlTryToAcquireHeaderMutex.c)
 *     KeTryToAcquireGuardedMutex @ 0x140445710 (KeTryToAcquireGuardedMutex.c)
 *     DifExTryToAcquireFastMutexWrapper @ 0x140621240 (DifExTryToAcquireFastMutexWrapper.c)
 *     DifKeTryToAcquireGuardedMutexWrapper @ 0x140630F30 (DifKeTryToAcquireGuardedMutexWrapper.c)
 *     RawScanDeletedList @ 0x1409A4080 (RawScanDeletedList.c)
 *     PopFlushVolumeBlameResolverCallback @ 0x140B5F330 (PopFlushVolumeBlameResolverCallback.c)
 *     CreateMiniNtBootKey @ 0x140C0A220 (CreateMiniNtBootKey.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
