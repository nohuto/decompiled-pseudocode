/*
 * XREFs of MiReturnCrossPartitionControlAreaCharges @ 0x1404CBB78
 * Callers:
 *     MiRemoveMappedPtes @ 0x1402A9320 (MiRemoveMappedPtes.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x140943ED0 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x140944164 (MiUnmapImageInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiDecrementSubsectionViewCount @ 0x14033F740 (MiDecrementSubsectionViewCount.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B9590 (MiReturnCrossPartitionSectionCharges.c)
 */

LONG __fastcall MiReturnCrossPartitionControlAreaCharges(__int64 a1)
{
  __int64 v1; // r14
  KIRQL v3; // bl
  unsigned __int64 v4; // rbp
  LONG result; // eax
  int v6; // edx

  v1 = *(_QWORD *)(a1 + 64);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v4 = MiDecrementSubsectionViewCount((__int64 *)(a1 + 128), 24);
  result = MiReleaseSpinLockExclusive((_DWORD *)(a1 + 72), v3);
  v6 = 0;
  if ( v4 )
  {
    LOBYTE(v6) = v1 != 0;
    return MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E2FD48 + (*(_WORD *)(a1 + 60) & 0x3FF)), v6, v4);
  }
  return result;
}
