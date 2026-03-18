/*
 * XREFs of ?TryGetBitmapRealization@CGdiSpriteBitmap@@UEAAPEAVIBitmapRealization@@XZ @ 0x180291250
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x180025ED0 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 */

struct IBitmapRealization *__fastcall CGdiSpriteBitmap::TryGetBitmapRealization(CGdiSpriteBitmap *this)
{
  if ( CGdiSpriteBitmap::EnsureBitmapRealization((CGdiSpriteBitmap *)((char *)this - 120)) )
    return (struct IBitmapRealization *)*((_QWORD *)this + 41);
  else
    return 0LL;
}
