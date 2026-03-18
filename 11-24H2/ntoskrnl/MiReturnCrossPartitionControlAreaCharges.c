/*
 * XREFs of MiReturnCrossPartitionControlAreaCharges @ 0x1404CBAD0
 * Callers:
 *     MiRemoveMappedPtes @ 0x140260FC0 (MiRemoveMappedPtes.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 *     MiMapImageInSystemSpace @ 0x1408F5378 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1408F560C (MiUnmapImageInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementSubsectionViewCount @ 0x140371EA0 (MiDecrementSubsectionViewCount.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
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
    return MiReturnCrossPartitionSectionCharges(*((_QWORD *)qword_140E2FF88 + (*(_WORD *)(a1 + 60) & 0x3FF)), v6, v4);
  }
  return result;
}
