/*
 * XREFs of KiForceParkDutyCycleDpcCallback @ 0x1405C4100
 * Callers:
 *     <none>
 * Callees:
 *     KiStartRescheduleContext @ 0x140253DF0 (KiStartRescheduleContext.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402F3B90 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiCommitRescheduleContext @ 0x140317320 (KiCommitRescheduleContext.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiAdjustRescheduleContextForParking @ 0x140353A94 (KiAdjustRescheduleContextForParking.c)
 *     KeCancelTimer2 @ 0x14036FE50 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     EtwTraceForceParkTransition @ 0x1406418F8 (EtwTraceForceParkTransition.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

unsigned __int8 __fastcall KiForceParkDutyCycleDpcCallback(__int64 a1, struct _KPRCB *a2)
{
  unsigned __int8 result; // al
  __int64 v4; // rdx
  __int64 v5; // r8
  _KFORCE_PARK_DUTY_CYCLE_DATA *ForceParkDutyCycleData; // r15
  _KI_FORCE_PARK_DUTY_CYCLE_TRANSITION DpcTransition; // r14d
  _KI_FORCE_PARK_DUTY_CYCLE_STATE CurrentState; // r12d
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 IdleState; // al
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rsi
  char v15; // bl
  __int64 i; // rbx
  __int64 p_StartSingleDutyCycleTimer; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  struct _SINGLE_LIST_ENTRY v20[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v21; // [rsp+68h] [rbp+38h] BYREF

  v21 = 0LL;
  result = (unsigned __int8)KiAcquirePrcbLocksForIsolationUnit((__int64)a2, 1, (unsigned __int64 *)&v21);
  ForceParkDutyCycleData = a2->ForceParkDutyCycleData;
  DpcTransition = ForceParkDutyCycleData->DpcTransition;
  ForceParkDutyCycleData->DpcTransition = KiForceParkDutyCycleTransitionNone;
  CurrentState = ForceParkDutyCycleData->CurrentState;
  if ( DpcTransition == KiForceParkDutyCycleTransitionArm )
  {
    KiReleasePrcbLocksForIsolationUnit(&v21);
    v18 = -10LL * (unsigned int)dword_140FC42E4;
    v19 = (unsigned int)(10 * dword_140FC42E4);
    p_StartSingleDutyCycleTimer = (__int64)&ForceParkDutyCycleData->StartSingleDutyCycleTimer;
    goto LABEL_19;
  }
  if ( DpcTransition != KiForceParkDutyCycleTransitionStart && DpcTransition != KiForceParkDutyCycleTransitionStop )
  {
    if ( DpcTransition == KiForceParkDutyCycleTransitionDisarm )
    {
      KiReleasePrcbLocksForIsolationUnit(&v21);
      KeCancelTimer2((__int64)&ForceParkDutyCycleData->StartSingleDutyCycleTimer, 0LL, v9, v10);
      result = KeCancelTimer2((__int64)&ForceParkDutyCycleData->StopSingleDutyCycleTimer, 0LL, v11, v12);
    }
    goto LABEL_20;
  }
  IdleState = a2->IdleState;
  if ( DpcTransition == KiForceParkDutyCycleTransitionStart )
  {
    IdleState &= ~0x20u;
  }
  else if ( DpcTransition == KiForceParkDutyCycleTransitionStop )
  {
    IdleState |= 0x20u;
  }
  StaticRescheduleContext = a2->StaticRescheduleContext;
  a2->IdleState = IdleState;
  memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
  KiStartRescheduleContext((__int64)StaticRescheduleContext, &v21);
  if ( DpcTransition == KiForceParkDutyCycleTransitionStop )
    KiAdjustRescheduleContextForParking((__int64)StaticRescheduleContext, a2);
  v20[0].Next = 0LL;
  KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext, v20);
  v15 = KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, a2, 0, v20);
  KiReleasePrcbLocksForIsolationUnit(&v21);
  if ( v15 )
  {
    for ( i = 0LL; (unsigned int)i < StaticRescheduleContext->ProcessorCount; i = (unsigned int)(i + 1) )
      KiCompleteRescheduleContextEntry(
        (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                              + 32 * i
                                              + 8 * (unsigned int)i),
        a2,
        0LL,
        0LL);
    KiFlushSoftwareInterruptBatch((char *)&a2->DeferredDispatchInterrupts);
  }
  result = KiProcessDeferredReadyList(a2, v20, 2u);
  if ( DpcTransition == KiForceParkDutyCycleTransitionStart )
  {
    p_StartSingleDutyCycleTimer = (__int64)&ForceParkDutyCycleData->StopSingleDutyCycleTimer;
    v18 = -10LL * (unsigned int)dword_140FC42E8;
    v19 = 0LL;
LABEL_19:
    result = KeSetTimer2(p_StartSingleDutyCycleTimer, (LARGE_INTEGER)v18, v19, 0LL);
  }
LABEL_20:
  if ( v21 )
    result = KiReleasePrcbLocksForIsolationUnit(&v21);
  if ( (WORD2(xmmword_140FC5B10) & 0x2000) != 0 )
  {
    LOBYTE(v5) = DpcTransition;
    LOBYTE(v4) = CurrentState;
    return EtwTraceForceParkTransition(a2, v4, v5);
  }
  return result;
}
