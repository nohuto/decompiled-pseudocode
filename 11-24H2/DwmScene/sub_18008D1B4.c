/*
 * XREFs of sub_18008D1B4 @ 0x18008D1B4
 * Callers:
 *     sub_18008923C @ 0x18008923C (sub_18008923C.c)
 *     sub_18008B27C @ 0x18008B27C (sub_18008B27C.c)
 *     sub_18008D2D0 @ 0x18008D2D0 (sub_18008D2D0.c)
 *     sub_180091188 @ 0x180091188 (sub_180091188.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 */

void **__fastcall sub_18008D1B4(_QWORD *a1)
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
    sub_180012140(v2, a1[20]);
    sub_180010234((void *)a1[19], (a1[21] - a1[19]) & 0xFFFFFFFFFFFFFFF0uLL);
    a1[19] = 0LL;
    a1[20] = 0LL;
    a1[21] = 0LL;
  }
  sub_180011B5C((__int64)(a1 + 13));
  v3 = a1[12];
  if ( v3 )
    sub_18001060C(v3);
  v4 = a1[10];
  if ( v4 )
    sub_18001060C(v4);
  v5 = a1[8];
  if ( v5 )
    sub_18001060C(v5);
  v6 = a1[6];
  if ( v6 )
    sub_18001060C(v6);
  v7 = a1[4];
  if ( v7 )
    sub_18001060C(v7);
  v8 = a1[2];
  if ( v8 )
    sub_18001060C(v8);
  result = &Spectre::Engine::IImageProcessingEffect::`vftable';
  *a1 = &Spectre::Engine::IImageProcessingEffect::`vftable';
  return result;
}
