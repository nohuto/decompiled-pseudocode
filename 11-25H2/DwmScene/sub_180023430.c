/*
 * XREFs of sub_180023430 @ 0x180023430
 * Callers:
 *     sub_180025170 @ 0x180025170 (sub_180025170.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     sub_1800234A8 @ 0x1800234A8 (sub_1800234A8.c)
 *     sub_180027B50 @ 0x180027B50 (sub_180027B50.c)
 */

__int64 *__fastcall sub_180023430(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_1800234A8(a1 + 496);
  v4 = *a2;
  v5 = sub_180011C64(a1 + 8, &v7);
  sub_180027B50(v4, v5);
  if ( v8 )
    sub_18001050C(v8);
  return a2;
}
