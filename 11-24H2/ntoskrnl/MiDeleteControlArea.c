/*
 * XREFs of MiDeleteControlArea @ 0x14043F354
 * Callers:
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MiWaitForInPageComplete @ 0x140350CE8 (MiWaitForInPageComplete.c)
 *     MiDeleteControlAreaList @ 0x1403EDEF0 (MiDeleteControlAreaList.c)
 *     MiPrepareToFlushSubsection @ 0x14043F1F4 (MiPrepareToFlushSubsection.c)
 *     MiDereferenceControlAreaProbe @ 0x14043F320 (MiDereferenceControlAreaProbe.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiDecrementSubsectionViewCount @ 0x14025A760 (MiDecrementSubsectionViewCount.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteSubsection @ 0x14043F528 (MiDeleteSubsection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F781C (MiUpdateSubsectionCrossPartitionRefs.c)
 *     MiFreeRelocations @ 0x14093B4DC (MiFreeRelocations.c)
 *     MiDeleteFileExtents @ 0x140A155B8 (MiDeleteFileExtents.c)
 *     SeReleaseImageValidationContext @ 0x140A94A68 (SeReleaseImageValidationContext.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  v4 = *((_QWORD *)qword_140E300C8 + (*((_WORD *)P + 30) & 0x3FF));
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
