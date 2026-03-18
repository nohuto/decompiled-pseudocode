/*
 * XREFs of ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C0091A64
 * Callers:
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@@Z @ 0x1C007D1E8 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@@Z.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C00913D8 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFREF::bDeleteSurface(SURFREF *this, unsigned int a2)
{
  __int64 result; // rax

  result = SURFACE::bDeleteSurface(*((_QWORD *)this + 4), 0LL, a2);
  if ( (_DWORD)result )
    *((_QWORD *)this + 4) = 0LL;
  return result;
}
