/*
 * XREFs of ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x180097F44
 * Callers:
 *     ?Present@CDDASwapChain@@QEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180097BA0 (-Present@CDDASwapChain@@QEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x1801C6F50 (-PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4.c)
 *     ?Present@CLegacyStereoSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1802CAA00 (-Present@CLegacyStereoSwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std.c)
 *     ?PresentDFlip@CLegacyStereoSwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x1802CAB20 (-PresentDFlip@CLegacyStereoSwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TY.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180106F10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?CheckForLeakedDWMSwapChain@CD3DDevice@@CAXPEAUIDXGISwapChainDWM1@@@Z @ 0x1801C7A38 (-CheckForLeakedDWMSwapChain@CD3DDevice@@CAXPEAUIDXGISwapChainDWM1@@@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x180250164 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::Present(CD3DDevice *this, struct IDXGISwapChainDWM1 *a2)
{
  unsigned int v4; // esi
  int v5; // ebx
  __int64 v6; // rax
  int v8; // eax
  int v9; // ecx
  int v10; // r9d
  int v11; // [rsp+80h] [rbp+8h] BYREF

  v4 = -2003304307;
  if ( *((_DWORD *)this + 278) )
  {
    v5 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x35Fu, 0LL);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, struct IDXGISwapChainDWM1 *))(**((_QWORD **)this + 28) + 104LL))(
           *((_QWORD *)this + 28),
           a2);
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x369u, 0LL);
    }
    else
    {
      v6 = 0LL;
      if ( g_pComposition )
        v6 = *((_QWORD *)g_pComposition + 111);
      *((_QWORD *)this + 185) = v6;
      *((_BYTE *)this + 1499) = 0;
      if ( v5 == 142213121 )
        CD3DDevice::CheckForLeakedDWMSwapChain(a2);
    }
  }
  if ( !*((_DWORD *)this + 278)
    && (v5 == -2005532292 || v5 == -2147024882 || v5 == -2005270523)
    && *((_DWORD *)this + 112) )
  {
    if ( v5 == -2005270523 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 69) + 312LL))(*((_QWORD *)this + 69));
      v9 = *((_DWORD *)this + 278);
      if ( v8 != -2005270480 )
      {
        if ( !v9 )
          *((_DWORD *)this + 278) = -2005270523;
LABEL_22:
        if ( *((_DWORD *)this + 278) )
          return v4;
        goto LABEL_12;
      }
      if ( !v9 )
        *((_DWORD *)this + 278) = -2005270480;
    }
    CD2DContext::TempDisableHardwareProtection((CD3DDevice *)((char *)this + 16));
  }
  if ( v5 < 0 )
    goto LABEL_22;
LABEL_12:
  v11 = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v5, 1LL, &v11) )
  {
    v10 = v11;
    if ( v11 == -2003304307 )
    {
      if ( v5 >= 0 )
        v5 = -2003304307;
      if ( !*((_DWORD *)this + 278) )
        *((_DWORD *)this + 278) = v5;
    }
    v5 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xB31u, 0LL);
  }
  return (unsigned int)v5;
}
