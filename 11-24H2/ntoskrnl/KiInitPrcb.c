/*
 * XREFs of KiInitPrcb @ 0x140B58254
 * Callers:
 *     KiInitializeBootStructures @ 0x140B5A140 (KiInitializeBootStructures.c)
 * Callees:
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     InitializeSListHead @ 0x140454D40 (InitializeSListHead.c)
 *     KiInitializeSharedReadyQueue @ 0x1405B465C (KiInitializeSharedReadyQueue.c)
 *     KiInitializeSoftwareInterruptBatch @ 0x1405BA990 (KiInitializeSoftwareInterruptBatch.c)
 *     KiIntSteerInitPrcb @ 0x1405C1BA8 (KiIntSteerInitPrcb.c)
 *     KiInitializeBugcheckRecoveryProcessor @ 0x1405C3AF8 (KiInitializeBugcheckRecoveryProcessor.c)
 *     KiInitializeDpcList @ 0x1405C4848 (KiInitializeDpcList.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall KiInitPrcb(__int64 a1, int a2)
{
  _QWORD *v2; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  void *result; // rax

  v2 = (_QWORD *)(a1 + 33856);
  *(_DWORD *)(a1 + 33752) = 0;
  *(_DWORD *)(a1 + 33760) = 1;
  *(_DWORD *)(a1 + 34420) = 0;
  *(_QWORD *)(a1 + 34424) = 0LL;
  *(_QWORD *)(a1 + 11528) = 0LL;
  v5 = 32LL;
  do
  {
    v2[1] = v2;
    *v2 = v2;
    v2 += 2;
    --v5;
  }
  while ( v5 );
  KiInitializeSharedReadyQueue(*(_QWORD *)(a1 + 36424), a1);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 36424) + 576LL;
  KiInitializeDpcList((_QWORD *)(a1 + 14400));
  *(_QWORD *)(a1 + 14416) = 0LL;
  *(_QWORD *)(a1 + 14424) = 0LL;
  *(_DWORD *)(a1 + 14524) = 0;
  *(_BYTE *)(a1 + 14522) = 0;
  *(_DWORD *)(a1 + 14504) = KiMaximumDpcQueueDepth;
  *(_DWORD *)(a1 + 14512) = KiMinimumDpcRate;
  *(_DWORD *)(a1 + 34388) = KiAdjustDpcThreshold;
  KeInitializeDpc((PRKDPC)(a1 + 33632), (PKDEFERRED_ROUTINE)KiDpcWatchdog, 0LL);
  if ( !*(_QWORD *)(a1 + 33688) )
    *(_WORD *)(a1 + 33634) = a2 + 2048;
  *(_BYTE *)(a1 + 33633) = 2;
  KeInitializeDpc((PRKDPC)(a1 + 41360), (PKDEFERRED_ROUTINE)KiSlistRollbackDpc, 0LL);
  if ( !*(_QWORD *)(a1 + 41416) )
    *(_WORD *)(a1 + 41362) = a2 + 2048;
  KiInitializeBugcheckRecoveryProcessor(a1);
  *(_QWORD *)(a1 + 14376) = -1LL;
  *(_QWORD *)(a1 + 33736) = a1 + 33728;
  *(_QWORD *)(a1 + 33728) = a1 + 33728;
  InitializeSListHead((PSLIST_HEADER)(a1 + 14336));
  KeGetPcr()->NtTib.ArbitraryUserPointer = (void *)(a1 + 1776);
  *(_QWORD *)(a1 + 2008) = &CcBcbSpinLock;
  *(_QWORD *)(a1 + 2000) = 0LL;
  *(_QWORD *)(a1 + 1864) = &CcMasterSpinLock;
  *(_QWORD *)(a1 + 1848) = &CcVacbSpinLock;
  *(_QWORD *)(a1 + 1880) = &NonPagedPoolLock;
  *(_QWORD *)(a1 + 1896) = &IopCancelSpinLock;
  *(_QWORD *)(a1 + 1928) = &IopVpbSpinLock;
  *(_QWORD *)(a1 + 1944) = &IopDatabaseLock;
  *(_QWORD *)(a1 + 1960) = &IopCompletionLock;
  *(_QWORD *)(a1 + 1976) = &NtfsStructLock;
  *(_QWORD *)(a1 + 1992) = &AfdWorkQueueSpinLock;
  *(_QWORD *)(a1 + 1856) = 0LL;
  *(_QWORD *)(a1 + 1840) = 0LL;
  *(_QWORD *)(a1 + 1872) = 0LL;
  *(_QWORD *)(a1 + 1888) = 0LL;
  *(_QWORD *)(a1 + 1920) = 0LL;
  *(_QWORD *)(a1 + 1936) = 0LL;
  *(_QWORD *)(a1 + 1952) = 0LL;
  *(_QWORD *)(a1 + 1968) = 0LL;
  *(_QWORD *)(a1 + 1984) = 0LL;
  *(_QWORD *)(a1 + 2032) = 0LL;
  *(_QWORD *)(a1 + 2040) = 0LL;
  *(_DWORD *)(a1 + 36832) = (3 * (_WORD)a2) & 0x3FF;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 33744) = 0LL;
  *(_DWORD *)(a1 + 33696) = 1;
  KeInitializeDpc((PRKDPC)(a1 + 37096), (PKDEFERRED_ROUTINE)KiEntropyDpcRoutine, (PVOID)(a1 + 36832));
  SymCryptEntropyAccumulatorInit0(a1 + 37312);
  if ( a2 )
  {
    SymCryptEntropyAccumulatorInit1(a1 + 37312, 0LL);
  }
  else
  {
    KiClockPollCycle = KiClockKeepAliveCycle;
    KiReverseStallIpiLock = 0LL;
    CcBcbSpinLock = 0LL;
    CcMasterSpinLock = 0LL;
    CcVacbSpinLock = 0LL;
    IopCancelSpinLock = 0LL;
    IopCompletionLock = 0LL;
    IopDatabaseLock = 0LL;
    IopVpbSpinLock = 0LL;
    NonPagedPoolLock = 0LL;
    NtfsStructLock = 0LL;
    AfdWorkQueueSpinLock = 0LL;
    *(_QWORD *)&KeSleepingProcessors.Count = 2097184LL;
    memset_0(&KeSleepingProcessors.8, 0, sizeof(KeSleepingProcessors.8));
  }
  KiIntSteerInitPrcb(a1);
  KeInitializeDpc((PRKDPC)(a1 + 37248), (PKDEFERRED_ROUTINE)KiAbDeferredProcessingWorker, 0LL);
  if ( !*(_QWORD *)(a1 + 37304) )
    *(_WORD *)(a1 + 37250) = a2 + 2048;
  KiInitializeSoftwareInterruptBatch((_DWORD *)(a1 + 13784));
  *(_DWORD *)(a1 + 35732) = 0;
  v6 = 5LL;
  v7 = a1 + 44804;
  do
  {
    *(_QWORD *)(v7 - 4) = 2097153LL;
    result = memset_0((void *)(v7 + 4), 0, 0x100uLL);
    v7 += 264LL;
    --v6;
  }
  while ( v6 );
  return result;
}
