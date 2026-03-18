/*
 * XREFs of KiCompleteKernelInit @ 0x140B45C50
 * Callers:
 *     KiInitializeKernel @ 0x140B48920 (KiInitializeKernel.c)
 * Callees:
 *     KeAttachProcess @ 0x140203A10 (KeAttachProcess.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiUpdateThreadPriority @ 0x1403170A0 (KiUpdateThreadPriority.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140317BD0 (KiUpdateThreadQosGroupingSummaries.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KeInitializeTimer2 @ 0x14036F140 (KeInitializeTimer2.c)
 *     KiAcquireSubNodeLock @ 0x1403F6FA0 (KiAcquireSubNodeLock.c)
 *     KiReleaseSubNodeLock @ 0x140434610 (KiReleaseSubNodeLock.c)
 *     KiSetProcessorIdle @ 0x140447AB0 (KiSetProcessorIdle.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     KiBuildShareCountListForSubNodeByAffinity @ 0x14045A690 (KiBuildShareCountListForSubNodeByAffinity.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140469560 (KeRegisterBugCheckReasonCallback.c)
 *     Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline @ 0x1404F0A14 (Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiAcquirePrcbLocksForGroupAffinity @ 0x1405AD2A0 (KiAcquirePrcbLocksForGroupAffinity.c)
 *     KiReleasePrcbLocksForGroupAffinity @ 0x1405AD760 (KiReleasePrcbLocksForGroupAffinity.c)
 *     KiInitializeProcessorXSaveStructures @ 0x1405B4DF4 (KiInitializeProcessorXSaveStructures.c)
 *     KiWriteRankListMembersUnderLock @ 0x1405C3930 (KiWriteRankListMembersUnderLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     KiAddCpuToSystemCpuPartition @ 0x140B47CE0 (KiAddCpuToSystemCpuPartition.c)
 *     KiCreateCpuSetForProcessor @ 0x140B47D90 (KiCreateCpuSetForProcessor.c)
 */

__int64 __fastcall KiCompleteKernelInit(__int64 a1, __int64 a2, int a3)
{
  char v3; // si
  __int64 v5; // r15
  unsigned __int8 CurrentIrql; // cl
  __int64 v8; // r14
  __int16 v9; // ax
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v16; // [rsp+30h] [rbp-39h] BYREF
  LARGE_INTEGER PerformanceFrequency[2]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v18[64]; // [rsp+50h] [rbp-19h] BYREF

  v3 = 0;
  PerformanceFrequency[0].QuadPart = 0LL;
  v5 = a2;
  v16 = 0LL;
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
    qword_140F21B18 = 0LL;
    qword_140F21B10 = (__int64)&qword_140F21B08;
    qword_140F21B08 = (__int64)&qword_140F21B08;
    KeInitializeTimer2((__int64)&KiForegroundState, (__int64)KiForegroundTimerCallback, 0LL, 8LL);
    KeInitializeDpc(&stru_140F21A88, (PKDEFERRED_ROUTINE)KiProcessPendingForegroundBoosts, 0LL);
    KeInitializeDpc(&stru_140F21AC8, (PKDEFERRED_ROUTINE)KiTriggerForegroundBoostDpc, 0LL);
    KeInitializeDpc(&KiUpdateVpThreadPriorityDpc, (PKDEFERRED_ROUTINE)KiUpdateVpBackingThreadPriorityDpcRoutine, 0LL);
    KiUpdateVpThreadPriorityDpc.Importance = 2;
    qword_140F21B28 = (__int64)&KiUpdateVpThreadPriorityListHead;
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
  }
  KiInitializeProcessorXSaveStructures(a1);
  v8 = *(_QWORD *)(a1 + 192);
  _interlockedbittestandset64((volatile signed __int32 *)(v8 + 80), *(unsigned __int8 *)(a1 + 209));
  _interlockedbittestandset64((volatile signed __int32 *)(v8 + 112), *(unsigned __int8 *)(a1 + 209));
  if ( (unsigned int)Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline() )
  {
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
    KiBuildShareCountListForSubNodeByAffinity(v18, *(_WORD *)(v8 + 136), v11 | v12, v13, 1);
    KiWriteRankListMembersUnderLock((unsigned __int8 *)(v8 + 512), (__int64)v18, *(_QWORD *)(a1 + 36448));
    KiBuildShareCountListForSubNodeByAffinity(
      v18,
      *(_WORD *)(v8 + 136),
      *(_QWORD *)(v8 + 128) | *(_QWORD *)(a1 + 200),
      v13,
      2);
    KiWriteRankListMembersUnderLock((unsigned __int8 *)(v8 + 576), (__int64)v18, *(_QWORD *)(a1 + 36472));
    KiReleasePrcbLocksForGroupAffinity((__int64)PerformanceFrequency);
    KiAcquirePrcbLocksForIsolationUnit(a1, 0, (unsigned __int64 *)&v16);
  }
  else
  {
    KiAcquirePrcbLocksForIsolationUnit(a1, 0, (unsigned __int64 *)&v16);
    *(_BYTE *)(a1 + 35) = 1;
    KiAcquireSubNodeLock((volatile signed __int32 *)v8);
    *(_QWORD *)(v8 + 24) &= ~*(_QWORD *)(a1 + 36448);
    *(_QWORD *)(v8 + 32) &= ~*(_QWORD *)(a1 + 36472);
    KiBuildShareCountListForSubNodeByAffinity(
      (void *)(v8 + 576),
      *(_WORD *)(v8 + 136),
      *(_QWORD *)(v8 + 128) | *(_QWORD *)(a1 + 200),
      *(_QWORD *)(a1 + 200) | *(_QWORD *)(v8 + 128) & ~*(_QWORD *)(v8 + 16),
      2);
    KiReleaseSubNodeLock((volatile signed __int64 *)v8);
  }
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v3 = 1;
    KiSetProcessorIdle(a1, 1u, 1u);
    KiUpdateThreadQosGroupingSummaries(a1);
  }
  KiUpdateThreadPriority(a1, v14, v5, 0, v3);
  KiReleasePrcbLocksForIsolationUnit(&v16);
  KiAddCpuToSystemCpuPartition(a1);
  return KiCreateCpuSetForProcessor(a1);
}
