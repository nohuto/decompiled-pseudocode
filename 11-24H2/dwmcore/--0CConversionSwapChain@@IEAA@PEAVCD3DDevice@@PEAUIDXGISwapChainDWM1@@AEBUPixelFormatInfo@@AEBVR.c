/*
 * XREFs of ??0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@U_LUID@@III@Z @ 0x1802CAE6C
 * Callers:
 *     ?Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCLegacySwapChain@@@Z @ 0x1802CB298 (-Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM.c)
 * Callees:
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@IAEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@W4Enum@FrontBufferRender@@@Z @ 0x1802C97E4 (--0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@IAEBUPixelFormatInfo@@AEBVRend.c)
 */

CConversionSwapChain *__fastcall CConversionSwapChain::CConversionSwapChain(
        CConversionSwapChain *this,
        struct CD3DDevice *a2,
        struct IDXGISwapChainDWM1 *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        const struct RefreshRateInfo *a6,
        struct _LUID a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10)
{
  CConversionSwapChain *result; // rax

  CLegacySwapChain::CLegacySwapChain((__int64)this, a2, (__int64)a3, a8, a4, a5, a6, a9, a10, a7, 0);
  *(_QWORD *)this = &CConversionSwapChain::`vftable'{for `COverlaySwapChain'};
  *((_QWORD *)this + 3) = &CConversionSwapChain::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 4) = &CConversionSwapChain::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 32) = &CConversionSwapChain::`vftable'{for `IScribbleSwapChain'};
  *((_QWORD *)this + 35) = &CConversionSwapChain::`vftable'{for `CLegacySwapChain'};
  *((_QWORD *)this + 64) = &CConversionSwapChain::`vftable'{for `IConversionSwapChain'};
  *((_QWORD *)this + 65) = 0LL;
  *((_DWORD *)this + 135) = 0;
  memset_0((char *)this + 544, 0, 0x100uLL);
  *((_QWORD *)this + 100) = (char *)this + 808;
  *((_DWORD *)this + 202) = 0;
  result = this;
  *((_QWORD *)this + 109) = 0LL;
  *((_QWORD *)this + 110) = 0LL;
  *((_QWORD *)this + 111) = 0LL;
  *((_QWORD *)this + 112) = 0LL;
  *((_BYTE *)this + 904) = 0;
  *((_DWORD *)this + 132) = 10;
  *((_DWORD *)this + 133) = 3;
  *((_DWORD *)this + 134) = 1;
  return result;
}
