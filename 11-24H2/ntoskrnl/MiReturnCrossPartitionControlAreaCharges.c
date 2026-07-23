/*
 * XREFs of MiReturnCrossPartitionControlAreaCharges @ 0x1404C4F4C
 * Callers:
 *     MiRemoveMappedPtes @ 0x1402915D0 (MiRemoveMappedPtes.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiMapImageInSystemSpace @ 0x14093E220 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14093E4B4 (MiUnmapImageInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x14025A760 (MiDecrementSubsectionViewCount.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
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
    return MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E300C8 + (*(_WORD *)(a1 + 60) & 0x3FF)), v6, v4);
  }
  return result;
}
