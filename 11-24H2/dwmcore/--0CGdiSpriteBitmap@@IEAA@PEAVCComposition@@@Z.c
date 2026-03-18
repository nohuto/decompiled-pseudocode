/*
 * XREFs of ??0CGdiSpriteBitmap@@IEAA@PEAVCComposition@@@Z @ 0x180203108
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CGdiSpriteBitmap *__fastcall CGdiSpriteBitmap::CGdiSpriteBitmap(CGdiSpriteBitmap *this, struct CComposition *a2)
{
  CGdiSpriteBitmap *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CGdiSpriteBitmap::`vftable'{for `CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>'};
  *((_QWORD *)this + 13) = &CGdiSpriteBitmap::`vftable'{for `IBitmapResource'};
  *((_QWORD *)this + 14) = &CGdiSpriteBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 15) = &CGdiSpriteBitmap::`vftable'{for `IVtrGdiSurface'};
  *((_QWORD *)this + 22) = (char *)this + 184;
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 31) = &CRegionShape::`vftable';
  *((_QWORD *)this + 33) = (char *)this + 272;
  *((_DWORD *)this + 68) = 0;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_DWORD *)this + 94) = 1065353216;
  *((_DWORD *)this + 95) = 1065353216;
  *((_DWORD *)this + 96) = 1065353216;
  *(_QWORD *)((char *)this + 388) = 1065353216LL;
  result = this;
  *(_QWORD *)((char *)this + 396) = 0LL;
  *((_DWORD *)this + 101) = 0;
  *((_BYTE *)this + 408) = 0;
  *((_DWORD *)this + 111) = 0;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_DWORD *)this + 34) = 87;
  *((_DWORD *)this + 36) = 0;
  return result;
}
