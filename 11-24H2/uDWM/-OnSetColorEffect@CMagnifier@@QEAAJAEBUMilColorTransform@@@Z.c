/*
 * XREFs of ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800C8450
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18006AD70 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800C865C (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateColorTransformResourceProxy@CCompositor@@QEAAJPEAPEAVCColorTransformResourceProxy@@@Z @ 0x18009B144 (-CreateColorTransformResourceProxy@CCompositor@@QEAAJPEAPEAVCColorTransformResourceProxy@@@Z.c)
 *     ?Update@CColorTransformResourceProxy@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800B5780 (-Update@CColorTransformResourceProxy@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?SetColorTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCColorTransformResourceProxy@@@Z @ 0x1800C9B1C (-SetColorTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCColorTransformResourceProxy@@@Z.c)
 *     memcmp_0 @ 0x1800F636C (memcmp_0.c)
 */

__int64 __fastcall CMagnifier::OnSetColorEffect(CMagnifier *this, const struct MilColorTransform *a2)
{
  unsigned int v3; // ebx
  int v5; // eax
  int v6; // eax
  CColorTransformResourceProxy **v7; // r14
  int ColorTransformResourceProxy; // eax
  int v9; // eax
  int v10; // eax

  v3 = 0;
  if ( !memcmp_0(&g_MilColorTransfIdentity, a2, 0x64uLL) )
  {
    v5 = CMagnifierRenderTargetProxy::SetColorTransform(*((CMagnifierRenderTargetProxy **)this + 3), 0LL);
    v3 = v5;
    if ( v5 >= 0 )
    {
      *(_OWORD *)((char *)this + 68) = g_MilColorTransfIdentity;
      *(_OWORD *)((char *)this + 84) = xmmword_180107C10;
      *(_OWORD *)((char *)this + 100) = xmmword_180107C20;
      *(_OWORD *)((char *)this + 116) = xmmword_180107C30;
      *(_OWORD *)((char *)this + 132) = xmmword_180107C40;
      *(_OWORD *)((char *)this + 148) = xmmword_180107C50;
      v6 = 1065353216;
LABEL_12:
      *((_DWORD *)this + 41) = v6;
      return v3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xA8u, 0LL);
  }
  else if ( memcmp_0((char *)this + 68, a2, 0x64uLL) )
  {
    v7 = (CColorTransformResourceProxy **)((char *)this + 40);
    if ( *((_QWORD *)this + 5)
      || (ColorTransformResourceProxy = CCompositor::CreateColorTransformResourceProxy(
                                          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                                          (CResourceProxy **)this + 5),
          v3 = ColorTransformResourceProxy,
          ColorTransformResourceProxy >= 0) )
    {
      v9 = CColorTransformResourceProxy::Update(*v7, a2);
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xB6u, 0LL);
        return v3;
      }
      v10 = CMagnifierRenderTargetProxy::SetColorTransform(*((CMagnifierRenderTargetProxy **)this + 3), *v7);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xB8u, 0LL);
        return v3;
      }
      *(_OWORD *)((char *)this + 68) = *(_OWORD *)a2;
      *(_OWORD *)((char *)this + 84) = *((_OWORD *)a2 + 1);
      *(_OWORD *)((char *)this + 100) = *((_OWORD *)a2 + 2);
      *(_OWORD *)((char *)this + 116) = *((_OWORD *)a2 + 3);
      *(_OWORD *)((char *)this + 132) = *((_OWORD *)a2 + 4);
      *(_OWORD *)((char *)this + 148) = *((_OWORD *)a2 + 5);
      v6 = *((_DWORD *)a2 + 24);
      goto LABEL_12;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ColorTransformResourceProxy, 0xB3u, 0LL);
  }
  return v3;
}
