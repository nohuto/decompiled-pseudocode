/*
 * XREFs of MiFlushRelease @ 0x1402594B0
 * Callers:
 *     MmFlushSection @ 0x140208E14 (MmFlushSection.c)
 *     MiFreeOverlappedFlushEntry @ 0x14025943C (MiFreeOverlappedFlushEntry.c)
 *     MmTrimSection @ 0x1404724C4 (MmTrimSection.c)
 *     MiCommitFileBackedSection @ 0x1409147D8 (MiCommitFileBackedSection.c)
 *     MmFlushVirtualMemory @ 0x1409C187C (MmFlushVirtualMemory.c)
 * Callees:
 *     MiControlAreaExemptFromCrossPartitionCharges @ 0x140259B40 (MiControlAreaExemptFromCrossPartitionCharges.c)
 *     MiInsertUnusedSubsection @ 0x140259F70 (MiInsertUnusedSubsection.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14026B278 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x1404C8FF8 (MiComputeCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F781C (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFlushRelease(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  KIRQL v8; // al
  char v9; // bp
  _QWORD *v10; // rbx
  __int64 v11; // r12
  __int64 v12; // r15
  char v13; // bp
  _QWORD *v14; // rbx
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 result; // rax
  __int64 v18; // r8
  ULONG_PTR v19; // r10
  __int64 v20; // r8
  ULONG_PTR v21; // r10
  __int64 v22; // r9
  ULONG *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r9
  ULONG *v26; // rax
  __int64 v27; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  int v29; // r11d
  int v30; // r11d
  __int64 v31; // rax
  int v32; // r11d
  int v33; // r11d
  KIRQL v34; // [rsp+70h] [rbp+8h]
  __int64 v35; // [rsp+78h] [rbp+10h]

  v6 = 0LL;
  v7 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(a1 + 60) & 0x3FF));
  v35 = v7;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v34 = v8;
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
        v22 = 0LL;
        if ( (v9 & 0xC) == 8 && !(unsigned int)MiControlAreaExemptFromCrossPartitionCharges(*v10) )
        {
          if ( (v9 & 0x10) != 0 )
            v23 = 0LL;
          else
            v23 = v9 < 0
                ? &MiSystemPartition
                : (ULONG *)*((_QWORD *)qword_140E300C8
                           + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
          if ( v23 != *((ULONG **)qword_140E300C8 + (*(_WORD *)(v18 + 60) & 0x3FF)) )
          {
            SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v10);
            v29 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences)
                            + 48) & 0x3FFFFFFF;
            if ( v29 != 0x3FFFFFFF )
            {
              MiUpdateSubsectionCrossPartitionRefs(v19, (unsigned int)(v29 - 1));
              if ( v30 == 1 )
                v22 = MiComputeCrossPartitionSectionCharges();
            }
          }
        }
        if ( *(_QWORD *)(v18 + 64) && (*(_DWORD *)(v18 + 56) & 0x20) == 0 && (*(_DWORD *)(v19 + 32) & 0x10000) == 0 )
        {
          v24 = *(_QWORD *)(v19 + 80);
          if ( !v24 )
            KeBugCheckEx(0x1Au, 0x42001uLL, v19, 0LL, 0LL);
          *(_QWORD *)(v19 + 80) = v24 - 1;
        }
        v11 += v22;
        if ( v12 && !v10[10] && (v10[4] & 0x10000) == 0 )
          v11 += MiInsertUnusedSubsection(v10);
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
        v20 = *v14;
        v21 = (ULONG_PTR)v14;
        if ( *(_QWORD *)(*v14 + 64LL) && (*(_DWORD *)(v20 + 56) & 0x20) == 0 && (v14[4] & 0x10000) == 0 && !v14[10] )
          KeBugCheckEx(0x1Au, 0x42001uLL, (ULONG_PTR)v14, 0LL, 0LL);
        v25 = 0LL;
        if ( (v13 & 0xC) == 8 && !(unsigned int)MiControlAreaExemptFromCrossPartitionCharges(*v14) )
        {
          if ( (v13 & 0x10) != 0 )
            v26 = 0LL;
          else
            v26 = v13 < 0
                ? &MiSystemPartition
                : (ULONG *)*((_QWORD *)qword_140E300C8
                           + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
          if ( v26 != *((ULONG **)qword_140E300C8 + (*(_WORD *)(v20 + 60) & 0x3FF)) )
          {
            v31 = MiGetSubsectionHoldingCrossPartitionReferences(v14);
            v32 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(v31) + 48) & 0x3FFFFFFF;
            if ( v32 != 0x3FFFFFFF )
            {
              MiUpdateSubsectionCrossPartitionRefs(v21, (unsigned int)(v32 - 1));
              if ( v33 == 1 )
                v25 = MiComputeCrossPartitionSectionCharges();
            }
          }
        }
        if ( *(_QWORD *)(v20 + 64) && (*(_DWORD *)(v20 + 56) & 0x20) == 0 && (*(_DWORD *)(v21 + 32) & 0x10000) == 0 )
        {
          v27 = *(_QWORD *)(v21 + 80);
          if ( !v27 )
            KeBugCheckEx(0x1Au, 0x42001uLL, v21, 0LL, 0LL);
          *(_QWORD *)(v21 + 80) = v27 - 1;
        }
        v15 += v25;
        if ( v16 && !v14[10] && (v14[4] & 0x10000) == 0 )
          v15 += MiInsertUnusedSubsection(v14);
      }
      if ( v14 == a3 )
        break;
      v14 = (_QWORD *)v14[2];
      if ( !v16 )
        v13 &= ~8u;
    }
    while ( v14 );
    v8 = v34;
    v6 = v15 + v11;
    v7 = v35;
  }
  --*(_QWORD *)(a1 + 40);
  result = MiCheckControlArea(a1, v8);
  if ( v6 )
    return MiReturnCrossPartitionSectionCharges(v7, 1LL, v6);
  return result;
}
