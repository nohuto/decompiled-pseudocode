/*
 * XREFs of MiIncrementSubsectionViewCount @ 0x1402743B0
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x1402703FC (MiPrepareSegmentForDeletion.c)
 *     MiRetainSubsection @ 0x1402723E4 (MiRetainSubsection.c)
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 *     MiCreatePrototypePtes @ 0x1402751A4 (MiCreatePrototypePtes.c)
 *     MmPurgeSection @ 0x1403F06F0 (MmPurgeSection.c)
 *     MiSetSubsectionBase @ 0x14048CB68 (MiSetSubsectionBase.c)
 *     MiExtendSection @ 0x14098A4D8 (MiExtendSection.c)
 * Callees:
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14026B278 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F781C (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiIncrementSubsectionViewCount(__int64 *BugCheckParameter2, __int64 Blink_high)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 SubsectionHoldingCrossPartitionReferences; // rdi
  unsigned int v5; // r15d
  int v6; // ebx
  __int64 v7; // r14
  volatile signed __int32 *v8; // rsi
  unsigned int v9; // ebp
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  _DWORD *v21; // rcx
  char v23; // r11
  ULONG *v24; // rax
  unsigned int v25; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *BugCheckParameter2;
  v3 = (unsigned int)Blink_high;
  SubsectionHoldingCrossPartitionReferences = (__int64)BugCheckParameter2;
  v5 = 2;
  if ( (Blink_high & 8) == 0 )
    goto LABEL_2;
  v23 = *(_BYTE *)(v2 + 62);
  if ( (v23 & 0xC) != 0 || !*(_QWORD *)(v2 + 64) && (*(_DWORD *)(v2 + 92) & 0x10000) != 0 )
    goto LABEL_2;
  if ( (Blink_high & 0x80u) != 0LL )
  {
    v24 = &MiSystemPartition;
  }
  else if ( (Blink_high & 0x10) != 0 )
  {
    v24 = 0LL;
  }
  else
  {
    Blink_high = HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink);
    v24 = (ULONG *)*((_QWORD *)qword_140E300C8 + Blink_high);
  }
  if ( v24 == *((ULONG **)qword_140E300C8 + (*(_WORD *)(v2 + 60) & 0x3FF)) )
    goto LABEL_2;
  if ( (v23 & 1) == 0 || (v3 & 0x100) != 0 )
  {
    SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences((__int64)BugCheckParameter2);
    Blink_high = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences)
                           + 48) & 0x3FFFFFFF;
    if ( (_DWORD)Blink_high != 0x3FFFFFFF )
    {
      if ( !(_DWORD)Blink_high )
      {
        if ( (v3 & 0x20) == 0 )
          return 1LL;
        v5 = 3;
      }
      MiUpdateSubsectionCrossPartitionRefs(SubsectionHoldingCrossPartitionReferences, (unsigned int)(Blink_high + 1));
    }
LABEL_2:
    if ( (*(_DWORD *)(v2 + 56) & 0x20) != 0 || !*(_QWORD *)(v2 + 64) )
      return v5;
    v6 = *(_DWORD *)(SubsectionHoldingCrossPartitionReferences + 32);
    if ( (v6 & 0x80000) == 0 )
    {
LABEL_22:
      if ( (v6 & 0x10000) == 0
        && (++*(_QWORD *)(SubsectionHoldingCrossPartitionReferences + 80) & 0x7FFFFFFFFFFFFFFFLL) == 0 )
      {
        KeBugCheckEx(0x1Au, 0x42000uLL, SubsectionHoldingCrossPartitionReferences, 0LL, 0LL);
      }
      return v5;
    }
    v7 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(*(_QWORD *)SubsectionHoldingCrossPartitionReferences + 60LL) & 0x3FF));
    v8 = (volatile signed __int32 *)(v7 + 1728);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v9 = 0;
      if ( _interlockedbittestandset(v8, 0x1Fu) )
      {
        LOBYTE(Blink_high) = -1;
        v9 = ExpWaitForSpinLockExclusiveAndAcquire(v7 + 1728, Blink_high);
      }
      v10 = *(unsigned int *)v8;
      v11 = v10 & 0xFFFFFFFFBFFFFFFFuLL;
      if ( (v10 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v10 & 0x40000000) == 0 )
            _InterlockedOr(v8, 0x40000000u);
          if ( (++v9 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11, v10, v2, v3) )
          {
            HvlNotifyLongSpinWait(v9);
          }
          else
          {
            _mm_pause();
          }
          v10 = *(unsigned int *)v8;
        }
        while ( (*v8 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    else
    {
      LOBYTE(Blink_high) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v7 + 1728, Blink_high);
    }
    v12 = *(_DWORD *)(SubsectionHoldingCrossPartitionReferences + 32);
    v13 = (_QWORD *)(SubsectionHoldingCrossPartitionReferences + 88);
    v14 = *(_QWORD *)(SubsectionHoldingCrossPartitionReferences + 88);
    if ( *(_QWORD *)(v14 + 8) != SubsectionHoldingCrossPartitionReferences + 88
      || (v15 = *(_QWORD **)(SubsectionHoldingCrossPartitionReferences + 96), (_QWORD *)*v15 != v13) )
    {
      __fastfail(3u);
    }
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    *(_DWORD *)(SubsectionHoldingCrossPartitionReferences + 32) = v12 & 0xFFF7FFFF;
    *(_QWORD *)(SubsectionHoldingCrossPartitionReferences + 96) = SubsectionHoldingCrossPartitionReferences + 88;
    *v13 = v13;
    v16 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(*(_QWORD *)SubsectionHoldingCrossPartitionReferences + 60LL) & 0x3FF));
    v17 = *(unsigned int *)(SubsectionHoldingCrossPartitionReferences + 44);
    v18 = 8 * v17;
    if ( (unsigned __int64)(8 * v17) > 0xFE0 )
    {
      v25 = (8 * (_WORD)v17) & 0xFFF;
      if ( v18 >= 0x10000 || v25 > 0xFC0 )
      {
        v20 = (v18 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_20;
      }
      v19 = v18 + 15;
    }
    else
    {
      v19 = v18 + 31;
    }
    v20 = v19 & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_20:
    _InterlockedAdd64(&qword_140E2CD58, -(__int64)v20);
    *(_QWORD *)(v16 + 2088) -= v20;
    v21 = (_DWORD *)(v7 + 1728);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v21 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v21, retaddr);
    goto LABEL_22;
  }
  ++dword_140E300D0;
  return 0LL;
}
