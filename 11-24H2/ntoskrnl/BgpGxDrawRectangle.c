/*
 * XREFs of BgpGxDrawRectangle @ 0x140481E44
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140472A28 (BgpTxtDisplayCharacter.c)
 *     BgpClearScreen @ 0x140697E28 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14069A360 (BgpFwDisplayBugCheckScreen.c)
 *     BgpGxDrawBitmapImage @ 0x140BB26EC (BgpGxDrawBitmapImage.c)
 *     BgpTxtClearRegion @ 0x140BB28D8 (BgpTxtClearRegion.c)
 *     BgpTxtDisplayString @ 0x140BB2BB0 (BgpTxtDisplayString.c)
 *     AnFwpFadeAnimationTimer @ 0x140BB2F50 (AnFwpFadeAnimationTimer.c)
 * Callees:
 *     BgpGxConvertRectangleEx @ 0x1404604FC (BgpGxConvertRectangleEx.c)
 *     GxpWriteFrameBufferPixels @ 0x140481F1C (GxpWriteFrameBufferPixels.c)
 *     BgpGetBitsPerPixel @ 0x1404822C8 (BgpGetBitsPerPixel.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     BgpGxRectangleDestroy @ 0x140BB3F04 (BgpGxRectangleDestroy.c)
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
    if ( (dword_140EF0050 & 0xC00) != 0 )
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
