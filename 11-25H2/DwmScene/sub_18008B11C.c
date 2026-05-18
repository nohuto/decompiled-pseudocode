/*
 * XREFs of sub_18008B11C @ 0x18008B11C
 * Callers:
 *     sub_18008B250 @ 0x18008B250 (sub_18008B250.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 */

__int64 __fastcall sub_18008B11C(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-10h] BYREF

  *a1 = &Spectre::Engine::ImageProcessingEffectBloom::`vftable';
  v9 = 0LL;
  sub_180011010(a1 + 23, (__int64 *)&v9);
  if ( *((_QWORD *)&v9 + 1) )
    sub_18001050C(*((__int64 *)&v9 + 1));
  v9 = 0LL;
  sub_180011010(a1 + 31, (__int64 *)&v9);
  if ( *((_QWORD *)&v9 + 1) )
    sub_18001050C(*((__int64 *)&v9 + 1));
  v9 = 0LL;
  sub_180011010(a1 + 25, (__int64 *)&v9);
  if ( *((_QWORD *)&v9 + 1) )
    sub_18001050C(*((__int64 *)&v9 + 1));
  v9 = 0LL;
  sub_180011010(a1 + 29, (__int64 *)&v9);
  if ( *((_QWORD *)&v9 + 1) )
    sub_18001050C(*((__int64 *)&v9 + 1));
  v2 = a1[34];
  if ( v2 )
    sub_18001050C(v2);
  v3 = a1[32];
  if ( v3 )
    sub_18001050C(v3);
  v4 = a1[30];
  if ( v4 )
    sub_18001050C(v4);
  v5 = a1[28];
  if ( v5 )
    sub_18001050C(v5);
  v6 = a1[26];
  if ( v6 )
    sub_18001050C(v6);
  v7 = a1[24];
  if ( v7 )
    sub_18001050C(v7);
  return sub_18008D054(a1);
}
