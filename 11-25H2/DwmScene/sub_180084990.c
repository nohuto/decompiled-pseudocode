/*
 * XREFs of sub_180084990 @ 0x180084990
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 */

__int64 __fastcall sub_180084990(_QWORD *a1)
{
  __int128 v3; // [rsp+20h] [rbp-10h] BYREF

  v3 = 0LL;
  sub_180011010(a1 + 225, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_18001050C(*((__int64 *)&v3 + 1));
  v3 = 0LL;
  sub_180011010(a1 + 227, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_18001050C(*((__int64 *)&v3 + 1));
  v3 = 0LL;
  sub_180011010(a1 + 229, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_18001050C(*((__int64 *)&v3 + 1));
  v3 = 0LL;
  sub_180011010(a1 + 235, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_18001050C(*((__int64 *)&v3 + 1));
  v3 = 0LL;
  sub_180011010(a1 + 237, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_18001050C(*((__int64 *)&v3 + 1));
  v3 = 0LL;
  sub_180011010(a1 + 239, (__int64 *)&v3);
  if ( *((_QWORD *)&v3 + 1) )
    sub_18001050C(*((__int64 *)&v3 + 1));
  return sub_180058C00((__int64)a1);
}
