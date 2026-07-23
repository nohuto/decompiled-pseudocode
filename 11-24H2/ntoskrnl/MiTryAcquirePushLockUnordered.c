/*
 * XREFs of MiTryAcquirePushLockUnordered @ 0x14067679C
 * Callers:
 *     MiIssuePageHeatList @ 0x140435CBC (MiIssuePageHeatList.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1404704C4 (ExfTryAcquirePushLockSharedEx.c)
 */

char __fastcall MiTryAcquirePushLockUnordered(
        volatile signed __int64 *BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  char v4; // bl
  _QWORD *v6; // rdi

  v4 = 0;
  *a4 = 0;
  v6 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
  if ( !_InterlockedCompareExchange64(BugCheckParameter2, 17LL, 0LL)
    || ExfTryAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, 0) )
  {
    if ( v6 )
      *((_BYTE *)v6 + 10) = 1;
    return 1;
  }
  else if ( v6 )
  {
    KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v6);
  }
  return v4;
}
