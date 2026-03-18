/*
 * XREFs of NtGdiCreateBitmapFromDxSurface @ 0x140336E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepCreateBitmapFromDxSurface@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@IIKKHPEAX@Z @ 0x1401C83CC (-GrepCreateBitmapFromDxSurface@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@IIKKHPEAX@Z.c)
 */

__int64 __fastcall NtGdiCreateBitmapFromDxSurface(HDC a1, unsigned int a2, unsigned int a3, int a4, void *a5)
{
  __int64 BitmapFromDxSurface; // rbx
  _QWORD v10[14]; // [rsp+40h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v10, a1);
  BitmapFromDxSurface = 0LL;
  if ( v10[0] )
    BitmapFromDxSurface = GrepCreateBitmapFromDxSurface((struct XDCOBJ *)v10, a2, a3, a4, 0, 0, a5);
  else
    EngSetLastError(0x57u);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v10);
  return BitmapFromDxSurface;
}
