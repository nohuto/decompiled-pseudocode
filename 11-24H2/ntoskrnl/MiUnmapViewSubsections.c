/*
 * XREFs of MiUnmapViewSubsections @ 0x140337FB0
 * Callers:
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x140259F70 (MiInsertUnusedSubsection.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14026B278 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 *     MiReturnCrossPartitionCharges @ 0x140338944 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x1404C8FF8 (MiComputeCrossPartitionSectionCharges.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F781C (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnmapViewSubsections(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v3; // rbp
  BOOL v7; // r12d
  unsigned __int8 CurrentIrql; // r13
  unsigned int v9; // esi
  int i; // edx
  char v11; // si
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v15; // r8
  ULONG_PTR v16; // r10
  __int64 v17; // r9
  ULONG *v18; // rax
  __int64 v19; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  int v21; // r11d
  __int64 v22; // rcx
  int v23; // r11d
  __int64 v24; // rbx
  __int64 v25; // [rsp+88h] [rbp+20h]

  v3 = 0LL;
  v25 = *(_QWORD *)(a1 + 64);
  v7 = v25 != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v9 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 72), 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(a1 + 72), CurrentIrql);
    for ( i = *(_DWORD *)(a1 + 72); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(a1 + 72) )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 72), 0x40000000u);
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v9);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(a1 + 72), CurrentIrql);
  }
  if ( a2 )
  {
    v11 = 8;
    v12 = 0LL;
    v13 = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    do
    {
      if ( *(_QWORD *)(a2 + 8) )
      {
        v15 = *(_QWORD *)a2;
        v16 = a2;
        if ( *(_QWORD *)(*(_QWORD *)a2 + 64LL)
          && (*(_DWORD *)(v15 + 56) & 0x20) == 0
          && (*(_DWORD *)(a2 + 32) & 0x10000) == 0
          && !*(_QWORD *)(a2 + 80) )
        {
          KeBugCheckEx(0x1Au, 0x42001uLL, a2, 0LL, 0LL);
        }
        v17 = 0LL;
        if ( (v11 & 0xC) == 8
          && (*(_BYTE *)(v15 + 62) & 0xC) == 0
          && (*(_QWORD *)(v15 + 64) || (*(_DWORD *)(v15 + 92) & 0x10000) == 0) )
        {
          if ( (v11 & 0x10) != 0 )
            v18 = 0LL;
          else
            v18 = v11 < 0
                ? &MiSystemPartition
                : (ULONG *)*((_QWORD *)qword_140E300C8
                           + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
          if ( v18 != *((ULONG **)qword_140E300C8 + (*(_WORD *)(v15 + 60) & 0x3FF)) )
          {
            SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(a2);
            v21 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences)
                            + 48) & 0x3FFFFFFF;
            if ( v21 != 0x3FFFFFFF )
            {
              MiUpdateSubsectionCrossPartitionRefs(v16, (unsigned int)(v21 - 1));
              if ( v23 == 1 )
                v17 = MiComputeCrossPartitionSectionCharges(v22);
            }
          }
        }
        if ( *(_QWORD *)(v15 + 64) && (*(_DWORD *)(v15 + 56) & 0x20) == 0 && (*(_DWORD *)(v16 + 32) & 0x10000) == 0 )
        {
          v19 = *(_QWORD *)(v16 + 80);
          if ( !v19 )
            KeBugCheckEx(0x1Au, 0x42001uLL, v16, 0LL, 0LL);
          *(_QWORD *)(v16 + 80) = v19 - 1;
        }
        v12 += v17;
        if ( v13 && !*(_QWORD *)(a2 + 80) && (*(_DWORD *)(a2 + 32) & 0x10000) == 0 )
          v12 += MiInsertUnusedSubsection(a2);
      }
      if ( a2 == a3 )
        break;
      a2 = *(_QWORD *)(a2 + 16);
      if ( !v13 )
        v11 &= ~8u;
    }
    while ( a2 );
    v7 = v25 != 0;
    v3 = v12;
  }
  *(__m128i *)(a1 + 40) = _mm_add_epi64(
                            _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff),
                            _mm_loadu_si128((const __m128i *)(a1 + 40)));
  if ( !v3 )
    return MiCheckControlArea(a1, CurrentIrql);
  v24 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(a1 + 60) & 0x3FF));
  MiCheckControlArea(a1, CurrentIrql);
  if ( v25 )
    MiReturnCommit(v24, v3, 0);
  MiReturnResident(v24, v3);
  return MiReturnCrossPartitionCharges(v24, 0LL, v7, v3);
}
