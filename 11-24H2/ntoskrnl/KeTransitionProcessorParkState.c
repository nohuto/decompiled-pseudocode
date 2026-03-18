/*
 * XREFs of KeTransitionProcessorParkState @ 0x1403E9560
 * Callers:
 *     PpmParkReportUnparkedCore @ 0x140351950 (PpmParkReportUnparkedCore.c)
 *     PpmParkReportParkedCore @ 0x1403519DC (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x1403E9474 (PpmParkReportSoftParkChange.c)
 *     ?KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z @ 0x1404B2F48 (-KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z.c)
 *     PpmParkReportForceParkChange @ 0x1405DA8CC (PpmParkReportForceParkChange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140293190 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140339330 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiParkCurrentProcessor @ 0x1403E9898 (KiParkCurrentProcessor.c)
 *     KiUnparkCurrentProcessor @ 0x1403E9EF8 (KiUnparkCurrentProcessor.c)
 *     KiDisarmForceParkDutyCyclingIfNecessary @ 0x1404F9554 (KiDisarmForceParkDutyCyclingIfNecessary.c)
 *     KiNotifyAvailableCpusChangeCpuPartition @ 0x1405B8688 (KiNotifyAvailableCpusChangeCpuPartition.c)
 *     KiUpdateSystemAvailableCpuState @ 0x1405B86B4 (KiUpdateSystemAvailableCpuState.c)
 *     EtwTraceParkTransition @ 0x14064DC44 (EtwTraceParkTransition.c)
 */

void __fastcall KeTransitionProcessorParkState(struct _KPRCB *a1, unsigned int a2)
{
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rdi
  unsigned __int64 GroupSetMember; // rbx
  unsigned int v6; // r13d
  unsigned __int64 *p_ForceParkRequestSet; // r12
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 IdleState; // al
  char v12; // r14
  char v13; // bl
  char v14; // di
  unsigned __int8 v15; // al
  unsigned __int8 v16; // al
  unsigned __int64 v17; // rcx
  __int64 v18; // [rsp+90h] [rbp+18h] BYREF
  PEX_SPIN_LOCK SpinLock; // [rsp+98h] [rbp+20h]

  SchedulerSubNode = a1->SchedulerSubNode;
  v18 = 0LL;
  GroupSetMember = a1->GroupSetMember;
  if ( (GroupSetMember & SchedulerSubNode->ParkRequestSet) != 0 )
  {
    if ( (GroupSetMember & SchedulerSubNode->SoftParkRequestSet) != 0 )
    {
      v6 = 2;
    }
    else
    {
      v6 = 3;
      if ( (GroupSetMember & SchedulerSubNode->ForceParkRequestSet) == 0 )
        v6 = 1;
    }
    p_ForceParkRequestSet = &SchedulerSubNode->ForceParkRequestSet;
  }
  else
  {
    v6 = 0;
    p_ForceParkRequestSet = &SchedulerSubNode->ForceParkRequestSet;
  }
  SpinLock = &SchedulerSubNode->ParkLock;
  ExAcquireSpinLockExclusiveAtDpcLevel(&SchedulerSubNode->ParkLock);
  KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 1, (unsigned __int64 *)&v18);
  if ( v6 != 3 )
  {
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        v17 = ~GroupSetMember;
        SchedulerSubNode->SoftParkRequestSet &= ~GroupSetMember;
        if ( !a2 )
        {
LABEL_36:
          SchedulerSubNode->ParkRequestSet &= v17;
          goto LABEL_7;
        }
LABEL_46:
        if ( a2 != 3 )
          goto LABEL_7;
        goto LABEL_52;
      }
      if ( a2 != 2 )
      {
        if ( a2 != 3 )
        {
          SchedulerSubNode->ParkRequestSet &= ~GroupSetMember;
          goto LABEL_7;
        }
LABEL_52:
        *p_ForceParkRequestSet |= GroupSetMember;
        goto LABEL_7;
      }
    }
    else
    {
      SchedulerSubNode->ParkRequestSet |= GroupSetMember;
      if ( a2 != 2 )
        goto LABEL_46;
    }
LABEL_27:
    SchedulerSubNode->SoftParkRequestSet |= GroupSetMember;
    goto LABEL_7;
  }
  LOBYTE(v8) = 1;
  KiDisarmForceParkDutyCyclingIfNecessary(a1, v8, v9, v10);
  v17 = ~GroupSetMember;
  SchedulerSubNode->ForceParkRequestSet &= ~GroupSetMember;
  if ( !a2 )
    goto LABEL_36;
  if ( a2 == 2 )
    goto LABEL_27;
LABEL_7:
  IdleState = a1->IdleState;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1u:
        v16 = IdleState & 0xF1 | 2;
        break;
      case 2u:
        v16 = IdleState & 0xF1 | 6;
        break;
      case 3u:
        a1->IdleState = IdleState & 0xF1 | 0xA;
        v13 = 0;
        goto LABEL_30;
      default:
        v12 = 0;
        a1->IdleState = IdleState;
        v13 = 0;
LABEL_12:
        v14 = 1;
        goto LABEL_13;
    }
    v12 = 0;
    a1->IdleState = v16;
    v13 = 0;
    if ( (v16 & 0x10) == 0 )
    {
LABEL_30:
      v12 = 1;
      KiParkCurrentProcessor(a1, a2, 0);
      goto LABEL_31;
    }
    if ( v6 != 3 )
      goto LABEL_12;
  }
  else
  {
    v15 = IdleState & 0xF1;
    v12 = 0;
    a1->IdleState = v15;
    v13 = 0;
    if ( (v15 & 0x10) == 0 )
      goto LABEL_12;
  }
  v13 = 1;
  KiUnparkCurrentProcessor((_DWORD)a1, (_DWORD)SchedulerSubNode, (unsigned int)&v18, v6, a2);
LABEL_31:
  v14 = 0;
LABEL_13:
  if ( v18 )
    KiReleasePrcbLocksForIsolationUnit(&v18);
  if ( v14 )
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( v6 == 3 || a2 == 3 )
  {
    _InterlockedIncrement64(&KiForceParkingSequence);
    KiUpdateSystemAvailableCpuState();
    KxAcquireSpinLock(&KiCpuPartitionAssignmentLock);
    KiNotifyAvailableCpusChangeCpuPartition(a1->CpuPartition);
    KxReleaseSpinLock((volatile signed __int64 *)&KiCpuPartitionAssignmentLock);
  }
  if ( !v12 && !v13 && (WORD2(xmmword_140FC5B10) & 0x2000) != 0 )
    EtwTraceParkTransition(a1, a2, v6);
}
