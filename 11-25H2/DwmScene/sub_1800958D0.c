/*
 * XREFs of sub_1800958D0 @ 0x1800958D0
 * Callers:
 *     sub_1800962A0 @ 0x1800962A0 (sub_1800962A0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18002909C @ 0x18002909C (sub_18002909C.c)
 *     sub_1800957A0 @ 0x1800957A0 (sub_1800957A0.c)
 *     sub_1800966C0 @ 0x1800966C0 (sub_1800966C0.c)
 */

__int64 __fastcall sub_1800958D0(__int64 a1)
{
  __int64 v2; // rcx

  sub_18002909C((void **)(a1 + 1064), a1 + 1064);
  v2 = *(_QWORD *)(a1 + 904);
  if ( v2 )
    sub_18001050C(v2);
  sub_1800957A0((void **)(a1 + 880));
  sub_1800966C0(a1 + 704);
  sub_1800966C0(a1 + 528);
  sub_1800966C0(a1 + 352);
  sub_1800966C0(a1 + 176);
  return sub_1800966C0(a1);
}
