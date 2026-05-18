/*
 * XREFs of sub_180087ACC @ 0x180087ACC
 * Callers:
 *     sub_180088A00 @ 0x180088A00 (sub_180088A00.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18004094C @ 0x18004094C (sub_18004094C.c)
 */

_QWORD *__fastcall sub_180087ACC(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v4 = sub_18004094C(a1 + 8, &v7);
  *a2 = a1 + 1876;
  v5 = v4[1];
  *v4 = 0LL;
  v4[1] = 0LL;
  a2[1] = v5;
  if ( v8 )
    sub_18001060C(v8);
  return a2;
}
