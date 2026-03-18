/*
 * XREFs of PopPowerAggregatorSnapDiagnosticContext @ 0x14074D914
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1404C0D40 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopPowerAggregatorSnapDiagnosticContext(_QWORD *a1)
{
  void *Pool2; // rax
  void *v3; // rbx

  *a1 = 0LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v3 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, &PopPowerAggregatorContext, 0x15F8uLL);
    *a1 = v3;
  }
  return PopReleaseRwLock(&PopPowerAggregatorLock);
}
