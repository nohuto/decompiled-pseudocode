/*
 * XREFs of MiGetPdeAddress @ 0x14040A4F0
 * Callers:
 *     MiEliminateZeroPages @ 0x1409752C0 (MiEliminateZeroPages.c)
 *     MiReleaseDriverPtes @ 0x140A611E4 (MiReleaseDriverPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPdeAddress(unsigned __int64 a1)
{
  return ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
}
