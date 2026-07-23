/*
 * XREFs of MiDecrementSubsections @ 0x140259D70
 * Callers:
 *     MiAddViewsForSection @ 0x140336DD0 (MiAddViewsForSection.c)
 *     MmPurgeSection @ 0x1403F06F0 (MmPurgeSection.c)
 *     MiReleaseFaultCharges @ 0x140427624 (MiReleaseFaultCharges.c)
 *     MiUpControlAreaRefs @ 0x1404B355C (MiUpControlAreaRefs.c)
 *     MiUpdateActiveSubsection @ 0x14067A164 (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x140259F70 (MiInsertUnusedSubsection.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14026B278 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x1404C8FF8 (MiComputeCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F781C (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecrementSubsections(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  ULONG_PTR v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v9; // r8
  ULONG_PTR v10; // r10
  __int64 v11; // r9
  ULONG *v12; // rax
  __int64 v13; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  int v15; // r11d
  int v16; // r11d

  v5 = BugCheckParameter2;
  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)BugCheckParameter2 + 64LL);
  do
  {
    if ( *(_QWORD *)(v5 + 8) )
    {
      v9 = *(_QWORD *)v5;
      v10 = v5;
      if ( *(_QWORD *)(*(_QWORD *)v5 + 64LL)
        && (*(_DWORD *)(v9 + 56) & 0x20) == 0
        && (*(_DWORD *)(v5 + 32) & 0x10000) == 0
        && !*(_QWORD *)(v5 + 80) )
      {
        KeBugCheckEx(0x1Au, 0x42001uLL, v5, 0LL, 0LL);
      }
      v11 = 0LL;
      if ( (a3 & 0xC) == 8
        && (*(_BYTE *)(v9 + 62) & 0xC) == 0
        && (*(_QWORD *)(v9 + 64) || (*(_DWORD *)(v9 + 92) & 0x10000) == 0) )
      {
        if ( (a3 & 0x10) != 0 )
          v12 = 0LL;
        else
          v12 = a3 < 0
              ? &MiSystemPartition
              : (ULONG *)*((_QWORD *)qword_140E300C8
                         + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
        if ( v12 != *((ULONG **)qword_140E300C8 + (*(_WORD *)(v9 + 60) & 0x3FF)) )
        {
          SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v5);
          v15 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences)
                          + 48) & 0x3FFFFFFF;
          if ( v15 != 0x3FFFFFFF )
          {
            MiUpdateSubsectionCrossPartitionRefs(v10, (unsigned int)(v15 - 1));
            if ( v16 == 1 )
              v11 = MiComputeCrossPartitionSectionCharges();
          }
        }
      }
      if ( *(_QWORD *)(v9 + 64) && (*(_DWORD *)(v9 + 56) & 0x20) == 0 && (*(_DWORD *)(v10 + 32) & 0x10000) == 0 )
      {
        v13 = *(_QWORD *)(v10 + 80);
        if ( !v13 )
          KeBugCheckEx(0x1Au, 0x42001uLL, v10, 0LL, 0LL);
        *(_QWORD *)(v10 + 80) = v13 - 1;
      }
      v6 += v11;
      if ( v7 && !*(_QWORD *)(v5 + 80) && (*(_DWORD *)(v5 + 32) & 0x10000) == 0 )
        v6 += MiInsertUnusedSubsection(v5);
    }
    if ( v5 == a2 )
      break;
    v5 = *(_QWORD *)(v5 + 16);
    if ( !v7 )
      a3 &= ~8u;
  }
  while ( v5 );
  return v6;
}
