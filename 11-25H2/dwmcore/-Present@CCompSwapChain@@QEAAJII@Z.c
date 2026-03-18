/*
 * XREFs of ?Present@CCompSwapChain@@QEAAJII@Z @ 0x1802D1160
 * Callers:
 *     ?Present@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18028BE9C (-Present@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x180173370 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1801B5020 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAXPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x18020C49C (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAXPEAV-$DynArrayIA@UtagRECT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z @ 0x1802C68BC (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z.c)
 *     ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x1802D0950 (-CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ.c)
 */

__int64 __fastcall CCompSwapChain::Present(CCompSwapChain *this)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // edi
  int v6; // eax
  DXGI_PRESENT_PARAMETERS v8; // [rsp+38h] [rbp-79h] BYREF
  _QWORD v9[2]; // [rsp+58h] [rbp-59h] BYREF
  int v10; // [rsp+68h] [rbp-49h]
  int v11; // [rsp+6Ch] [rbp-45h]
  UINT v12; // [rsp+70h] [rbp-41h]
  char v13[128]; // [rsp+78h] [rbp-39h] BYREF

  v12 = 0;
  v9[0] = v13;
  v10 = 8;
  v11 = 8;
  v9[1] = v13;
  memset(&v8, 0, sizeof(v8));
  `vector constructor iterator'(
    v13,
    16LL,
    8LL,
    (CDirtyRegionAnnotation *(__fastcall *)(CDirtyRegionAnnotation *))TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>);
  v2 = CCompSwapChain::CopyFrontToBackBuffer(this);
  v5 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803C84E8, 2u, v2, 0x13Bu, 0LL);
  }
  else
  {
    if ( **((_DWORD **)this + 19) )
    {
      v12 = 0;
      CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>((int **)this + 19, (__int64)v9);
      v8.DirtyRectsCount = v12;
      v8.pDirtyRects = (RECT *)v9[0];
    }
    v6 = CD3DDevice::Present(*((CD3DDevice **)this + 7), *((struct IDXGISwapChain1 **)this + 8), v3, v4, &v8);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803C84E8, 2u, v6, 0x14Au, 0LL);
    }
    else
    {
      if ( *((_DWORD *)this + 36) == 3 )
        CRegion::Copy((FastRegion::CRegion **)this + 37, (FastRegion::CRegion **)this + 28);
      CRegion::Copy((FastRegion::CRegion **)this + 28, (FastRegion::CRegion **)this + 19);
      **((_DWORD **)this + 19) = 0;
    }
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v9);
  return v5;
}
