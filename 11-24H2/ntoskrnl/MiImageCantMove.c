/*
 * XREFs of MiImageCantMove @ 0x140687304
 * Callers:
 *     MiValidateSectionCreate @ 0x14093C5D8 (MiValidateSectionCreate.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiImageCantMove(__int64 a1)
{
  KIRQL v2; // al

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  *(_DWORD *)(a1 + 92) |= 0x20000u;
  return MiReleaseSpinLockExclusive((_DWORD *)(a1 + 72), v2);
}
