/*
 * XREFs of sub_180091188 @ 0x180091188
 * Callers:
 *     sub_1800913E0 @ 0x1800913E0 (sub_1800913E0.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 *     sub_18008CD18 @ 0x18008CD18 (sub_18008CD18.c)
 */

void **__fastcall sub_180091188(_QWORD *a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-10h] BYREF

  *a1 = &Spectre::Engine::ImageProcessingEffectBlur::`vftable';
  v11 = 0LL;
  sub_180011110(a1 + 9, (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
    sub_18001060C(*((__int64 *)&v11 + 1));
  v11 = 0LL;
  sub_180011110(a1 + 36, (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
    sub_18001060C(*((__int64 *)&v11 + 1));
  v11 = 0LL;
  sub_180011110(a1 + 40, (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
    sub_18001060C(*((__int64 *)&v11 + 1));
  v11 = 0LL;
  sub_180011110(a1 + 34, (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
    sub_18001060C(*((__int64 *)&v11 + 1));
  v11 = 0LL;
  sub_180011110(a1 + 25, (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
    sub_18001060C(*((__int64 *)&v11 + 1));
  v11 = 0LL;
  sub_180011110(a1 + 23, (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
    sub_18001060C(*((__int64 *)&v11 + 1));
  v2 = a1 + 27;
  sub_18008CD18(a1 + 27);
  sub_180011B5C((__int64)(a1 + 42));
  v3 = a1[41];
  if ( v3 )
    sub_18001060C(v3);
  v4 = a1[39];
  if ( v4 )
    sub_18001060C(v4);
  v5 = a1[37];
  if ( v5 )
    sub_18001060C(v5);
  v6 = a1[35];
  if ( v6 )
    sub_18001060C(v6);
  v7 = (void *)a1[30];
  if ( v7 )
  {
    sub_180010234(v7, (a1[32] - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[30] = 0LL;
    a1[31] = 0LL;
    a1[32] = 0LL;
  }
  if ( *v2 )
  {
    sub_180012140(*v2, a1[28]);
    sub_180010234((void *)*v2, (a1[29] - a1[27]) & 0xFFFFFFFFFFFFFFF0uLL);
    *v2 = 0LL;
    a1[28] = 0LL;
    a1[29] = 0LL;
  }
  v8 = a1[26];
  if ( v8 )
    sub_18001060C(v8);
  v9 = a1[24];
  if ( v9 )
    sub_18001060C(v9);
  return sub_18008D1B4(a1);
}
