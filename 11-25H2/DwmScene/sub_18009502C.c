/*
 * XREFs of sub_18009502C @ 0x18009502C
 * Callers:
 *     sub_180095084 @ 0x180095084 (sub_180095084.c)
 * Callees:
 *     sub_180094DCC @ 0x180094DCC (sub_180094DCC.c)
 *     sub_180094FD8 @ 0x180094FD8 (sub_180094FD8.c)
 */

__int64 __fastcall sub_18009502C(__int64 *a1, _DWORD *a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  __int64 v6; // rdx
  __int64 v8; // rcx

  v6 = a1[1];
  if ( v6 == a1[2] )
    return sub_180094DCC(a1, v6, (int)a2, a3, (__int64)a4, (__int64)a5);
  sub_180094FD8((__int64)a1, v6, a2, a3, a4, a5);
  v8 = a1[1];
  a1[1] = v8 + 56;
  return v8;
}
