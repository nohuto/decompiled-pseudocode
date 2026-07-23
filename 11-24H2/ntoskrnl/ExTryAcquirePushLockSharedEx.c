/*
 * XREFs of ExTryAcquirePushLockSharedEx @ 0x14031DB90
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1404704C4 (ExfTryAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquirePushLockSharedEx(volatile signed __int64 *BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  unsigned int v2; // edi
  ULONG_PTR v4; // rbx

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) != 0 )
    v4 = 0LL;
  else
    v4 = KeAbPreAcquire(BugCheckParameter2, 0LL, 1LL);
  if ( !_InterlockedCompareExchange64(BugCheckParameter2, 17LL, 0LL)
    || (unsigned __int8)ExfTryAcquirePushLockSharedEx(BugCheckParameter2, v2) )
  {
    if ( v4 )
      *(_BYTE *)(v4 + 10) = 1;
    return 1;
  }
  else
  {
    if ( v4 )
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v4);
    return 0;
  }
}
