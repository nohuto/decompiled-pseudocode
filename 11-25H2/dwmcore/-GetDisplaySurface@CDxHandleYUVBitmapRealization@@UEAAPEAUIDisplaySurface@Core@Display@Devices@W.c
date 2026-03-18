/*
 * XREFs of ?GetDisplaySurface@CDxHandleYUVBitmapRealization@@UEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x1801C5EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801C5F30 (-EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 */

struct Windows::Devices::Display::Core::IDisplaySurface *__fastcall CDxHandleYUVBitmapRealization::GetDisplaySurface(
        CDxHandleYUVBitmapRealization *this,
        unsigned int *a2)
{
  if ( (int)CDxHandleYUVBitmapRealization::EnsureDisplaySurface((CDxHandleYUVBitmapRealization *)((char *)this - 344)) < 0 )
    return 0LL;
  if ( a2 )
    *a2 = *(_DWORD *)(*((_QWORD *)this + 4) + 172LL);
  return (struct Windows::Devices::Display::Core::IDisplaySurface *)*((_QWORD *)this + 5);
}
