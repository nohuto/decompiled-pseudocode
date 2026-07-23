/*
 * XREFs of CmpCmdInit @ 0x1407D5C78
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407CF6FC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     KeInitializeTimer @ 0x14044A0E0 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     PoRegisterCoalescingCallback @ 0x14074F0E0 (PoRegisterCoalescingCallback.c)
 *     CmpInitializeLazyWriters @ 0x1407DF6B4 (CmpInitializeLazyWriters.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCmdInit(char a1)
{
  int v2; // eax
  void *Pool2; // rax
  unsigned __int64 v4; // rsi
  void *v5; // r8
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax

  CmpInitializeLazyWriters();
  CmpForceFlushWorkItem.Parameter = 0LL;
  CmpForceFlushWorkItem.List.Flink = 0LL;
  CmpForceFlushWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpForceFlushWorker;
  KeInitializeDpc(&CmpEnableLazyFlushDpc, (PKDEFERRED_ROUTINE)CmpEnableLazyFlushDpcRoutine, &CmpHoldLazyFlush);
  KeInitializeTimer(&CmpEnableLazyFlushTimer);
  v2 = CmpEnableLazyFlushBootDelayInterval;
  if ( CmpEnableLazyFlushBootDelayInterval < 60 )
  {
    v2 = 60;
    CmpEnableLazyFlushBootDelayInterval = 60;
  }
  if ( v2 > 600 )
  {
    v2 = 600;
    CmpEnableLazyFlushBootDelayInterval = 600;
  }
  KiSetTimerEx((__int64)&CmpEnableLazyFlushTimer, -10000000LL * v2, 0, 0, (__int64)&CmpEnableLazyFlushDpc);
  _mm_lfence();
  Pool2 = (void *)ExAllocatePool2(0x40uLL, 8uLL, 0x58637044u);
  v4 = (unsigned __int64)Pool2;
  if ( Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0);
    _RAX = 2147483656LL;
    __asm { cpuid }
    v5 = (void *)(v4 ^ ((unsigned __int64)(unsigned int)ExGenRandom(0, _RDX, v11, v12) << SBYTE1(_RAX)));
  }
  else
  {
    v5 = 0LL;
  }
  KeInitializeDpc(&CmpFreezeThawDpc, (PKDEFERRED_ROUTINE)CmpFreezeThawDpcRoutine, v5);
  KeInitializeTimer(&CmpFreezeThawTimer);
  CmpFreezeThawWorkItem.Parameter = 0LL;
  CmpFreezeThawWorkItem.List.Flink = 0LL;
  CmpFreezeThawWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpFreezeThawWorker;
  BYTE1(NlsMbOemCodePageTag) = BYTE6(NlsMbOemCodePageTag);
  CmpWorkerDataInitialized = 1;
  CmpWasSetupBoot = a1;
  CmpEnableLazyFlushTimerInitialized = 1;
  result = PoRegisterCoalescingCallback((__int64)CmpCoalescingCallback, 1, &CmpCoalescingRegistration, 0LL);
  if ( (int)result >= 0 )
    CmpCoalescingCallbackActive = 1;
  return result;
}
