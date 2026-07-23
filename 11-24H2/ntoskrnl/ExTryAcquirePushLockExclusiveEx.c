/*
 * XREFs of ExTryAcquirePushLockExclusiveEx @ 0x14031EC10
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquirePushLockExclusiveEx(
        volatile signed __int32 *BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v3; // rax

  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) != 0 )
    v3 = 0LL;
  else
    v3 = KeAbPreAcquire(BugCheckParameter2, 0LL, 1LL);
  if ( _interlockedbittestandset64(BugCheckParameter2, 0LL) )
  {
    if ( v3 )
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v3);
    return 0;
  }
  else
  {
    if ( v3 )
      *(_BYTE *)(v3 + 10) = 1;
    return 1;
  }
}
