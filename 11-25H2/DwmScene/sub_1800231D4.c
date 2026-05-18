/*
 * XREFs of sub_1800231D4 @ 0x1800231D4
 * Callers:
 *     sub_180024CE0 @ 0x180024CE0 (sub_180024CE0.c)
 *     sub_1800B9D90 @ 0x1800B9D90 (sub_1800B9D90.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     sub_18002324C @ 0x18002324C (sub_18002324C.c)
 *     sub_180027B50 @ 0x180027B50 (sub_180027B50.c)
 */

__int64 *__fastcall sub_1800231D4(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_18002324C(a1 + 496);
  v4 = *a2;
  v5 = sub_180011C64(a1 + 8, &v7);
  sub_180027B50(v4, v5);
  if ( v8 )
    sub_18001050C(v8);
  return a2;
}
