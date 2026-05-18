/*
 * XREFs of sub_18008D054 @ 0x18008D054
 * Callers:
 *     sub_1800890DC @ 0x1800890DC (sub_1800890DC.c)
 *     sub_18008B11C @ 0x18008B11C (sub_18008B11C.c)
 *     sub_18008D170 @ 0x18008D170 (sub_18008D170.c)
 *     sub_180091028 @ 0x180091028 (sub_180091028.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 */

void **__fastcall sub_18008D054(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  void **result; // rax

  *a1 = &Spectre::Engine::ImageProcessingEffect::`vftable';
  v2 = a1[19];
  if ( v2 )
  {
    sub_180012040(v2, a1[20]);
    sub_180010134((void *)a1[19], (a1[21] - a1[19]) & 0xFFFFFFFFFFFFFFF0uLL);
    a1[19] = 0LL;
    a1[20] = 0LL;
    a1[21] = 0LL;
  }
  sub_180011A5C((__int64)(a1 + 13));
  v3 = a1[12];
  if ( v3 )
    sub_18001050C(v3);
  v4 = a1[10];
  if ( v4 )
    sub_18001050C(v4);
  v5 = a1[8];
  if ( v5 )
    sub_18001050C(v5);
  v6 = a1[6];
  if ( v6 )
    sub_18001050C(v6);
  v7 = a1[4];
  if ( v7 )
    sub_18001050C(v7);
  v8 = a1[2];
  if ( v8 )
    sub_18001050C(v8);
  result = &Spectre::Engine::IImageProcessingEffect::`vftable';
  *a1 = &Spectre::Engine::IImageProcessingEffect::`vftable';
  return result;
}
