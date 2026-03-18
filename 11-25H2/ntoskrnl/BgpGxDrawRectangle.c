/*
 * XREFs of BgpGxDrawRectangle @ 0x140481014
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140473A88 (BgpTxtDisplayCharacter.c)
 *     BgpClearScreen @ 0x14068CAD8 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14068F010 (BgpFwDisplayBugCheckScreen.c)
 *     BgpGxDrawBitmapImage @ 0x140BA26EC (BgpGxDrawBitmapImage.c)
 *     BgpTxtClearRegion @ 0x140BA28D8 (BgpTxtClearRegion.c)
 *     BgpTxtDisplayString @ 0x140BA2BB0 (BgpTxtDisplayString.c)
 *     AnFwpFadeAnimationTimer @ 0x140BA2F50 (AnFwpFadeAnimationTimer.c)
 * Callees:
 *     BgpGxConvertRectangleEx @ 0x1404611B0 (BgpGxConvertRectangleEx.c)
 *     GxpWriteFrameBufferPixels @ 0x1404810EC (GxpWriteFrameBufferPixels.c)
 *     BgpGetBitsPerPixel @ 0x140481498 (BgpGetBitsPerPixel.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     BgpGxRectangleDestroy @ 0x140BA3F04 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall BgpGxDrawRectangle(int *a1, __int64 a2)
{
  int *v4; // rbx
  unsigned int BitsPerPixel; // eax
  int *v6; // rsi
  char v7; // r9
  __int64 result; // rax
  unsigned int v9; // edi
  int *v10; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v11[80]; // [rsp+30h] [rbp-78h] BYREF

  memset_0(v11, 0, 0x48uLL);
  v4 = 0LL;
  v10 = 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  v6 = 0LL;
  if ( a1[2] != BitsPerPixel )
  {
    if ( (dword_140EEFD90 & 0xC00) != 0 )
    {
      v10 = (int *)v11;
      v7 = 1;
    }
    else
    {
      v7 = 0;
    }
    result = BgpGxConvertRectangleEx(a1, BitsPerPixel, &v10, v7);
    if ( (int)result < 0 )
      return result;
    v4 = v10;
    a1 = v10;
    v6 = v10;
  }
  v9 = GxpWriteFrameBufferPixels(a1, a2);
  if ( v6 )
  {
    if ( v6 != (int *)v11 )
      BgpGxRectangleDestroy(v4);
  }
  return v9;
}
