/*
 * XREFs of PopPowerAggregatorSnapDiagnosticContext @ 0x1407581B4
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1404BA980 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopPowerAggregatorSnapDiagnosticContext(_QWORD *a1)
{
  void *Pool2; // rax
  void *v3; // rbx

  *a1 = 0LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x15F8uLL, 0x67696450u);
  v3 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, &PopPowerAggregatorContext, 0x15F8uLL);
    *a1 = v3;
  }
  return PopReleaseRwLock(&PopPowerAggregatorLock);
}
