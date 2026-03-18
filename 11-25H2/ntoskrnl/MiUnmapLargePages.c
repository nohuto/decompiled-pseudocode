/*
 * XREFs of MiUnmapLargePages @ 0x1404DAD88
 * Callers:
 *     MiInsertInSystemSpace @ 0x1402A4B54 (MiInsertInSystemSpace.c)
 *     MiUnmapContiguousMemory @ 0x1402AA7B8 (MiUnmapContiguousMemory.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1402C0B88 (MiReturnSystemVa.c)
 */

__int64 __fastcall MiUnmapLargePages(unsigned __int64 a1, __int64 a2)
{
  return MiReturnSystemVa(a1, a1 + a2);
}
