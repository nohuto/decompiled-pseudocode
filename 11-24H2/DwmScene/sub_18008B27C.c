/*
 * XREFs of sub_18008B27C @ 0x18008B27C
 * Callers:
 *     sub_18008B3B0 @ 0x18008B3B0 (sub_18008B3B0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 */

__int64 __fastcall sub_18008B27C(_QWORD *a1)
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
  sub_180011110(a1 + 23, (__int64 *)&v9);
  if ( *((_QWORD *)&v9 + 1) )
    sub_18001060C(*((__int64 *)&v9 + 1));
  v9 = 0LL;
  sub_180011110(a1 + 31, (__int64 *)&v9);
  if ( *((_QWORD *)&v9 + 1) )
    sub_18001060C(*((__int64 *)&v9 + 1));
  v9 = 0LL;
  sub_180011110(a1 + 25, (__int64 *)&v9);
  if ( *((_QWORD *)&v9 + 1) )
    sub_18001060C(*((__int64 *)&v9 + 1));
  v9 = 0LL;
  sub_180011110(a1 + 29, (__int64 *)&v9);
  if ( *((_QWORD *)&v9 + 1) )
    sub_18001060C(*((__int64 *)&v9 + 1));
  v2 = a1[34];
  if ( v2 )
    sub_18001060C(v2);
  v3 = a1[32];
  if ( v3 )
    sub_18001060C(v3);
  v4 = a1[30];
  if ( v4 )
    sub_18001060C(v4);
  v5 = a1[28];
  if ( v5 )
    sub_18001060C(v5);
  v6 = a1[26];
  if ( v6 )
    sub_18001060C(v6);
  v7 = a1[24];
  if ( v7 )
    sub_18001060C(v7);
  return sub_18008D1B4(a1);
}
