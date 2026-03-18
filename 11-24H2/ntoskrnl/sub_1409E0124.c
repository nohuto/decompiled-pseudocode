/*
 * XREFs of sub_1409E0124 @ 0x1409E0124
 * Callers:
 *     sub_1409DFA70 @ 0x1409DFA70 (sub_1409DFA70.c)
 *     sub_1409DFC78 @ 0x1409DFC78 (sub_1409DFC78.c)
 *     sub_1409DFD58 @ 0x1409DFD58 (sub_1409DFD58.c)
 *     sub_1409DFE38 @ 0x1409DFE38 (sub_1409DFE38.c)
 *     sub_1409DFFA8 @ 0x1409DFFA8 (sub_1409DFFA8.c)
 *     sub_1409E0394 @ 0x1409E0394 (sub_1409E0394.c)
 *     sub_140A50E08 @ 0x140A50E08 (sub_140A50E08.c)
 * Callees:
 *     sub_140A93FF8 @ 0x140A93FF8 (sub_140A93FF8.c)
 */

signed __int64 __fastcall sub_1409E0124(volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64(a1);
    if ( !v1 )
      sub_140A93FF8(a1);
  }
  return v1;
}
