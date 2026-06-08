/*
 * XREFs of sub_140028658 @ 0x140028658
 * Callers:
 *     sub_14002C3B4 @ 0x14002C3B4 (sub_14002C3B4.c)
 *     sub_1400359D0 @ 0x1400359D0 (sub_1400359D0.c)
 *     sub_140037080 @ 0x140037080 (sub_140037080.c)
 *     sub_1400373A8 @ 0x1400373A8 (sub_1400373A8.c)
 *     sub_140043AF8 @ 0x140043AF8 (sub_140043AF8.c)
 *     sub_14004903C @ 0x14004903C (sub_14004903C.c)
 *     sub_14004A99C @ 0x14004A99C (sub_14004A99C.c)
 * Callees:
 *     sub_140047594 @ 0x140047594 (sub_140047594.c)
 */

__int64 __fastcall sub_140028658(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax

  result = sub_140047594();
  if ( (int)result < 0 )
    *a3 = 0;
  return result;
}
