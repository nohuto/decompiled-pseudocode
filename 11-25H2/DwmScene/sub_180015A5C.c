/*
 * XREFs of sub_180015A5C @ 0x180015A5C
 * Callers:
 *     sub_180017F50 @ 0x180017F50 (sub_180017F50.c)
 *     sub_180051F28 @ 0x180051F28 (sub_180051F28.c)
 *     sub_1800BECFC @ 0x1800BECFC (sub_1800BECFC.c)
 *     sub_1800BF4C4 @ 0x1800BF4C4 (sub_1800BF4C4.c)
 *     sub_1800C833C @ 0x1800C833C (sub_1800C833C.c)
 *     sub_1800C8C18 @ 0x1800C8C18 (sub_1800C8C18.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     sub_180015AD4 @ 0x180015AD4 (sub_180015AD4.c)
 *     sub_180027B50 @ 0x180027B50 (sub_180027B50.c)
 */

__int64 *__fastcall sub_180015A5C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_180015AD4(a1 + 496);
  v4 = *a2;
  v5 = sub_180011C64(a1 + 8, &v7);
  sub_180027B50(v4, v5);
  if ( v8 )
    sub_18001050C(v8);
  return a2;
}
