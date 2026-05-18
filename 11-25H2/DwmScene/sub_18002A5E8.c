/*
 * XREFs of sub_18002A5E8 @ 0x18002A5E8
 * Callers:
 *     sub_18002B220 @ 0x18002B220 (sub_18002B220.c)
 *     sub_18006BDB0 @ 0x18006BDB0 (sub_18006BDB0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800521F8 @ 0x1800521F8 (sub_1800521F8.c)
 *     sub_1800523C8 @ 0x1800523C8 (sub_1800523C8.c)
 */

__int64 __fastcall sub_18002A5E8(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  sub_1800521F8(a1, &v4, a2);
  if ( v4 )
  {
    v2 = sub_1800523C8();
    if ( v5 )
      sub_18001050C(v5);
    return v2;
  }
  else
  {
    if ( v5 )
      sub_18001050C(v5);
    return 0LL;
  }
}
