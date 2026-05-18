/*
 * XREFs of sub_180084AF0 @ 0x180084AF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 */

__int64 __fastcall sub_180084AF0(_QWORD *a1)
{
  __int128 v3; // [rsp+20h] [rbp-10h] BYREF

  v3 = 0LL;
  sub_180011110(a1 + 225, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_18001060C(*((__int64 *)&v3 + 1));
  v3 = 0LL;
  sub_180011110(a1 + 227, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_18001060C(*((__int64 *)&v3 + 1));
  v3 = 0LL;
  sub_180011110(a1 + 229, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_18001060C(*((__int64 *)&v3 + 1));
  v3 = 0LL;
  sub_180011110(a1 + 235, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_18001060C(*((__int64 *)&v3 + 1));
  v3 = 0LL;
  sub_180011110(a1 + 237, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_18001060C(*((__int64 *)&v3 + 1));
  v3 = 0LL;
  sub_180011110(a1 + 239, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_18001060C(*((__int64 *)&v3 + 1));
  return sub_180058D60((__int64)a1);
}
