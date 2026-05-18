/*
 * XREFs of sub_180091028 @ 0x180091028
 * Callers:
 *     sub_180091280 @ 0x180091280 (sub_180091280.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 *     sub_18008CBB8 @ 0x18008CBB8 (sub_18008CBB8.c)
 */

void **__fastcall sub_180091028(_QWORD *a1)
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
  sub_180011010(a1 + 9, (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
    sub_18001050C(*((__int64 *)&v11 + 1));
  v11 = 0LL;
  sub_180011010(a1 + 36, (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
    sub_18001050C(*((__int64 *)&v11 + 1));
  v11 = 0LL;
  sub_180011010(a1 + 40, (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
    sub_18001050C(*((__int64 *)&v11 + 1));
  v11 = 0LL;
  sub_180011010(a1 + 34, (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
    sub_18001050C(*((__int64 *)&v11 + 1));
  v11 = 0LL;
  sub_180011010(a1 + 25, (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
    sub_18001050C(*((__int64 *)&v11 + 1));
  v11 = 0LL;
  sub_180011010(a1 + 23, (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
    sub_18001050C(*((__int64 *)&v11 + 1));
  v2 = a1 + 27;
  sub_18008CBB8(a1 + 27);
  sub_180011A5C((__int64)(a1 + 42));
  v3 = a1[41];
  if ( v3 )
    sub_18001050C(v3);
  v4 = a1[39];
  if ( v4 )
    sub_18001050C(v4);
  v5 = a1[37];
  if ( v5 )
    sub_18001050C(v5);
  v6 = a1[35];
  if ( v6 )
    sub_18001050C(v6);
  v7 = (void *)a1[30];
  if ( v7 )
  {
    sub_180010134(v7, (a1[32] - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[30] = 0LL;
    a1[31] = 0LL;
    a1[32] = 0LL;
  }
  if ( *v2 )
  {
    sub_180012040(*v2, a1[28]);
    sub_180010134((void *)*v2, (a1[29] - a1[27]) & 0xFFFFFFFFFFFFFFF0uLL);
    *v2 = 0LL;
    a1[28] = 0LL;
    a1[29] = 0LL;
  }
  v8 = a1[26];
  if ( v8 )
    sub_18001050C(v8);
  v9 = a1[24];
  if ( v9 )
    sub_18001050C(v9);
  return sub_18008D054(a1);
}
