/*
 * XREFs of KiCompleteKernelInit @ 0x140B57CA0
 * Callers:
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 * Callees:
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiUpdateThreadPriority @ 0x1402E0E50 (KiUpdateThreadPriority.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiBuildShareCountListForSubNodeByAffinity @ 0x14032A81C (KiBuildShareCountListForSubNodeByAffinity.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KeInitializeTimer2 @ 0x1403ADE80 (KeInitializeTimer2.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     KeRegisterBugCheckReasonCallback @ 0x1404606D0 (KeRegisterBugCheckReasonCallback.c)
 *     KeAttachProcess @ 0x140477330 (KeAttachProcess.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x1404E0370 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiSetProcessorIdle @ 0x1404E10A8 (KiSetProcessorIdle.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiAcquirePrcbLocksForGroupAffinity @ 0x1405ADBA0 (KiAcquirePrcbLocksForGroupAffinity.c)
 *     KiReleasePrcbLocksForGroupAffinity @ 0x1405AE060 (KiReleasePrcbLocksForGroupAffinity.c)
 *     Feature_Servicing_ISRStatsInTriageDumps__private_IsEnabledDeviceUsageNoInline @ 0x1405B2304 (Feature_Servicing_ISRStatsInTriageDumps__private_IsEnabledDeviceUsageNoInline.c)
 *     KiInitializeProcessorXSaveStructures @ 0x1405B61F4 (KiInitializeProcessorXSaveStructures.c)
 *     KiWriteRankListMembersUnderLock @ 0x1405C5278 (KiWriteRankListMembersUnderLock.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KiAddCpuToSystemCpuPartition @ 0x140B59D00 (KiAddCpuToSystemCpuPartition.c)
 *     KiCreateCpuSetForProcessor @ 0x140B59DB0 (KiCreateCpuSetForProcessor.c)
 */

__int64 __fastcall KiCompleteKernelInit(__int64 a1, __int64 a2, int a3)
{
  char v3; // si
  __int64 v5; // r15
  unsigned __int8 CurrentIrql; // cl
  __int64 v8; // rdi
  __int16 v9; // ax
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rdx
  LARGE_INTEGER PerformanceFrequency[2]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v17[2]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v18[64]; // [rsp+50h] [rbp-19h] BYREF

  v3 = 0;
  PerformanceFrequency[0].QuadPart = 0LL;
  v5 = a2;
  v17[0] = 0LL;
  if ( !a3 )
  {
    *(_DWORD *)(a1 + 14504) = KiMaximumDpcQueueDepth;
    *(_DWORD *)(a1 + 14512) = KiMinimumDpcRate;
    *(_DWORD *)(a1 + 34388) = KiAdjustDpcThreshold;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  _enable();
  KeAttachProcess(PsInitialSystemProcess);
  if ( !a3 )
  {
    qword_140F224F8 = 0LL;
    qword_140F224F0 = (__int64)&qword_140F224E8;
    qword_140F224E8 = (__int64)&qword_140F224E8;
    KeInitializeTimer2((__int64)&KiForegroundState);
    KeInitializeDpc(&stru_140F22468, (PKDEFERRED_ROUTINE)KiProcessPendingForegroundBoosts, 0LL);
    KeInitializeDpc(&stru_140F224A8, (PKDEFERRED_ROUTINE)KiTriggerForegroundBoostDpc, 0LL);
    KeInitializeDpc(&KiUpdateVpThreadPriorityDpc, (PKDEFERRED_ROUTINE)KiUpdateVpBackingThreadPriorityDpcRoutine, 0LL);
    KiUpdateVpThreadPriorityDpc.Importance = 2;
    qword_140F22508 = (__int64)&KiUpdateVpThreadPriorityListHead;
    KiUpdateVpThreadPriorityListHead = (__int64)&KiUpdateVpThreadPriorityListHead;
    KiUpdateVpThreadPriorityLock = 0LL;
    KeQueryPerformanceCounter(PerformanceFrequency);
    KiSchedulerAssistYieldCounterThreshold = 100;
    KiSchedulerAssistCallbackRecord.State = 0;
    KiSchedulerAssistYieldBoostPeriod = 50 * PerformanceFrequency[0].QuadPart / 1000;
    KeRegisterBugCheckReasonCallback(
      &KiSchedulerAssistCallbackRecord,
      (PKBUGCHECK_REASON_CALLBACK_ROUTINE)KiSchedulerAssistBugCheckAddPagesCallback,
      KbCallbackAddPages,
      (PUCHAR)"KeSchedulerAssist");
    if ( (unsigned int)Feature_Servicing_ISRStatsInTriageDumps__private_IsEnabledDeviceUsageNoInline() )
    {
      KiIntSteerTriageCallbackRecord.State = 0;
      KeRegisterBugCheckReasonCallback(
        &KiIntSteerTriageCallbackRecord,
        (PKBUGCHECK_REASON_CALLBACK_ROUTINE)KiIntSteerCallbackRecordTriageCallback,
        KbCallbackTriageDumpData,
        (PUCHAR)"KeIntSteer");
    }
  }
  KiInitializeProcessorXSaveStructures(a1);
  v8 = *(_QWORD *)(a1 + 192);
  _interlockedbittestandset64((volatile signed __int32 *)(v8 + 80), *(unsigned __int8 *)(a1 + 209));
  _interlockedbittestandset64((volatile signed __int32 *)(v8 + 112), *(unsigned __int8 *)(a1 + 209));
  memset_0(v18, 0, sizeof(v18));
  v9 = *(unsigned __int8 *)(a1 + 208);
  *(_OWORD *)&PerformanceFrequency[0].LowPart = 0LL;
  LOWORD(PerformanceFrequency[1].LowPart) = v9;
  PerformanceFrequency[0] = *(LARGE_INTEGER *)(a1 + 36472);
  KiAcquirePrcbLocksForGroupAffinity((__int128 *)PerformanceFrequency);
  v10 = ~*(_QWORD *)(a1 + 36448);
  *(_BYTE *)(a1 + 35) = 1;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), v10);
  v11 = *(_QWORD *)(v8 + 128);
  v12 = *(_QWORD *)(a1 + 200);
  v13 = v12 | v11 & ~*(_QWORD *)(v8 + 16);
  KiBuildShareCountListForSubNodeByAffinity(v18, *(_WORD *)(v8 + 136), v11 | v12, v13, 1u);
  KiWriteRankListMembersUnderLock((unsigned __int8 *)(v8 + 512), (__int64)v18, *(_QWORD *)(a1 + 36448));
  KiBuildShareCountListForSubNodeByAffinity(
    v18,
    *(_WORD *)(v8 + 136),
    *(_QWORD *)(a1 + 200) | *(_QWORD *)(v8 + 128),
    v13,
    2u);
  KiWriteRankListMembersUnderLock((unsigned __int8 *)(v8 + 576), (__int64)v18, *(_QWORD *)(a1 + 36472));
  KiReleasePrcbLocksForGroupAffinity((__int64)PerformanceFrequency);
  KiAcquirePrcbLocksForIsolationUnit(a1, 0LL, (unsigned __int64 *)v17);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v3 = 1;
    KiSetProcessorIdle(a1, 1, 1);
    KiUpdateThreadQosGroupingSummaries(a1);
  }
  KiUpdateThreadPriority(a1, v14, v5, 0, v3);
  KiReleasePrcbLocksForIsolationUnit(v17);
  KiAddCpuToSystemCpuPartition(a1);
  return KiCreateCpuSetForProcessor(a1);
}
