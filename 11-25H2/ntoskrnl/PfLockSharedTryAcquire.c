/*
 * XREFs of PfLockSharedTryAcquire @ 0x1403F5A50
 * Callers:
 *     PfCheckDeprioritizeFile @ 0x1408B5CCC (PfCheckDeprioritizeFile.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1403F5B90 (ExfTryAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PfLockSharedTryAcquire(volatile signed __int64 *BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
  if ( !_InterlockedCompareExchange64(BugCheckParameter2, 17LL, 0LL)
    || (unsigned __int8)ExfTryAcquirePushLockSharedEx(BugCheckParameter2, 0LL) )
  {
    if ( v3 )
      *((_BYTE *)v3 + 10) = 1;
    return 1LL;
  }
  else
  {
    if ( v3 )
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v3);
    KeLeaveCriticalRegion();
    return 0LL;
  }
}
