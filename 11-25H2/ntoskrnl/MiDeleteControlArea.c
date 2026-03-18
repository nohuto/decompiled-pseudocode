/*
 * XREFs of MiDeleteControlArea @ 0x14043A3F8
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 *     MiPrepareToFlushSubsection @ 0x140439A60 (MiPrepareToFlushSubsection.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiDereferenceControlAreaProbe @ 0x14043A3C4 (MiDereferenceControlAreaProbe.c)
 *     MiDeleteControlAreaList @ 0x140459604 (MiDeleteControlAreaList.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiDecrementSubsectionViewCount @ 0x14033F740 (MiDecrementSubsectionViewCount.c)
 *     MiDeleteSubsection @ 0x14043A5CC (MiDeleteSubsection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B9590 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F77BC (MiUpdateSubsectionCrossPartitionRefs.c)
 *     MiFreeRelocations @ 0x14094288C (MiFreeRelocations.c)
 *     MiDeleteFileExtents @ 0x140A15960 (MiDeleteFileExtents.c)
 *     SeReleaseImageValidationContext @ 0x140A94118 (SeReleaseImageValidationContext.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteControlArea(PVOID P)
{
  int v2; // ecx
  __int64 v3; // r12
  __int64 v4; // r15
  _QWORD *v5; // rdx
  volatile signed __int64 *v6; // rbx
  __int64 v7; // rbp
  int v8; // ebx
  __int64 v9; // r13
  unsigned __int64 v10; // rdi
  KIRQL v11; // di

  v2 = *((_DWORD *)P + 14);
  v3 = 0LL;
  v4 = *((_QWORD *)qword_140E2FD48 + (*((_WORD *)P + 30) & 0x3FF));
  v5 = (_QWORD *)(v4 + 1736);
  v6 = (volatile signed __int64 *)(v4 + 1736);
  if ( (v2 & 0x20) != 0 )
  {
    v10 = *((_QWORD *)P + 12) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (*(_QWORD *)(v10 + 40) & 0xFFFFFFFFFFFFFFF8uLL) > 0x7FFFFFFFFFFFFFF8LL )
      SeReleaseImageValidationContext(*(_QWORD *)(v10 + 40) & 0xFFFFFFFFFFFFFFF8uLL);
    MiFreeRelocations(P, *(_QWORD *)(v10 + 32));
    goto LABEL_12;
  }
  if ( (v2 & 0x80u) == 0 )
  {
    v6 = (volatile signed __int64 *)(v4 + 1744);
    goto LABEL_4;
  }
  v7 = *((_QWORD *)P + 18);
  if ( v7 )
  {
    do
    {
      v8 = *(_DWORD *)(v7 + 32);
      v9 = *(_QWORD *)(v7 + 16);
      if ( (v8 & 0x10000) != 0 && (*(_DWORD *)(v7 + 48) & 0x3FFFFFFF) != 0 )
      {
        MiUpdateSubsectionCrossPartitionRefs(v7, 1LL);
        v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)P + 18);
        v3 += MiDecrementSubsectionViewCount((__int64 *)v7, 24);
        MiReleaseSpinLockExclusive((_DWORD *)P + 18, v11);
        *(_DWORD *)(v7 + 32) = v8 & 0xFFFEFFFF;
      }
      MiDeleteSubsection(v7);
      v7 = v9;
    }
    while ( v9 );
    v6 = (volatile signed __int64 *)(v4 + 1736);
    if ( v3 )
      MiReturnCrossPartitionSectionCharges(v4, 1LL, v3);
LABEL_12:
    v5 = (_QWORD *)(v4 + 1736);
  }
LABEL_4:
  if ( _InterlockedDecrement64(v6) <= -1 )
    __fastfail(0xEu);
  if ( !*v5 && !*(_QWORD *)(v4 + 1744) )
    KeSetEvent(*(PRKEVENT *)(v4 + 2768), 0, 0);
  MiDeleteFileExtents(P);
  ExFreePoolWithTag(*(PVOID *)P, 0);
  ExFreePoolWithTag(P, 0);
}
