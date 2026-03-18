/*
 * XREFs of ?NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802DC190
 * Callers:
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1802D9AF4 (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@IIPEAVIRender.c)
 * Callees:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180063EB0 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800C6230 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CHolographicInteropTexture::NotifyRenderedRect(__int64 a1, __int64 a2, int a3, float *a4)
{
  RTL_SRWLOCK *v4; // rbx
  int v8; // edx
  int v9; // ecx
  struct tagRECT v10; // [rsp+20h] [rbp-78h] BYREF
  FastRegion::CRegion *v11[10]; // [rsp+30h] [rbp-68h] BYREF

  v4 = (RTL_SRWLOCK *)(a1 + 2320);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 2320));
  v8 = *(_DWORD *)(a1 + 2168);
  v9 = *(_DWORD *)(a1 + 2172);
  v10.left = (int)*a4 - v8;
  v10.right = (int)a4[2] - v8;
  v10.top = (int)a4[1] - v9;
  v10.bottom = (int)a4[3] - v9;
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v11, &v10);
  if ( *(_DWORD *)(a1 + 2156) && !a3 )
    FastRegion::CRegion::Union((const struct FastRegion::Internal::CRgnData **)(*(_QWORD *)(a1 + 2128) + 16LL), v11);
  FastRegion::CRegion::FreeMemory(v11);
  ReleaseSRWLockExclusive(v4);
}
