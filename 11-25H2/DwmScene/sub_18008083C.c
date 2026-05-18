/*
 * XREFs of sub_18008083C @ 0x18008083C
 * Callers:
 *     sub_180080C68 @ 0x180080C68 (sub_180080C68.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     sub_180027B50 @ 0x180027B50 (sub_180027B50.c)
 *     sub_1800808B4 @ 0x1800808B4 (sub_1800808B4.c)
 */

__int64 *__fastcall sub_18008083C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_1800808B4(a1 + 496);
  v4 = *a2;
  v5 = (_QWORD *)sub_180011C64(a1 + 8, &v7);
  sub_180027B50(v4, v5);
  if ( v8 )
    sub_18001050C(v8);
  return a2;
}
