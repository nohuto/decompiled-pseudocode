/*
 * XREFs of BgpGxDrawBitmapImage @ 0x140BA26EC
 * Callers:
 *     AnFwDisplayBackgroundUpdate @ 0x140BA1E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140BA21B0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x140481014 (BgpGxDrawRectangle.c)
 *     BgpGxParseBitmap @ 0x140BA00B8 (BgpGxParseBitmap.c)
 *     BgpGxRectangleDestroy @ 0x140BA3F04 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall BgpGxDrawBitmapImage(__int64 a1, __int64 a2)
{
  int v3; // ebx
  int *v5; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v3 = BgpGxParseBitmap(a1, &v5);
  if ( v3 >= 0 )
  {
    v3 = BgpGxDrawRectangle(v5, a2);
    BgpGxRectangleDestroy(v5);
  }
  return (unsigned int)v3;
}
