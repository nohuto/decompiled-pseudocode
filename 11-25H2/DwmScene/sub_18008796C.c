/*
 * XREFs of sub_18008796C @ 0x18008796C
 * Callers:
 *     sub_1800888A0 @ 0x1800888A0 (sub_1800888A0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800407EC @ 0x1800407EC (sub_1800407EC.c)
 */

_QWORD *__fastcall sub_18008796C(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v4 = sub_1800407EC(a1 + 8, &v7);
  *a2 = a1 + 1876;
  v5 = v4[1];
  *v4 = 0LL;
  v4[1] = 0LL;
  a2[1] = v5;
  if ( v8 )
    sub_18001050C(v8);
  return a2;
}
