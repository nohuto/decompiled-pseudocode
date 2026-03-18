/*
 * XREFs of ?Present@CDDASwapChain@@QEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180097BA0
 * Callers:
 *     ?Present@CDDARenderTarget@@IEAAJXZ @ 0x180097A78 (-Present@CDDARenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180057BD0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x180097F44 (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetDevice@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAPEAVCD3DDevice@@XZ @ 0x1802CDA00 (-GetDevice@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAPEAVCD3DDevice.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDASwapChain::Present(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rcx
  CD3DDevice *v8; // rbx
  __int64 (*v9)(void); // rax
  __int64 Device; // rax
  const struct tagRECT *v11; // rcx
  int v12; // eax
  unsigned int v13; // edi
  unsigned int v15; // [rsp+38h] [rbp-10h]

  v5 = *(_QWORD *)(a1 + 64);
  v8 = 0LL;
  if ( v5
    && ((v9 = *(__int64 (**)(void))(*(_QWORD *)v5 + 40LL),
         v9 != IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice)
      ? (Device = v9())
      : (Device = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice()),
        (v8 = (CD3DDevice *)Device) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(Device + 8));
    v11 = *(const struct tagRECT **)a4;
    v15 = (__int64)(*(_QWORD *)(a4 + 8) - *(_QWORD *)a4) >> 4;
    if ( !v15 )
      v11 = 0LL;
    v12 = CD3DDevice::Present(v8, *(struct IDXGISwapChainDWM1 **)(a1 + 56), 1u, a3, 0, 0LL, v11, v15);
    v13 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x63u, 0LL);
  }
  else
  {
    v13 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x67u, 0LL);
  }
  **(_DWORD **)(a1 + 112) = 0;
  if ( v8 )
    CD3DDevice::Release(v8);
  return v13;
}
