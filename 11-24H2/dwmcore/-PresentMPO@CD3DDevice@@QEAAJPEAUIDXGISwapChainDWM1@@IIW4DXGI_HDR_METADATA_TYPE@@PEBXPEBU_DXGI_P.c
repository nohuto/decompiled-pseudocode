/*
 * XREFs of ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1801C77F0
 * Callers:
 *     ?PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x1801C6F50 (-PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4.c)
 *     ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180240710 (-PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OV.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180106F10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?CheckForLeakedDWMSwapChain@CD3DDevice@@CAXPEAUIDXGISwapChainDWM1@@@Z @ 0x1801C7A38 (-CheckForLeakedDWMSwapChain@CD3DDevice@@CAXPEAUIDXGISwapChainDWM1@@@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x180250164 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::PresentMPO(CD3DDevice *this, struct IDXGISwapChainDWM1 *a2)
{
  int v4; // ebx
  __int64 v5; // rax
  int v7; // eax
  int v8; // ecx
  int v9; // r9d
  int v10; // [rsp+70h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 278) )
  {
    v4 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x38Cu, 0LL);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, struct IDXGISwapChainDWM1 *))(**((_QWORD **)this + 28) + 112LL))(
           *((_QWORD *)this + 28),
           a2);
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x394u, 0LL);
    }
    else
    {
      v5 = 0LL;
      if ( g_pComposition )
        v5 = *((_QWORD *)g_pComposition + 111);
      *((_QWORD *)this + 185) = v5;
      *((_BYTE *)this + 1499) = 0;
      if ( v4 == 142213121 )
        CD3DDevice::CheckForLeakedDWMSwapChain(a2);
    }
  }
  if ( *((_DWORD *)this + 278)
    || v4 != -2005532292 && v4 != -2147024882 && v4 != -2005270523
    || !*((_DWORD *)this + 112) )
  {
    goto LABEL_11;
  }
  if ( v4 != -2005270523 )
  {
LABEL_20:
    CD2DContext::TempDisableHardwareProtection((CD3DDevice *)((char *)this + 16));
    goto LABEL_11;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 69) + 312LL))(*((_QWORD *)this + 69));
  v8 = *((_DWORD *)this + 278);
  if ( v7 == -2005270480 )
  {
    if ( v8 )
      goto LABEL_20;
    *((_DWORD *)this + 278) = -2005270480;
    CD2DContext::TempDisableHardwareProtection((CD3DDevice *)((char *)this + 16));
LABEL_11:
    if ( v4 >= 0 )
      goto LABEL_12;
    goto LABEL_21;
  }
  if ( !v8 )
    *((_DWORD *)this + 278) = -2005270523;
LABEL_21:
  if ( *((_DWORD *)this + 278) )
    return 2291662989LL;
LABEL_12:
  v10 = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v4, 1, &v10) )
  {
    v9 = v10;
    if ( v10 == -2003304307 )
    {
      if ( v4 >= 0 )
        v4 = -2003304307;
      if ( !*((_DWORD *)this + 278) )
        *((_DWORD *)this + 278) = v4;
    }
    v4 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xB31u, 0LL);
  }
  return (unsigned int)v4;
}
