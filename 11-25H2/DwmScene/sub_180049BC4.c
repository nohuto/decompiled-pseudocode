/*
 * XREFs of sub_180049BC4 @ 0x180049BC4
 * Callers:
 *     sub_18004A230 @ 0x18004A230 (sub_18004A230.c)
 *     sub_18005DB3C @ 0x18005DB3C (sub_18005DB3C.c)
 * Callees:
 *     sub_180023E2C @ 0x180023E2C (sub_180023E2C.c)
 *     sub_18004ABD8 @ 0x18004ABD8 (sub_18004ABD8.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180049BC4(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 i; // rcx

  sub_180023E2C(a1, a2);
  sub_18004ABD8(v7, a1[1] + 32LL, a4);
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
