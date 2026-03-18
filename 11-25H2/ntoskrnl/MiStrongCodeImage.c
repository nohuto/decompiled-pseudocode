/*
 * XREFs of MiStrongCodeImage @ 0x1404B48FC
 * Callers:
 *     MiValidateSectionCreate @ 0x140945124 (MiValidateSectionCreate.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiStrongCodeImage(__int64 a1, unsigned int a2)
{
  KIRQL v4; // al

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( ((*(_DWORD *)(a1 + 92) >> 18) & 3u) < a2 )
    *(_DWORD *)(a1 + 92) ^= (*(_DWORD *)(a1 + 92) ^ (a2 << 18)) & 0xC0000;
  return MiReleaseSpinLockExclusive((_DWORD *)(a1 + 72), v4);
}
