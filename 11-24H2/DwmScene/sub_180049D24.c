/*
 * XREFs of sub_180049D24 @ 0x180049D24
 * Callers:
 *     sub_18004A390 @ 0x18004A390 (sub_18004A390.c)
 *     sub_18005DC9C @ 0x18005DC9C (sub_18005DC9C.c)
 * Callees:
 *     sub_180023F8C @ 0x180023F8C (sub_180023F8C.c)
 *     sub_18004AD38 @ 0x18004AD38 (sub_18004AD38.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180049D24(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 i; // rcx

  sub_180023F8C(a1, a2);
  sub_18004AD38(v7, a1[1] + 32LL, a4);
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
