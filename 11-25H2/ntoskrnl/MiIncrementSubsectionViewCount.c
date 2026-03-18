/*
 * XREFs of MiIncrementSubsectionViewCount @ 0x1402A7470
 * Callers:
 *     MiCreatePrototypePtes @ 0x1402A6EE0 (MiCreatePrototypePtes.c)
 *     MmPurgeSection @ 0x1402C5AB8 (MmPurgeSection.c)
 *     MiFlushSection @ 0x14033E540 (MiFlushSection.c)
 *     MiPrepareSegmentForDeletion @ 0x140418F34 (MiPrepareSegmentForDeletion.c)
 *     MiRetainSubsection @ 0x14046FBAC (MiRetainSubsection.c)
 *     MiSetSubsectionBase @ 0x140492A20 (MiSetSubsectionBase.c)
 *     MiExtendSection @ 0x14093B140 (MiExtendSection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402120E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402121B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x1402A6600 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F77BC (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiIncrementSubsectionViewCount(__int64 *BugCheckParameter2, __int16 a2)
{
  __int64 v2; // r8
  __int64 SubsectionHoldingCrossPartitionReferences; // rdi
  unsigned int v4; // r15d
  int v5; // ebx
  __int64 v6; // r14
  volatile signed __int32 *v7; // rsi
  unsigned int v8; // ebp
  volatile signed __int32 v9; // edx
  __int64 v10; // rcx
  int v11; // eax
  _QWORD *v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  _DWORD *v20; // rcx
  char v22; // r11
  ULONG *v23; // rax
  int v24; // edx
  char v25; // r9
  unsigned int v26; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *BugCheckParameter2;
  SubsectionHoldingCrossPartitionReferences = (__int64)BugCheckParameter2;
  v4 = 2;
  if ( (a2 & 8) == 0 )
    goto LABEL_2;
  v22 = *(_BYTE *)(v2 + 62);
  if ( (v22 & 0xC) != 0 || !*(_QWORD *)(v2 + 64) && (*(_DWORD *)(v2 + 92) & 0x10000) != 0 )
    goto LABEL_2;
  if ( (a2 & 0x80u) != 0 )
    v23 = &MiSystemPartition;
  else
    v23 = (a2 & 0x10) != 0
        ? 0LL
        : (ULONG *)*((_QWORD *)qword_140E2FD48 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
  if ( v23 == *((ULONG **)qword_140E2FD48 + (*(_WORD *)(v2 + 60) & 0x3FF)) )
    goto LABEL_2;
  if ( (v22 & 1) == 0 || (a2 & 0x100) != 0 )
  {
    SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences((__int64)BugCheckParameter2);
    v24 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF;
    if ( v24 != 0x3FFFFFFF )
    {
      if ( !v24 )
      {
        if ( (v25 & 0x20) == 0 )
          return 1LL;
        v4 = 3;
      }
      MiUpdateSubsectionCrossPartitionRefs(SubsectionHoldingCrossPartitionReferences, (unsigned int)(v24 + 1));
    }
LABEL_2:
    if ( (*(_DWORD *)(v2 + 56) & 0x20) != 0 || !*(_QWORD *)(v2 + 64) )
      return v4;
    v5 = *(_DWORD *)(SubsectionHoldingCrossPartitionReferences + 32);
    if ( (v5 & 0x80000) == 0 )
    {
LABEL_22:
      if ( (v5 & 0x10000) == 0
        && (++*(_QWORD *)(SubsectionHoldingCrossPartitionReferences + 80) & 0x7FFFFFFFFFFFFFFFLL) == 0 )
      {
        KeBugCheckEx(0x1Au, 0x42000uLL, SubsectionHoldingCrossPartitionReferences, 0LL, 0LL);
      }
      return v4;
    }
    v6 = *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(*(_QWORD *)SubsectionHoldingCrossPartitionReferences + 60LL) & 0x3FF));
    v7 = (volatile signed __int32 *)(v6 + 1728);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v8 = 0;
      if ( _interlockedbittestandset(v7, 0x1Fu) )
        v8 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(v6 + 1728), 0xFFu);
      v9 = *v7;
      v10 = *(unsigned int *)v7;
      LODWORD(v10) = v10 & 0xBFFFFFFF;
      if ( (_DWORD)v10 != 0x80000000 )
      {
        do
        {
          if ( (v9 & 0x40000000) == 0 )
            _InterlockedOr(v7, 0x40000000u);
          if ( (++v8 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10) )
          {
            HvlNotifyLongSpinWait(v8);
          }
          else
          {
            _mm_pause();
          }
          v9 = *v7;
        }
        while ( (*v7 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(v6 + 1728), 0xFFu);
    }
    v11 = *(_DWORD *)(SubsectionHoldingCrossPartitionReferences + 32);
    v12 = (_QWORD *)(SubsectionHoldingCrossPartitionReferences + 88);
    v13 = *(_QWORD *)(SubsectionHoldingCrossPartitionReferences + 88);
    if ( *(_QWORD *)(v13 + 8) != SubsectionHoldingCrossPartitionReferences + 88
      || (v14 = *(_QWORD **)(SubsectionHoldingCrossPartitionReferences + 96), (_QWORD *)*v14 != v12) )
    {
      __fastfail(3u);
    }
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    *(_DWORD *)(SubsectionHoldingCrossPartitionReferences + 32) = v11 & 0xFFF7FFFF;
    *(_QWORD *)(SubsectionHoldingCrossPartitionReferences + 96) = SubsectionHoldingCrossPartitionReferences + 88;
    *v12 = v12;
    v15 = *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(*(_QWORD *)SubsectionHoldingCrossPartitionReferences + 60LL) & 0x3FF));
    v16 = *(unsigned int *)(SubsectionHoldingCrossPartitionReferences + 44);
    v17 = 8 * v16;
    if ( (unsigned __int64)(8 * v16) > 0xFE0 )
    {
      v26 = (8 * (_WORD)v16) & 0xFFF;
      if ( v17 >= 0x10000 || v26 > 0xFC0 )
      {
        v19 = (v17 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_20;
      }
      v18 = v17 + 15;
    }
    else
    {
      v18 = v17 + 31;
    }
    v19 = v18 & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_20:
    _InterlockedAdd64(&qword_140E2C9D8, -(__int64)v19);
    *(_QWORD *)(v15 + 2088) -= v19;
    v20 = (_DWORD *)(v6 + 1728);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v20 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v20, retaddr);
    goto LABEL_22;
  }
  ++dword_140E2FD50;
  return 0LL;
}
