/*
 * XREFs of sub_18002ABC4 @ 0x18002ABC4
 * Callers:
 *     sub_1800BCB50 @ 0x1800BCB50 (sub_1800BCB50.c)
 *     sub_1800BCCF0 @ 0x1800BCCF0 (sub_1800BCCF0.c)
 *     sub_1800CB270 @ 0x1800CB270 (sub_1800CB270.c)
 *     sub_1800CB300 @ 0x1800CB300 (sub_1800CB300.c)
 *     sub_1800CBD30 @ 0x1800CBD30 (sub_1800CBD30.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 */

__int64 *__fastcall sub_18002ABC4(__int64 a1, _QWORD *a2)
{
  __int64 *result; // rax
  __int64 v4; // rcx

  result = sub_18001244C((__int64 *)(a1 + 256), a2);
  v4 = a2[1];
  if ( v4 )
    return (__int64 *)sub_18001050C(v4);
  return result;
}
