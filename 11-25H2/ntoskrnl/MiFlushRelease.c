/*
 * XREFs of MiFlushRelease @ 0x14035A870
 * Callers:
 *     MmFlushSection @ 0x1402C1F80 (MmFlushSection.c)
 *     MmTrimSection @ 0x1403598AC (MmTrimSection.c)
 *     MiFreeOverlappedFlushEntry @ 0x14035A7F0 (MiFreeOverlappedFlushEntry.c)
 *     MiCommitFileBackedSection @ 0x140939E1C (MiCommitFileBackedSection.c)
 *     MmFlushVirtualMemory @ 0x1409CEA8C (MmFlushVirtualMemory.c)
 * Callees:
 *     MiComputeCrossPartitionSectionCharges @ 0x1402158E0 (MiComputeCrossPartitionSectionCharges.c)
 *     MiCheckControlArea @ 0x14022F1E0 (MiCheckControlArea.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x1402A6600 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiInsertUnusedSubsection @ 0x140322E10 (MiInsertUnusedSubsection.c)
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x14035AF10 (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B9590 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F77BC (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFlushRelease(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  KIRQL v8; // al
  char v9; // r15
  _QWORD *v10; // rbx
  __int64 v11; // r13
  __int64 v12; // r12
  char v13; // r15
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 result; // rax
  __int64 v18; // r8
  ULONG_PTR v19; // r10
  __int64 v20; // r9
  ULONG *v21; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  ULONG_PTR v24; // r10
  __int64 v25; // r9
  ULONG *v26; // rax
  __int64 v27; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  int v29; // r11d
  __int64 *v30; // rcx
  int v31; // r11d
  __int64 v32; // rax
  int v33; // r11d
  __int64 *v34; // rcx
  int v35; // r11d
  KIRQL v36; // [rsp+70h] [rbp+8h]
  __int64 v37; // [rsp+78h] [rbp+10h]

  v6 = 0LL;
  v7 = *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(a1 + 60) & 0x3FF));
  v37 = v7;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v36 = v8;
  if ( a2 )
  {
    v9 = 0;
    v10 = a2;
    v11 = 0LL;
    v12 = *(_QWORD *)(*a2 + 64LL);
    do
    {
      if ( v10[1] )
      {
        v18 = *v10;
        v19 = (ULONG_PTR)v10;
        if ( *(_QWORD *)(*v10 + 64LL) && (*(_DWORD *)(v18 + 56) & 0x20) == 0 && (v10[4] & 0x10000) == 0 && !v10[10] )
          KeBugCheckEx(0x1Au, 0x42001uLL, (ULONG_PTR)v10, 0LL, 0LL);
        v20 = 0LL;
        if ( (v9 & 0xC) == 8 && !(unsigned int)MiControlAreaExemptFromCrossPartitionCharges(*v10) )
        {
          if ( (v9 & 0x10) != 0 )
            v21 = 0LL;
          else
            v21 = v9 < 0
                ? &MiSystemPartition
                : (ULONG *)*((_QWORD *)qword_140E2FD48
                           + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
          if ( v21 != *((ULONG **)qword_140E2FD48 + (*(_WORD *)(v18 + 60) & 0x3FF)) )
          {
            SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences((__int64)v10);
            v29 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences)
                            + 48) & 0x3FFFFFFF;
            if ( v29 != 0x3FFFFFFF )
            {
              MiUpdateSubsectionCrossPartitionRefs(v19, (unsigned int)(v29 - 1));
              if ( v31 == 1 )
                v20 = MiComputeCrossPartitionSectionCharges(v30);
            }
          }
        }
        if ( *(_QWORD *)(v18 + 64) && (*(_DWORD *)(v18 + 56) & 0x20) == 0 && (*(_DWORD *)(v19 + 32) & 0x10000) == 0 )
        {
          v22 = *(_QWORD *)(v19 + 80);
          if ( !v22 )
            KeBugCheckEx(0x1Au, 0x42001uLL, v19, 0LL, 0LL);
          *(_QWORD *)(v19 + 80) = v22 - 1;
        }
        v11 += v20;
        if ( v12 && !v10[10] && (v10[4] & 0x10000) == 0 )
          v11 += MiInsertUnusedSubsection((__int64)v10);
      }
      if ( v10 == a2 )
        break;
      v10 = (_QWORD *)v10[2];
      if ( !v12 )
        v9 &= ~8u;
    }
    while ( v10 );
    v13 = 0;
    v14 = a3;
    v15 = 0LL;
    v16 = *(_QWORD *)(*a3 + 64LL);
    do
    {
      if ( v14[1] )
      {
        v23 = *v14;
        v24 = (ULONG_PTR)v14;
        if ( *(_QWORD *)(*v14 + 64LL) && (*(_DWORD *)(v23 + 56) & 0x20) == 0 && (v14[4] & 0x10000) == 0 && !v14[10] )
          KeBugCheckEx(0x1Au, 0x42001uLL, (ULONG_PTR)v14, 0LL, 0LL);
        v25 = 0LL;
        if ( (v13 & 0xC) == 8 && !(unsigned int)MiControlAreaExemptFromCrossPartitionCharges(*v14) )
        {
          if ( (v13 & 0x10) != 0 )
            v26 = 0LL;
          else
            v26 = v13 < 0
                ? &MiSystemPartition
                : (ULONG *)*((_QWORD *)qword_140E2FD48
                           + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
          if ( v26 != *((ULONG **)qword_140E2FD48 + (*(_WORD *)(v23 + 60) & 0x3FF)) )
          {
            v32 = MiGetSubsectionHoldingCrossPartitionReferences((__int64)v14);
            v33 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(v32) + 48) & 0x3FFFFFFF;
            if ( v33 != 0x3FFFFFFF )
            {
              MiUpdateSubsectionCrossPartitionRefs(v24, (unsigned int)(v33 - 1));
              if ( v35 == 1 )
                v25 = MiComputeCrossPartitionSectionCharges(v34);
            }
          }
        }
        if ( *(_QWORD *)(v23 + 64) && (*(_DWORD *)(v23 + 56) & 0x20) == 0 && (*(_DWORD *)(v24 + 32) & 0x10000) == 0 )
        {
          v27 = *(_QWORD *)(v24 + 80);
          if ( !v27 )
            KeBugCheckEx(0x1Au, 0x42001uLL, v24, 0LL, 0LL);
          *(_QWORD *)(v24 + 80) = v27 - 1;
        }
        v15 += v25;
        if ( v16 && !v14[10] && (v14[4] & 0x10000) == 0 )
          v15 += MiInsertUnusedSubsection((__int64)v14);
      }
      if ( v14 == a3 )
        break;
      v14 = (_QWORD *)v14[2];
      if ( !v16 )
        v13 &= ~8u;
    }
    while ( v14 );
    v8 = v36;
    v6 = v15 + v11;
    v7 = v37;
  }
  --*(_QWORD *)(a1 + 40);
  result = MiCheckControlArea(a1, v8);
  if ( v6 )
    return MiReturnCrossPartitionSectionCharges(v7, 1LL, v6);
  return result;
}
