/*
 * XREFs of MiReferenceActiveSubsection @ 0x1403374A0
 * Callers:
 *     MiAddViewsForSection @ 0x140336DD0 (MiAddViewsForSection.c)
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     MiUpControlAreaRefs @ 0x1404B355C (MiUpControlAreaRefs.c)
 *     MiMapImageInSystemSpace @ 0x14093E220 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiGetCommittedPages @ 0x140204018 (MiGetCommittedPages.c)
 *     MiGetCrossPartitionCharges @ 0x140269C84 (MiGetCrossPartitionCharges.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14026B278 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiReturnCrossPartitionCharges @ 0x140338944 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     MiUnlinkUnusedSubsection @ 0x140338CE4 (MiUnlinkUnusedSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14033DD30 (MiChargeResident.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x1404C8FF8 (MiComputeCrossPartitionSectionCharges.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F781C (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReferenceActiveSubsection(_QWORD *BugCheckParameter2, int a2, unsigned __int8 a3)
{
  __int64 v3; // rsi
  __int64 v4; // r13
  KIRQL v5; // r15
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 SubsectionHoldingCrossPartitionReferences; // r15
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
  __int64 v22; // r9
  int CrossPartitionCharges; // r15d
  unsigned __int8 CurrentIrql; // si
  unsigned int v25; // edi
  volatile LONG i; // edx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // [rsp+30h] [rbp-68h]
  int v30; // [rsp+38h] [rbp-60h]
  __int64 v31; // [rsp+40h] [rbp-58h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  int v33; // [rsp+A8h] [rbp+10h]
  unsigned __int8 v34; // [rsp+B0h] [rbp+18h]

  v34 = a3;
  v3 = *BugCheckParameter2;
  v4 = 0LL;
  v33 = 0;
  v5 = a3;
  v29 = *BugCheckParameter2;
  v31 = *(_QWORD *)(*BugCheckParameter2 + 64LL);
  if ( a3 == 17 )
  {
    v33 = 1;
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    v34 = v5;
  }
  v30 = 2;
  while ( 1 )
  {
    v8 = *BugCheckParameter2;
    if ( BugCheckParameter2[1] )
      break;
LABEL_32:
    if ( (a2 & 0x20) != 0 )
    {
      MiReleaseSpinLockExclusive((_DWORD *)(v3 + 72), v5);
      MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E300C8 + (*(_WORD *)(v3 + 60) & 0x3FF)), v31 != 0, v4);
      if ( !v33 )
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
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v3 + 72), retaddr);
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v19 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v3 + 72), retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
        __writecr8(v5);
      }
      v20 = *(_QWORD *)(*BugCheckParameter2 + 64LL);
      v21 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(*BugCheckParameter2 + 60LL) & 0x3FF));
      CrossPartitionCharges = MiGetCrossPartitionCharges(v21, 0, v20 != 0, v4);
      if ( CrossPartitionCharges < 0 )
        goto LABEL_41;
      if ( v20 && !(unsigned int)MiChargeCommit(v21, v4, 0LL, v22) )
      {
        MiReturnCrossPartitionCharges(v21, 0LL, v20 != 0, v4);
        CrossPartitionCharges = -1073741523;
LABEL_41:
        if ( !v33 )
          ExAcquireSpinLockExclusive(v19);
        return (unsigned int)CrossPartitionCharges;
      }
      if ( !(unsigned int)MiChargeResident(v21, v4, 0LL) )
      {
        if ( v20 )
          MiReturnCommit(v21, v4, 0);
        MiReturnCrossPartitionCharges(v21, 0LL, v20 != 0, v4);
        CrossPartitionCharges = -1073741801;
        goto LABEL_41;
      }
      a2 |= 0x20u;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v25 = 0;
        if ( _interlockedbittestandset(v19, 0x1Fu) )
          v25 = ExpWaitForSpinLockExclusiveAndAcquire((int *)v19, CurrentIrql);
        for ( i = *v19; (*v19 & 0xBFFFFFFF) != 0x80000000; i = *v19 )
        {
          if ( (i & 0x40000000) == 0 )
            _InterlockedOr(v19, 0x40000000u);
          if ( (++v25 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v25);
          }
          else
          {
            _mm_pause();
          }
        }
      }
      else
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)v19, CurrentIrql);
      }
      v3 = v29;
      v5 = v34;
      if ( (*(_DWORD *)(v29 + 56) & 0x20) == 0 )
      {
        if ( v31 )
        {
          if ( !BugCheckParameter2[1]
            || v4 != *((_DWORD *)BugCheckParameter2 + 11) - (*((_DWORD *)BugCheckParameter2 + 13) & 0x3FFFFFFF) )
          {
LABEL_76:
            ExReleaseSpinLockExclusiveFromDpcLevel(v19);
            if ( v34 != 17 )
            {
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v34);
              __writecr8(v34);
            }
            v27 = *(_WORD *)(v29 + 60) & 0x3FF;
            v28 = *((_QWORD *)qword_140E300C8 + v27);
            if ( v31 )
              MiReturnCommit(*((_QWORD *)qword_140E300C8 + v27), v4, 0);
            MiReturnResident(v28, v4);
            MiReturnCrossPartitionCharges(v28, 0LL, v31 != 0, v4);
            if ( !v33 )
              ExAcquireSpinLockExclusive(v19);
            return 3221225994LL;
          }
          v5 = v34;
        }
        else
        {
          if ( v4 != MiGetCommittedPages((_QWORD *)v29) )
            goto LABEL_76;
          v5 = v34;
        }
      }
    }
    else
    {
      a2 |= 0x20u;
    }
  }
  v9 = *(_QWORD *)(v8 + 64);
  SubsectionHoldingCrossPartitionReferences = (__int64)BugCheckParameter2;
  if ( (a2 & 8) == 0
    || (v15 = *(_BYTE *)(v8 + 62), (v15 & 0xC) != 0)
    || !v9 && (*(_DWORD *)(v8 + 92) & 0x10000) != 0
    || ((a2 & 0x80u) != 0
      ? (v16 = &MiSystemPartition)
      : (a2 & 0x10) != 0
      ? (v16 = 0LL)
      : (v16 = (ULONG *)*((_QWORD *)qword_140E300C8
                        + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink))),
        v16 == *((ULONG **)qword_140E300C8 + (*(_WORD *)(v8 + 60) & 0x3FF))) )
  {
LABEL_6:
    v11 = 2;
    goto LABEL_7;
  }
  if ( (v15 & 1) != 0 && (a2 & 0x100) == 0 )
  {
    ++dword_140E300D0;
    v18 = 0;
    goto LABEL_30;
  }
  SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences((__int64)BugCheckParameter2);
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
      if ( v33 )
        MiReleaseSpinLockExclusive((_DWORD *)(v3 + 72), v34);
      return 3221227019LL;
    }
    v5 = v34;
    goto LABEL_32;
  }
  v30 = 3;
LABEL_108:
  MiUpdateSubsectionCrossPartitionRefs(SubsectionHoldingCrossPartitionReferences, (unsigned int)(v17 + 1));
LABEL_7:
  if ( (*(_DWORD *)(v8 + 56) & 0x20) == 0 && *(_QWORD *)(v8 + 64) )
  {
    v12 = *(_DWORD *)(SubsectionHoldingCrossPartitionReferences + 32);
    if ( (v12 & 0x80000) != 0 )
    {
      v13 = *((_QWORD *)qword_140E300C8
            + (*(_WORD *)(*(_QWORD *)SubsectionHoldingCrossPartitionReferences + 60LL) & 0x3FF));
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v13 + 1728));
      MiUnlinkUnusedSubsection(SubsectionHoldingCrossPartitionReferences);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v13 + 1728));
      v11 = v30;
      v3 = v29;
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
    MiReleaseSpinLockExclusive((_DWORD *)(v3 + 72), v34);
    MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E300C8 + (*(_WORD *)(v3 + 60) & 0x3FF)), v31 != 0, v4);
    if ( !v33 )
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  }
  else if ( v33 )
  {
    MiReleaseSpinLockExclusive((_DWORD *)(v3 + 72), v34);
  }
  return 0LL;
}
