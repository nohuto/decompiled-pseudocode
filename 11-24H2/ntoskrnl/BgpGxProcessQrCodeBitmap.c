/*
 * XREFs of BgpGxProcessQrCodeBitmap @ 0x14069963C
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140BB7400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpGetBitsPerPixel @ 0x14047D508 (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangle @ 0x140699588 (BgpGxConvertRectangle.c)
 *     BgpGxParseBitmap @ 0x140BB20B8 (BgpGxParseBitmap.c)
 *     BgpGxRectangleDestroy @ 0x140BB5F04 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall BgpGxProcessQrCodeBitmap(__int64 a1, int **a2)
{
  int v3; // ebx
  unsigned int BitsPerPixel; // eax
  int *v5; // rcx
  int *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v3 = BgpGxParseBitmap(a1, &v7);
  if ( v3 < 0 )
    goto LABEL_8;
  BitsPerPixel = BgpGetBitsPerPixel();
  v5 = v7;
  if ( v7[2] != BitsPerPixel )
  {
    v3 = BgpGxConvertRectangle(&v7, BitsPerPixel);
    if ( v3 >= 0 )
    {
      v5 = v7;
      goto LABEL_7;
    }
LABEL_8:
    v5 = v7;
    goto LABEL_9;
  }
LABEL_7:
  *a2 = v5;
LABEL_9:
  if ( v5 && v5 != *a2 )
    BgpGxRectangleDestroy(v5);
  return (unsigned int)v3;
}
