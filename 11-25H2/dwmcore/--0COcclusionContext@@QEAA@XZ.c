/*
 * XREFs of ??0COcclusionContext@@QEAA@XZ @ 0x180083198
 * Callers:
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z @ 0x180008028 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z.c)
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800815F4 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x1801AC6B8 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MA.c)
 *     ??0CDesktopTree@@IEAA@PEAVCComposition@@@Z @ 0x180205944 (--0CDesktopTree@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0?$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z @ 0x18020723C (--0-$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z.c)
 *     ??0CHolographicInteropTexture@@IEAA@PEAVCComposition@@@Z @ 0x1802DB8A8 (--0CHolographicInteropTexture@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

COcclusionContext *__fastcall COcclusionContext::COcclusionContext(COcclusionContext *this)
{
  signed __int32 v1; // eax
  COcclusionContext *result; // rax

  *(_QWORD *)this = &COcclusionContext::`vftable';
  *((_QWORD *)this + 29) = (char *)this + 264;
  *((_QWORD *)this + 30) = (char *)this + 264;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 62) = 4;
  *(_QWORD *)((char *)this + 252) = 4LL;
  *((_QWORD *)this + 41) = (char *)this + 360;
  *((_QWORD *)this + 42) = (char *)this + 360;
  *((_DWORD *)this + 86) = 3;
  *(_QWORD *)((char *)this + 348) = 3LL;
  *((_QWORD *)this + 57) = (char *)this + 464;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_DWORD *)this + 116) = 0;
  *((_QWORD *)this + 66) = (char *)this + 536;
  *((_DWORD *)this + 134) = 0;
  *((_QWORD *)this + 77) = (char *)this + 648;
  *((_QWORD *)this + 78) = (char *)this + 648;
  *((_DWORD *)this + 158) = 10;
  *(_QWORD *)((char *)this + 636) = 10LL;
  *((_QWORD *)this + 141) = (char *)this + 1152;
  *((_QWORD *)this + 142) = (char *)this + 1152;
  *((_QWORD *)this + 143) = (char *)this + 1312;
  *((_QWORD *)this + 164) = (char *)this + 1336;
  *((_QWORD *)this + 165) = (char *)this + 1336;
  *((_QWORD *)this + 166) = (char *)this + 1536;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  do
    v1 = _InterlockedIncrement((volatile signed __int32 *)&COcclusionContext::s_occlusionId);
  while ( !v1 );
  *((_DWORD *)this + 384) = v1;
  *((_QWORD *)this + 225) = (char *)this + 1824;
  *((_QWORD *)this + 226) = (char *)this + 1824;
  *((_QWORD *)this + 227) = (char *)this + 1840;
  result = this;
  *((_DWORD *)this + 385) = 0;
  *((_QWORD *)this + 193) = 0LL;
  *((_QWORD *)this + 194) = 0LL;
  *((_DWORD *)this + 390) = 0x7FFFFFFF;
  *((_DWORD *)this + 391) = 256;
  *((_WORD *)this + 784) = 0;
  *((_BYTE *)this + 1570) = 0;
  *((_DWORD *)this + 409) = 0;
  *((_QWORD *)this + 213) = 0LL;
  *((_QWORD *)this + 214) = 0LL;
  *((_DWORD *)this + 430) = 0;
  *((_QWORD *)this + 217) = 0LL;
  *((_QWORD *)this + 216) = 0LL;
  *((_QWORD *)this + 218) = 0LL;
  *((_QWORD *)this + 220) = 0LL;
  *((_QWORD *)this + 219) = 0LL;
  *((_QWORD *)this + 221) = 0LL;
  *((_QWORD *)this + 223) = 0LL;
  *((_QWORD *)this + 222) = 0LL;
  *((_QWORD *)this + 224) = 0LL;
  return result;
}
