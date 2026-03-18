/*
 * XREFs of ??0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z @ 0x180008028
 * Callers:
 *     ?CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180007F18 (-CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??0CBackdropVisualImage@@AEAA@PEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_N@Z @ 0x1800082CC (--0CBackdropVisualImage@@AEAA@PEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_N@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?EnsureCachedVisualImage@CVisualBitmap@@AEAAJXZ @ 0x1801EFAF0 (-EnsureCachedVisualImage@CVisualBitmap@@AEAAJXZ.c)
 *     ?Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180298F90 (-Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x1802B2AD8 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ??0COcclusionContext@@QEAA@XZ @ 0x180083198 (--0COcclusionContext@@QEAA@XZ.c)
 */

CCachedVisualImage *__fastcall CCachedVisualImage::CCachedVisualImage(
        CCachedVisualImage *this,
        struct CComposition *a2)
{
  __int64 v2; // r9
  CCachedVisualImage *result; // rax
  int v4; // r10d
  char v5; // r8

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CCachedVisualImage::`vftable'{for `CResource'};
  *((_QWORD *)this + 9) = &CBackdropVisualImage::`vftable'{for `IBitmapResource'};
  *((_QWORD *)this + 10) = &CBackdropVisualImage::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 11) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  COcclusionContext::COcclusionContext((CCachedVisualImage *)((char *)this + 208));
  *(_QWORD *)(v2 + 2048) = 0LL;
  result = (CCachedVisualImage *)v2;
  *(_DWORD *)(v2 + 2056) = v4;
  *(_BYTE *)(v2 + 2060) = v5;
  *(_DWORD *)(v2 + 168) = 2;
  return result;
}
