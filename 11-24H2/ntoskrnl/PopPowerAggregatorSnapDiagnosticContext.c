/*
 * XREFs of PopPowerAggregatorSnapDiagnosticContext @ 0x140759D64
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1404BF450 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopPowerAggregatorSnapDiagnosticContext(_QWORD *a1)
{
  void *Pool2; // rax
  void *v3; // rbx

  *a1 = 0LL;
  PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v3 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, &PopPowerAggregatorContext, 0x15F8uLL);
    *a1 = v3;
  }
  return PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
}
