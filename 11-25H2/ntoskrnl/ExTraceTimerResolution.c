/*
 * XREFs of ExTraceTimerResolution @ 0x1404A8858
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140A32540 (PopDiagTraceControlCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PoTraceSystemTimerResolution @ 0x1409CC990 (PoTraceSystemTimerResolution.c)
 *     ExAcquireTimeRefreshLockShared @ 0x140A09550 (ExAcquireTimeRefreshLockShared.c)
 *     ExReleaseTimeRefreshLockShared @ 0x140A095BC (ExReleaseTimeRefreshLockShared.c)
 *     PoRundownSystemTimer @ 0x140A90C0C (PoRundownSystemTimer.c)
 */

__int64 ExTraceTimerResolution()
{
  KIRQL v0; // al
  int v1; // r15d
  int v2; // r14d
  ULONG v3; // ebp
  int v4; // esi
  char v5; // di
  char v6; // bl
  __int64 v7; // rcx
  __int64 *i; // rbx

  ExAcquireTimeRefreshLockShared();
  v0 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  v1 = KeNonHrTimeIncrement;
  v2 = KeMinimumIncrement;
  v3 = KeMaximumIncrement;
  v4 = ExpKernelResolutionCount;
  v5 = ExpKernelRequestedTimerResolution;
  v6 = KeTimeIncrement;
  KeReleaseSpinLock(&ExpKernelResolutionLock, v0);
  PoRundownSystemTimer(v1, v2, v3, v4, v5, v6);
  for ( i = (__int64 *)ExpTimerResolutionListHead; i != &ExpTimerResolutionListHead; i = (__int64 *)*i )
  {
    LOBYTE(v7) = 1;
    PoTraceSystemTimerResolution(v7, i - 180);
  }
  return ExReleaseTimeRefreshLockShared();
}
