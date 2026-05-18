/*
 * XREFs of sub_180023334 @ 0x180023334
 * Callers:
 *     sub_180024E40 @ 0x180024E40 (sub_180024E40.c)
 *     sub_1800B9EF0 @ 0x1800B9EF0 (sub_1800B9EF0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     sub_1800233AC @ 0x1800233AC (sub_1800233AC.c)
 *     sub_180027CB0 @ 0x180027CB0 (sub_180027CB0.c)
 */

__int64 *__fastcall sub_180023334(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_1800233AC(a1 + 496);
  v4 = *a2;
  v5 = sub_180011D64(a1 + 8, &v7);
  sub_180027CB0(v4, v5);
  if ( v8 )
    sub_18001060C(v8);
  return a2;
}
