/*
 * XREFs of MiImageCantMove @ 0x14067A944
 * Callers:
 *     MiValidateSectionCreate @ 0x140945124 (MiValidateSectionCreate.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiImageCantMove(__int64 a1)
{
  KIRQL v2; // al

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  *(_DWORD *)(a1 + 92) |= 0x20000u;
  return MiReleaseSpinLockExclusive((_DWORD *)(a1 + 72), v2);
}
