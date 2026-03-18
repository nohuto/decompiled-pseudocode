/*
 * XREFs of MiUnmapLargePages @ 0x1404D8B98
 * Callers:
 *     MiUnmapContiguousMemory @ 0x140263178 (MiUnmapContiguousMemory.c)
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1402429F4 (MiReturnSystemVa.c)
 */

__int64 __fastcall MiUnmapLargePages(unsigned __int64 a1, __int64 a2, int a3)
{
  if ( a3 == 8 )
  {
    a3 = 12;
  }
  else if ( a3 == 6 )
  {
    a3 = 10;
  }
  return MiReturnSystemVa(a1, a1 + a2, a3);
}
