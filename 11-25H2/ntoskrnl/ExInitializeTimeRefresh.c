/*
 * XREFs of ExInitializeTimeRefresh @ 0x140C2F2B0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14036F318 (KiInitializeTimer2.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     ZwLockProductActivationKeys @ 0x14069D3E0 (ZwLockProductActivationKeys.c)
 *     ExGetExpirationDate @ 0x1407A8A18 (ExGetExpirationDate.c)
 */

__int64 *ExInitializeTimeRefresh()
{
  __int64 *result; // rax
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  ZwLockProductActivationKeys(0LL, 0LL);
  if ( !ExpSystemSetupInProgress )
  {
    if ( (int)ExGetExpirationDate(&ExpNtExpirationDate) < 0 )
      ExpNtExpirationDate.QuadPart = 0LL;
    ExpShuttingDown = 0;
    *(LARGE_INTEGER *)(MmWriteableSharedUserData + 712) = ExpNtExpirationDate;
  }
  ExpTimeRefreshDpc.TargetInfoAsUlong = 275;
  ExpTimeRefreshDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)ExpTimeRefreshDpcRoutine;
  ExpTimeRefreshDpc.DpcData = 0LL;
  ExpTimeRefreshDpc.DeferredContext = &ExpOkToTimeRefresh;
  ExpTimeRefreshDpc.ProcessorHistory = 0LL;
  ExpTimeRefreshWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeRefreshWork;
  ExpTimeRefreshWorkItem.Parameter = 0LL;
  ExpTimeRefreshWorkItem.List.Flink = 0LL;
  word_140EFE5E2 = 0;
  KiInitializeTimer2((unsigned __int64)&ExpTimeRefreshTimer, (__int64)ExpTimeRefreshCallback, 0LL, 8);
  v1[1] = -1LL;
  v1[0] = 0LL;
  ExpTimeRefreshInterval = -36000000000LL;
  KeSetTimer2((__int64)&ExpTimeRefreshTimer, (LARGE_INTEGER)-36000000000LL, 0LL, (__int64)v1);
  result = &ExpTimerResolutionListHead;
  ExpTimeRefreshLock = 0LL;
  qword_140EFE5B8 = (__int64)&ExpTimerResolutionListHead;
  ExpTimerResolutionListHead = (__int64)&ExpTimerResolutionListHead;
  return result;
}
