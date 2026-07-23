/*
 * XREFs of ExTryAcquireAutoExpandPushLockShared @ 0x140470270
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x140470394 (ExpTryAcquireFannedOutPushLockShared.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1404704C4 (ExfTryAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ExTryAcquireAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  _QWORD *v2; // rbp
  unsigned int v3; // esi
  ULONG_PTR v4; // rbx
  int v6; // r14d
  int v7; // ecx
  unsigned int v9; // esi

  v2 = 0LL;
  v3 = BugCheckParameter1;
  v4 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v6 = BugCheckParameter1 & 2;
  if ( (BugCheckParameter1 & 2) == 0 )
    v2 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  v7 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (v7 & 1) != 0 )
  {
    v4 = ExpTryAcquireFannedOutPushLockShared(v7 & 0xFFFFFFF8, v3);
  }
  else
  {
    v9 = v3 | 2;
    if ( (v9 & 0xFFFFFFF8) != 0 )
      KeBugCheckEx(0x152u, v9, BugCheckParameter2, 0LL, 0LL);
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL)
      || (unsigned __int8)ExfTryAcquirePushLockSharedEx(BugCheckParameter2, v9) )
    {
      v4 = BugCheckParameter2 | 1;
    }
  }
  if ( !v6 && v4 )
    v4 |= 2uLL;
  if ( v2 )
  {
    if ( v4 )
      *((_BYTE *)v2 + 10) = 1;
    else
      KeAbPostReleaseEx(BugCheckParameter2, (ULONG_PTR)v2);
  }
  return v4;
}
