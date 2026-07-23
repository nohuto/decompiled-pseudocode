/*
 * XREFs of ExTryAcquireCacheAwarePushLockSharedEx @ 0x140654750
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1404704C4 (ExfTryAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall ExTryAcquireCacheAwarePushLockSharedEx(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  volatile signed __int64 *v3; // rbp
  _QWORD *v4; // rdi
  bool v5; // bl

  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v3 = *(volatile signed __int64 **)(BugCheckParameter2 + 8LL * (KeGetPcr()->Prcb.Number & 0x1F));
  if ( (BugCheckParameter1 & 2) != 0 )
    v4 = 0LL;
  else
    v4 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  v5 = !_InterlockedCompareExchange64(v3, 17LL, 0LL) || ExfTryAcquirePushLockSharedEx((signed __int64 *)v3, 2);
  if ( v4 )
  {
    if ( v5 )
      *((_BYTE *)v4 + 10) = 1;
    else
      KeAbPostReleaseEx(BugCheckParameter2, (ULONG_PTR)v4);
  }
  return (unsigned __int64)v3 & -(__int64)v5;
}
