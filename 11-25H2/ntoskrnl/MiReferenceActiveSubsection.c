/*
 * XREFs of MiReferenceActiveSubsection @ 0x1402140B0
 * Callers:
 *     MiAddViewsForSection @ 0x140213970 (MiAddViewsForSection.c)
 *     MiInsertInSystemSpace @ 0x1402A4B54 (MiInsertInSystemSpace.c)
 *     MiUpControlAreaRefs @ 0x1404B95EC (MiUpControlAreaRefs.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x140943ED0 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiComputeCrossPartitionSectionCharges @ 0x1402158E0 (MiComputeCrossPartitionSectionCharges.c)
 *     MiGetCrossPartitionCharges @ 0x140215920 (MiGetCrossPartitionCharges.c)
 *     MiGetCommittedPages @ 0x140215A04 (MiGetCommittedPages.c)
 *     MiChargeResident @ 0x14022CAE0 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x14022F804 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x1402A6600 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedSubsection @ 0x14031F694 (MiUnlinkUnusedSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B9590 (MiReturnCrossPartitionSectionCharges.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F77BC (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReferenceActiveSubsection(_QWORD *BugCheckParameter2, int a2, KIRQL a3)
{
  __int64 v3; // rsi
  __int64 v4; // r13
  KIRQL v5; // r15
  __int64 v8; // rbp
  __int64 v9; // r15
  ULONG_PTR SubsectionHoldingCrossPartitionReferences; // r14
  int v11; // r9d
  int v12; // ebx
  __int64 v13; // rsi
  char v15; // r8
  ULONG *v16; // rax
  int v17; // edx
  int v18; // eax
  volatile LONG *v19; // rbx
  __int64 v20; // r14
  __int64 v21; // rbp
  __int64 v22; // r9
  int CrossPartitionCharges; // r15d
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v29; // [rsp+98h] [rbp+10h]
  KIRQL v30; // [rsp+A0h] [rbp+18h]
  int v31; // [rsp+A8h] [rbp+20h]

  v30 = a3;
  v3 = *BugCheckParameter2;
  v4 = 0LL;
  v29 = 0;
  v5 = a3;
  v26 = *BugCheckParameter2;
  v27 = *(_QWORD *)(*BugCheckParameter2 + 64LL);
  if ( a3 == 17 )
  {
    v29 = 1;
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    v30 = v5;
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
      MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E2FD48 + (*(_WORD *)(v3 + 60) & 0x3FF)), v27 != 0, v4);
      if ( !v29 )
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
      v21 = *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(*BugCheckParameter2 + 60LL) & 0x3FF));
      CrossPartitionCharges = MiGetCrossPartitionCharges(v21, 0LL, v20 != 0, v4);
      if ( CrossPartitionCharges < 0 )
        goto LABEL_41;
      if ( v20 && !(unsigned int)MiChargeCommit(v21, v4, 0LL, v22) )
      {
        MiReturnCrossPartitionCharges(v21, 0LL, v20 != 0, v4);
        CrossPartitionCharges = -1073741523;
LABEL_41:
        if ( !v29 )
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
      ExAcquireSpinLockExclusive(v19);
      v3 = v26;
      v5 = v30;
      if ( (*(_DWORD *)(v26 + 56) & 0x20) == 0 )
      {
        if ( v27 )
        {
          if ( !BugCheckParameter2[1]
            || v4 != *((_DWORD *)BugCheckParameter2 + 11) - (*((_DWORD *)BugCheckParameter2 + 13) & 0x3FFFFFFF) )
          {
LABEL_65:
            ExReleaseSpinLockExclusiveFromDpcLevel(v19);
            if ( v30 != 17 )
            {
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v30);
              __writecr8(v30);
            }
            v24 = *(_WORD *)(v26 + 60) & 0x3FF;
            v25 = *((_QWORD *)qword_140E2FD48 + v24);
            if ( v27 )
              MiReturnCommit(*((_QWORD *)qword_140E2FD48 + v24), v4, 0LL);
            MiReturnResident(v25);
            MiReturnCrossPartitionCharges(v25, 0LL, v27 != 0, v4);
            if ( !v29 )
              ExAcquireSpinLockExclusive(v19);
            return 3221225994LL;
          }
          v5 = v30;
        }
        else
        {
          if ( v4 != MiGetCommittedPages(v26) )
            goto LABEL_65;
          v5 = v30;
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
      : (v16 = (ULONG *)*((_QWORD *)qword_140E2FD48
                        + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink))),
        v16 == *((ULONG **)qword_140E2FD48 + (*(_WORD *)(v8 + 60) & 0x3FF))) )
  {
LABEL_6:
    v11 = 2;
    goto LABEL_7;
  }
  if ( (v15 & 1) != 0 && (a2 & 0x100) == 0 )
  {
    ++dword_140E2FD50;
    v18 = 0;
    goto LABEL_30;
  }
  SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(BugCheckParameter2);
  v17 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF;
  if ( v17 == 0x3FFFFFFF )
    goto LABEL_6;
  if ( v17 )
    goto LABEL_92;
  if ( (a2 & 0x20) == 0 )
  {
    v18 = 1;
LABEL_30:
    if ( !v18 )
    {
      if ( v29 )
        MiReleaseSpinLockExclusive(v3 + 72, v30);
      return 3221227019LL;
    }
    v5 = v30;
    goto LABEL_32;
  }
  v31 = 3;
LABEL_92:
  MiUpdateSubsectionCrossPartitionRefs(SubsectionHoldingCrossPartitionReferences, (unsigned int)(v17 + 1));
LABEL_7:
  if ( (*(_DWORD *)(v8 + 56) & 0x20) == 0 && *(_QWORD *)(v8 + 64) )
  {
    v12 = *(_DWORD *)(SubsectionHoldingCrossPartitionReferences + 32);
    if ( (v12 & 0x80000) != 0 )
    {
      v13 = *((_QWORD *)qword_140E2FD48
            + (*(_WORD *)(*(_QWORD *)SubsectionHoldingCrossPartitionReferences + 60LL) & 0x3FF));
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v13 + 1728));
      MiUnlinkUnusedSubsection(SubsectionHoldingCrossPartitionReferences);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v13 + 1728));
      v11 = v31;
      v3 = v26;
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
    MiReleaseSpinLockExclusive(v3 + 72, v30);
    MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E2FD48 + (*(_WORD *)(v3 + 60) & 0x3FF)), v27 != 0, v4);
    if ( !v29 )
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  }
  else if ( v29 )
  {
    MiReleaseSpinLockExclusive(v3 + 72, v30);
  }
  return 0LL;
}
