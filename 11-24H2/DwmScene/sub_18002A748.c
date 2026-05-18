/*
 * XREFs of sub_18002A748 @ 0x18002A748
 * Callers:
 *     sub_18002B380 @ 0x18002B380 (sub_18002B380.c)
 *     sub_18006BF10 @ 0x18006BF10 (sub_18006BF10.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180052358 @ 0x180052358 (sub_180052358.c)
 *     sub_180052528 @ 0x180052528 (sub_180052528.c)
 */

__int64 __fastcall sub_18002A748(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  sub_180052358(a1, &v4, a2);
  if ( v4 )
  {
    v2 = sub_180052528();
    if ( v5 )
      sub_18001060C(v5);
    return v2;
  }
  else
  {
    if ( v5 )
      sub_18001060C(v5);
    return 0LL;
  }
}
