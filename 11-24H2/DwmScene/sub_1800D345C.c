/*
 * XREFs of sub_1800D345C @ 0x1800D345C
 * Callers:
 *     sub_1800D39D8 @ 0x1800D39D8 (sub_1800D39D8.c)
 *     sub_1800D3CCC @ 0x1800D3CCC (sub_1800D3CCC.c)
 *     sub_1800D4140 @ 0x1800D4140 (sub_1800D4140.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D345C(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return o__aligned_free(*(_QWORD *)a1);
  return result;
}
