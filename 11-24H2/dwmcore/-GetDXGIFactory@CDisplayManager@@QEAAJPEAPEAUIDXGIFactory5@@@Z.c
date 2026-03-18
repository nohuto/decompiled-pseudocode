/*
 * XREFs of ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x180156C80
 * Callers:
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x180156F18 (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x18022D3E0 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCCompSwapChain@@@Z @ 0x1802BC5AC (-CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTarg.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180106F10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x180154DCC (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 */

__int64 __fastcall CDisplayManager::GetDXGIFactory(CDisplayManager *this, struct IDXGIFactory5 **a2)
{
  int DXGIFactory; // eax
  unsigned int v3; // ebx
  CDisplayManager *v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = this;
  DXGIFactory = CDisplayManager::InternalGetDXGIFactory(this, a2);
  LODWORD(v5) = DXGIFactory;
  v3 = DXGIFactory;
  if ( DXGIFactory < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032D458, 2u, DXGIFactory, 0x33u, 0LL);
    TranslateDXGIorD3DErrorInContext(v3, 4, &v5);
    return (unsigned int)v5;
  }
  return v3;
}
