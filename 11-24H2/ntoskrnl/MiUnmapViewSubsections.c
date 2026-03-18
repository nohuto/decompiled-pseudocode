/*
 * XREFs of MiUnmapViewSubsections @ 0x14020EC50
 * Callers:
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiCheckControlArea @ 0x14020EFD0 (MiCheckControlArea.c)
 *     MiReturnCrossPartitionCharges @ 0x14020F5E4 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14036F2F8 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x14036F3BC (MiComputeCrossPartitionSectionCharges.c)
 *     MiInsertUnusedSubsection @ 0x140371BB0 (MiInsertUnusedSubsection.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F9F3C (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnmapViewSubsections(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v3; // rbp
  BOOL v7; // r12d
  unsigned __int8 CurrentIrql; // r13
  unsigned int v9; // esi
  unsigned int v10; // edx
  __int64 v11; // rcx
  char v12; // si
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v16; // r8
  ULONG_PTR v17; // r10
  __int64 v18; // r9
  ULONG *v19; // rax
  __int64 v20; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  int v22; // r11d
  __int64 v23; // rcx
  int v24; // r11d
  __int64 v25; // rbx
  __int64 v26; // [rsp+88h] [rbp+20h]

  v3 = 0LL;
  v26 = *(_QWORD *)(a1 + 64);
  v7 = v26 != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, a3);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v9 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 72), 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(a1 + 72), CurrentIrql, a3);
    v10 = *(_DWORD *)(a1 + 72);
    v11 = v10;
    for ( LODWORD(v11) = v10 & 0xBFFFFFFF; (v10 & 0xBFFFFFFF) != 0x80000000; v10 = *(_DWORD *)(a1 + 72) )
    {
      if ( (v10 & 0x40000000) == 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 72), 0x40000000u);
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11) )
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
    v12 = 8;
    v13 = 0LL;
    v14 = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    do
    {
      if ( *(_QWORD *)(a2 + 8) )
      {
        v16 = *(_QWORD *)a2;
        v17 = a2;
        if ( *(_QWORD *)(*(_QWORD *)a2 + 64LL)
          && (*(_DWORD *)(v16 + 56) & 0x20) == 0
          && (*(_DWORD *)(a2 + 32) & 0x10000) == 0
          && !*(_QWORD *)(a2 + 80) )
        {
          KeBugCheckEx(0x1Au, 0x42001uLL, a2, 0LL, 0LL);
        }
        v18 = 0LL;
        if ( (v12 & 0xC) == 8
          && (*(_BYTE *)(v16 + 62) & 0xC) == 0
          && (*(_QWORD *)(v16 + 64) || (*(_DWORD *)(v16 + 92) & 0x10000) == 0) )
        {
          if ( (v12 & 0x10) != 0 )
            v19 = 0LL;
          else
            v19 = v12 < 0
                ? &MiSystemPartition
                : (ULONG *)*((_QWORD *)qword_140E2FF88
                           + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
          if ( v19 != *((ULONG **)qword_140E2FF88 + (*(_WORD *)(v16 + 60) & 0x3FF)) )
          {
            SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(a2);
            v22 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences)
                            + 48) & 0x3FFFFFFF;
            if ( v22 != 0x3FFFFFFF )
            {
              MiUpdateSubsectionCrossPartitionRefs(v17, (unsigned int)(v22 - 1));
              if ( v24 == 1 )
                v18 = MiComputeCrossPartitionSectionCharges(v23);
            }
          }
        }
        if ( *(_QWORD *)(v16 + 64) && (*(_DWORD *)(v16 + 56) & 0x20) == 0 && (*(_DWORD *)(v17 + 32) & 0x10000) == 0 )
        {
          v20 = *(_QWORD *)(v17 + 80);
          if ( !v20 )
            KeBugCheckEx(0x1Au, 0x42001uLL, v17, 0LL, 0LL);
          *(_QWORD *)(v17 + 80) = v20 - 1;
        }
        v13 += v18;
        if ( v14 && !*(_QWORD *)(a2 + 80) && (*(_DWORD *)(a2 + 32) & 0x10000) == 0 )
          v13 += MiInsertUnusedSubsection(a2);
      }
      if ( a2 == a3 )
        break;
      a2 = *(_QWORD *)(a2 + 16);
      if ( !v14 )
        v12 &= ~8u;
    }
    while ( a2 );
    v7 = v26 != 0;
    v3 = v13;
  }
  *(__m128i *)(a1 + 40) = _mm_add_epi64(
                            _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff),
                            _mm_loadu_si128((const __m128i *)(a1 + 40)));
  if ( !v3 )
    return MiCheckControlArea(a1, CurrentIrql);
  v25 = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(a1 + 60) & 0x3FF));
  MiCheckControlArea(a1, CurrentIrql);
  if ( v26 )
    MiReturnCommit(v25, v3, 0LL);
  MiReturnResident(v25, v3);
  return MiReturnCrossPartitionCharges(v25, 0LL, v7, v3);
}
