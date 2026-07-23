/*
 * XREFs of MiUnmapLargePages @ 0x1404D1FE8
 * Callers:
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14020AB44 (MiReturnSystemVa.c)
 */

__int64 __fastcall MiUnmapLargePages(unsigned __int64 a1, __int64 a2)
{
  return MiReturnSystemVa(a1, a1 + a2);
}
