/*
 * XREFs of PfLockSharedTryAcquire @ 0x140473650
 * Callers:
 *     PfCheckDeprioritizeFile @ 0x1408E5C40 (PfCheckDeprioritizeFile.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1404736D4 (ExfTryAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PfLockSharedTryAcquire(volatile signed __int64 *BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rbx

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
