/*
 * XREFs of RaspRectangleCreate @ 0x1404665F0
 * Callers:
 *     BgpRasPrintGlyph @ 0x140472CBC (BgpRasPrintGlyph.c)
 * Callees:
 *     RaspAllocateMemory @ 0x140467288 (RaspAllocateMemory.c)
 *     BgpGxInitializeRectangle @ 0x14069855C (BgpGxInitializeRectangle.c)
 */

__int64 __fastcall RaspRectangleCreate(_DWORD *a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // ebx
  __int64 Memory; // r8
  __int64 result; // rax
  __int64 v10; // r8

  v7 = ((a2 * *a1 * a1[1] + 7) >> 3) + 72;
  Memory = RaspAllocateMemory(v7, a4);
  if ( !Memory )
    return 3221225495LL;
  result = BgpGxInitializeRectangle(a1, a2, Memory, v7);
  *a3 = v10;
  return result;
}
