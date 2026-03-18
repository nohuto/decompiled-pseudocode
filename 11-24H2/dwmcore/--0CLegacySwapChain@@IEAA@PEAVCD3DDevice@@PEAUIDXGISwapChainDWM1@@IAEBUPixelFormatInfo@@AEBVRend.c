/*
 * XREFs of ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@IAEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@W4Enum@FrontBufferRender@@@Z @ 0x1802C97E4
 * Callers:
 *     ?Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@FrontBufferRender@@PEAPEAV1@@Z @ 0x1801E4888 (-Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@A.c)
 *     ?Create@CLegacyStereoSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1802CA7E8 (-Create@CLegacyStereoSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainD.c)
 *     ??0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@U_LUID@@III@Z @ 0x1802CAE6C (--0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVR.c)
 * Callees:
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ??0CScribbleSwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@W4Enum@FrontBufferRender@@@Z @ 0x18024AC10 (--0CScribbleSwapChain@@IEAA@PEAVCD3DDevice@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefre.c)
 *     ??0?$unordered_map@IVCFlipAwayFence@@U?$hash@I@std@@U?$equal_to@I@3@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@@std@@QEAA@XZ @ 0x1802C9770 (--0-$unordered_map@IVCFlipAwayFence@@U-$hash@I@std@@U-$equal_to@I@3@V-$allocator@U-$pair@$$CBIVC.c)
 */

__int64 __fastcall CLegacySwapChain::CLegacySwapChain(
        __int64 a1,
        struct CD3DDevice *a2,
        __int64 a3,
        int a4,
        const struct PixelFormatInfo *a5,
        const struct RenderTargetInfo *a6,
        struct RefreshRateInfo *a7,
        unsigned int a8,
        unsigned int a9,
        struct _LUID a10,
        int a11)
{
  __int64 result; // rax

  CScribbleSwapChain::CScribbleSwapChain(a1, a2, a5, a6, a7, a8, a9, a10, a11);
  *(_QWORD *)a1 = &CLegacySwapChain::`vftable'{for `COverlaySwapChain'};
  *(_QWORD *)(a1 + 24) = &CLegacySwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(a1 + 32) = &CDDisplaySwapChain::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(a1 + 256) = &CConversionSwapChain::`vftable'{for `IScribbleSwapChain'};
  *(_QWORD *)(a1 + 280) = &CLegacyStereoSwapChain::`vftable';
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    (_QWORD *)(a1 + 288),
    a3);
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = a1 + 328;
  *(_QWORD *)(a1 + 312) = a1 + 328;
  *(_QWORD *)(a1 + 320) = a1 + 376;
  *(_QWORD *)(a1 + 376) = a1 + 400;
  *(_QWORD *)(a1 + 384) = a1 + 400;
  *(_QWORD *)(a1 + 392) = a1 + 424;
  std::unordered_map<unsigned int,CFlipAwayFence>::unordered_map<unsigned int,CFlipAwayFence>(a1 + 424);
  *(_QWORD *)(a1 + 488) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 500) = 0LL;
  *(_DWORD *)(a1 + 496) = a4;
  return result;
}
