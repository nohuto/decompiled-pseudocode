/*
 * XREFs of MiReferenceActiveSubsection @ 0x14020E140
 * Callers:
 *     MiAddViewsForSection @ 0x14020DA70 (MiAddViewsForSection.c)
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 *     MiUpControlAreaRefs @ 0x1404172CC (MiUpControlAreaRefs.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x1408F5378 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiReturnCrossPartitionCharges @ 0x14020F5E4 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiUnlinkUnusedSubsection @ 0x14020F984 (MiUnlinkUnusedSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiChargeResident @ 0x1402F5FA0 (MiChargeResident.c)
 *     MiGetCrossPartitionCharges @ 0x14036E19C (MiGetCrossPartitionCharges.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14036F2F8 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x14036F3BC (MiComputeCrossPartitionSectionCharges.c)
 *     MiGetCommittedPages @ 0x140370A88 (MiGetCommittedPages.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F9F3C (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReferenceActiveSubsection(_QWORD *BugCheckParameter2, int a2, KIRQL a3)
{
  __int64 v3; // rsi
  __int64 v4; // r13
  KIRQL v5; // r15
  __int64 v8; // rdi
  __int64 v9; // rbp
  ULONG_PTR SubsectionHoldingCrossPartitionReferences; // r15
  int v11; // r9d
  int v12; // ebx
  __int64 v13; // rsi
  char v15; // r8
  ULONG *v16; // rax
  int v17; // edx
  int v18; // eax
  volatile LONG *v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // rsi
  int CrossPartitionCharges; // r15d
  unsigned __int8 CurrentIrql; // si
  unsigned int v24; // edi
  volatile LONG v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // r8
  __int64 v30; // [rsp+30h] [rbp-68h]
  int v31; // [rsp+38h] [rbp-60h]
  __int64 v32; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v34; // [rsp+A8h] [rbp+10h]
  KIRQL v35; // [rsp+B0h] [rbp+18h]

  v35 = a3;
  v3 = *BugCheckParameter2;
  v4 = 0LL;
  v34 = 0;
  v5 = a3;
  v30 = *BugCheckParameter2;
  v32 = *(_QWORD *)(*BugCheckParameter2 + 64LL);
  if ( a3 == 17 )
  {
    v34 = 1;
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    v35 = v5;
  }
  v31 = 2;
  while ( 1 )
  {
    v8 = *BugCheckParameter2;
    if ( BugCheckParameter2[1] )
      break;
LABEL_32:
    if ( (a2 & 0x20) != 0 )
    {
      MiReleaseSpinLockExclusive(v3 + 72, v5);
      MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E2FF88 + (*(_WORD *)(v3 + 60) & 0x3FF)), v32 != 0, v4);
      if ( !v34 )
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
      return 3221225773LL;
    }
    v4 = MiComputeCrossPartitionSectionCharges(BugCheckParameter2);
    if ( v4 )
    {
      v19 = (volatile LONG *)(v3 + 72);
      if ( v5 == 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v19 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3 + 72, retaddr);
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v19 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3 + 72, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
        __writecr8(v5);
      }
      v20 = *(_QWORD *)(*BugCheckParameter2 + 64LL);
      v21 = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(*BugCheckParameter2 + 60LL) & 0x3FF));
      CrossPartitionCharges = MiGetCrossPartitionCharges(v21, 0LL, v20 != 0, v4);
      if ( CrossPartitionCharges < 0 )
        goto LABEL_41;
      if ( v20 && !(unsigned int)MiChargeCommit(v21, v4, 0LL) )
      {
        MiReturnCrossPartitionCharges(v21, 0LL, v20 != 0, v4);
        CrossPartitionCharges = -1073741523;
LABEL_41:
        if ( !v34 )
          ExAcquireSpinLockExclusive(v19);
        return (unsigned int)CrossPartitionCharges;
      }
      if ( !(unsigned int)MiChargeResident(v21, v4, 0LL) )
      {
        if ( v20 )
          MiReturnCommit(v21, v4, 0LL);
        MiReturnCrossPartitionCharges(v21, 0LL, v20 != 0, v4);
        CrossPartitionCharges = -1073741801;
        goto LABEL_41;
      }
      a2 |= 0x20u;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, v29);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v24 = 0;
        if ( _interlockedbittestandset(v19, 0x1Fu) )
          v24 = ExpWaitForSpinLockExclusiveAndAcquire((int *)v19, CurrentIrql, v29);
        v25 = *v19;
        v26 = *(unsigned int *)v19;
        LODWORD(v26) = v26 & 0xBFFFFFFF;
        if ( (_DWORD)v26 != 0x80000000 )
        {
          do
          {
            if ( (v25 & 0x40000000) == 0 )
              _InterlockedOr(v19, 0x40000000u);
            if ( (++v24 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v26) )
            {
              HvlNotifyLongSpinWait(v24);
            }
            else
            {
              _mm_pause();
            }
            v25 = *v19;
          }
          while ( (*v19 & 0xBFFFFFFF) != 0x80000000 );
        }
      }
      else
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)v19, CurrentIrql);
      }
      v3 = v30;
      v5 = v35;
      if ( (*(_DWORD *)(v30 + 56) & 0x20) == 0 )
      {
        if ( v32 )
        {
          if ( !BugCheckParameter2[1]
            || v4 != *((_DWORD *)BugCheckParameter2 + 11) - (*((_DWORD *)BugCheckParameter2 + 13) & 0x3FFFFFFF) )
          {
LABEL_76:
            ExReleaseSpinLockExclusiveFromDpcLevel(v19);
            if ( v35 != 17 )
            {
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v35);
              __writecr8(v35);
            }
            v27 = *(_WORD *)(v30 + 60) & 0x3FF;
            v28 = *((_QWORD *)qword_140E2FF88 + v27);
            if ( v32 )
              MiReturnCommit(*((_QWORD *)qword_140E2FF88 + v27), v4, 0LL);
            MiReturnResident(v28, v4);
            MiReturnCrossPartitionCharges(v28, 0LL, v32 != 0, v4);
            if ( !v34 )
              ExAcquireSpinLockExclusive(v19);
            return 3221225994LL;
          }
          v5 = v35;
        }
        else
        {
          if ( v4 != MiGetCommittedPages(v30) )
            goto LABEL_76;
          v5 = v35;
        }
      }
    }
    else
    {
      a2 |= 0x20u;
    }
  }
  v9 = *(_QWORD *)(v8 + 64);
  SubsectionHoldingCrossPartitionReferences = (ULONG_PTR)BugCheckParameter2;
  if ( (a2 & 8) == 0
    || (v15 = *(_BYTE *)(v8 + 62), (v15 & 0xC) != 0)
    || !v9 && (*(_DWORD *)(v8 + 92) & 0x10000) != 0
    || ((a2 & 0x80u) != 0
      ? (v16 = &MiSystemPartition)
      : (a2 & 0x10) != 0
      ? (v16 = 0LL)
      : (v16 = (ULONG *)*((_QWORD *)qword_140E2FF88
                        + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink))),
        v16 == *((ULONG **)qword_140E2FF88 + (*(_WORD *)(v8 + 60) & 0x3FF))) )
  {
LABEL_6:
    v11 = 2;
    goto LABEL_7;
  }
  if ( (v15 & 1) != 0 && (a2 & 0x100) == 0 )
  {
    ++dword_140E2FF90;
    v18 = 0;
    goto LABEL_30;
  }
  SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(BugCheckParameter2);
  v17 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF;
  if ( v17 == 0x3FFFFFFF )
    goto LABEL_6;
  if ( v17 )
    goto LABEL_108;
  if ( (a2 & 0x20) == 0 )
  {
    v18 = 1;
LABEL_30:
    if ( !v18 )
    {
      if ( v34 )
        MiReleaseSpinLockExclusive(v3 + 72, v35);
      return 3221227019LL;
    }
    v5 = v35;
    goto LABEL_32;
  }
  v31 = 3;
LABEL_108:
  MiUpdateSubsectionCrossPartitionRefs(SubsectionHoldingCrossPartitionReferences, (unsigned int)(v17 + 1));
LABEL_7:
  if ( (*(_DWORD *)(v8 + 56) & 0x20) == 0 && *(_QWORD *)(v8 + 64) )
  {
    v12 = *(_DWORD *)(SubsectionHoldingCrossPartitionReferences + 32);
    if ( (v12 & 0x80000) != 0 )
    {
      v13 = *((_QWORD *)qword_140E2FF88
            + (*(_WORD *)(*(_QWORD *)SubsectionHoldingCrossPartitionReferences + 60LL) & 0x3FF));
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v13 + 1728));
      MiUnlinkUnusedSubsection(SubsectionHoldingCrossPartitionReferences);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v13 + 1728));
      v11 = v31;
      v3 = v30;
    }
    if ( (v12 & 0x10000) == 0
      && (++*(_QWORD *)(SubsectionHoldingCrossPartitionReferences + 80) & 0x7FFFFFFFFFFFFFFFLL) == 0 )
    {
      KeBugCheckEx(0x1Au, 0x42000uLL, SubsectionHoldingCrossPartitionReferences, 0LL, 0LL);
    }
  }
  if ( v9 && (*(_DWORD *)(v8 + 56) & 0x20) == 0 )
    *((_DWORD *)BugCheckParameter2 + 8) |= 1u;
  if ( v11 == 2 && (a2 & 0x20) != 0 && v4 )
  {
    MiReleaseSpinLockExclusive(v3 + 72, v35);
    MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E2FF88 + (*(_WORD *)(v3 + 60) & 0x3FF)), v32 != 0, v4);
    if ( !v34 )
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  }
  else if ( v34 )
  {
    MiReleaseSpinLockExclusive(v3 + 72, v35);
  }
  return 0LL;
}
