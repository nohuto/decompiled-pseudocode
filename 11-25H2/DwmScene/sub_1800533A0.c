/*
 * XREFs of sub_1800533A0 @ 0x1800533A0
 * Callers:
 *     sub_180052F40 @ 0x180052F40 (sub_180052F40.c)
 *     sub_180053528 @ 0x180053528 (sub_180053528.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 */

_QWORD *__fastcall sub_1800533A0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD **)(a1 + 40);
  if ( v2 == *(_QWORD **)(a1 + 48) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180011B04(*v2 + 56LL, &v5);
    sub_18001258C(v5, a2);
    if ( v6 )
      sub_18001050C(v6);
  }
  return a2;
}
