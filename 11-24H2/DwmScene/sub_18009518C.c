/*
 * XREFs of sub_18009518C @ 0x18009518C
 * Callers:
 *     sub_1800951E4 @ 0x1800951E4 (sub_1800951E4.c)
 * Callees:
 *     sub_180094F2C @ 0x180094F2C (sub_180094F2C.c)
 *     sub_180095138 @ 0x180095138 (sub_180095138.c)
 */

__int64 __fastcall sub_18009518C(__int64 *a1, _DWORD *a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  __int64 v6; // rdx
  __int64 v8; // rcx

  v6 = a1[1];
  if ( v6 == a1[2] )
    return sub_180094F2C(a1, v6, (int)a2, a3, (__int64)a4, (__int64)a5);
  sub_180095138((__int64)a1, v6, a2, a3, a4, a5);
  v8 = a1[1];
  a1[1] = v8 + 56;
  return v8;
}
