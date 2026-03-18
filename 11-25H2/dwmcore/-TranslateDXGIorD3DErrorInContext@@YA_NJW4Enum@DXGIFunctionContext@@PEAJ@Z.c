/*
 * XREFs of ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180142B50
 * Callers:
 *     ?GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z @ 0x18003EBE0 (-GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180041094 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z @ 0x1800C1FD4 (-GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?Present@CCaptureRenderTarget@@MEAAJXZ @ 0x1800C28E0 (-Present@CCaptureRenderTarget@@MEAAJXZ.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1800C38AC (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1800C4784 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800C4D70 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x1800C5E70 (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x1800D7AD0 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ?PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x1800D8170 (-PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800D8BD0 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?EndDraw@CD2DContext@@AEAAJXZ @ 0x1800D93D0 (-EndDraw@CD2DContext@@AEAAJXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800D9780 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DB068 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1800FFCE0 (-GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJXZ @ 0x180102A80 (-Initialize@CRedirectedGDISurface@@IEAAJXZ.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180103B80 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x180104810 (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x180104D8C (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 *     ?DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1801164E0 (-DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD2DContext@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180118204 (-TranslateDXGIorD3DErrorInContext@CD2DContext@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?GetPresentStatisticsDWM@CLegacySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180141F70 (-GetPresentStatisticsDWM@CLegacySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z @ 0x180142160 (-PrepareIndexBuffer@CD3DBatchExecutionContext@@AEAAJI@Z.c)
 *     ?BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z @ 0x180142590 (-BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z.c)
 *     ?Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x180142820 (-Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180142A00 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x180142F10 (-EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 *     ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180162780 (-EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComma.c)
 *     ?EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z @ 0x180163A80 (-EmitGeometry@CMegaRectBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801AA44C (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1801C0CF0 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1801C1470 (-PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_P.c)
 *     ?SignalRenderFence@CD3DDevice@@QEAAJ_K@Z @ 0x1801D83AC (-SignalRenderFence@CD3DDevice@@QEAAJ_K@Z.c)
 *     ?GetAdapter@CDisplayManager@@QEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x18020A27C (-GetAdapter@CDisplayManager@@QEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@0IPEAPEAUIDXGIOutputDWM@@@Z @ 0x18020A2E0 (-GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@0IPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x18028F00C (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 *     ?GetRemotingDXGIOutput@CDisplayManager@@QEAAJPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z @ 0x1802C947C (-GetRemotingDXGIOutput@CDisplayManager@@QEAAJPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?ValidateLuidAndMonitor@CDisplayManager@@QEAAJU_LUID@@PEAUHMONITOR__@@@Z @ 0x1802C9644 (-ValidateLuidAndMonitor@CDisplayManager@@QEAAJU_LUID@@PEAUHMONITOR__@@@Z.c)
 *     ?GetPresentStatistics@CCompSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x1802D0CC0 (-GetPresentStatistics@CCompSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TranslateDXGIorD3DErrorInContext(int a1, int a2, _DWORD *a3)
{
  unsigned __int8 v3; // r9
  int v4; // edx
  unsigned int v6; // ecx
  int v7; // edx
  bool v8; // zf
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax

  v3 = 0;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        if ( a1 == -2147467259 )
          goto LABEL_11;
        if ( a1 == 142213127 || a1 == -2005270491 || a1 == -2005270494 )
          goto LABEL_17;
        if ( (unsigned int)(a1 + 2005270523) <= 2 || a1 == -2005532292 || a1 == -2005270496 )
          goto LABEL_11;
        v8 = a1 == -2005270428;
        goto LABEL_80;
      case 2:
        v9 = (unsigned int)(a1 + 2005270524);
        if ( (unsigned int)v9 <= 0x21 )
        {
          v10 = 0x240000001LL;
          if ( _bittest64(&v10, v9) )
            goto LABEL_17;
        }
        if ( a1 == 142213127 )
          goto LABEL_17;
        if ( a1 == -2147467259 )
          goto LABEL_11;
        v11 = a1 + 2005270526;
        if ( v11 <= 0x1E )
        {
          v12 = 1073741865;
          if ( _bittest(&v12, v11) )
            goto LABEL_11;
        }
        return v3;
      case 3:
        if ( a1 != -805306246 && a1 != -805306355 && a1 != -805306282 && a1 != -805306367 )
          goto LABEL_63;
        goto LABEL_17;
      case 4:
        if ( a1 != -2005270526 && a1 != -2147467263 && a1 != -2147024809 && a1 != -2147024865 && a1 != -2003304291 )
          return v3;
LABEL_17:
        *a3 = -2003304442;
        return 1;
      case 5:
      case 6:
LABEL_63:
        v13 = a1 + 2005270523;
        if ( v13 <= 0x1D )
        {
          v14 = 671088645;
          if ( _bittest(&v14, v13) )
            goto LABEL_11;
        }
        return v3;
      case 7:
        if ( a1 != -2005530509
          && a1 != -2147024809
          && a1 != -2005270523
          && a1 != -2005270521
          && a1 != -2003304442
          && a1 != -2003304307 )
        {
          return v3;
        }
        goto LABEL_72;
      case 8:
        if ( a1 == -2003292404
          || a1 == -2005532292
          || a1 == -2005530512
          || a1 == -2147024809
          || a1 == -2003304307
          || a1 == -2003304442
          || a1 == -2005530509
          || a1 == -2005270523
          || a1 == -2005270521
          || a1 == -1071243253 )
        {
          goto LABEL_72;
        }
        if ( a1 != -2003304290 )
          return v3;
        *a3 = 0;
        return 1;
      case 9:
        if ( a1 == -2147024890 || a1 == -2147023728 || a1 == -2147024809 || a1 == -2147024895 )
          goto LABEL_72;
        if ( a1 != -1071243253 )
          return v3;
        *a3 = 0;
        return 1;
      case 10:
        if ( a1 == -2147023728 || a1 == -1071243253 )
          goto LABEL_72;
        if ( a1 != -2147024890 )
          return v3;
        *a3 = 0;
        return 1;
      case 11:
        if ( a1 == -1071243253 || a1 == -2147023728 || a1 == -2147024890 )
        {
LABEL_72:
          *a3 = 0;
          return 1;
        }
        if ( a1 != -2147024809 )
          return v3;
        *a3 = 0;
        return 1;
      case 12:
      case 13:
        v8 = a1 == -2003292412;
LABEL_80:
        if ( v8 )
          goto LABEL_11;
        return v3;
      case 14:
        if ( a1 == -2147024882 )
        {
          *a3 = -2005532292;
          return 1;
        }
        v6 = a1 + 2005270523;
        if ( v6 > 0x1B )
          return v3;
        v7 = 134217733;
        if ( !_bittest(&v7, v6) )
          return 0LL;
        break;
      case 15:
        goto LABEL_2;
      default:
        return v3;
    }
    goto LABEL_11;
  }
LABEL_2:
  if ( (unsigned int)(a1 + 2005270523) <= 0x1B && (v4 = 134217733, _bittest(&v4, a1 + 2005270523)) || a1 == -2003238900 )
  {
LABEL_11:
    *a3 = -2003304307;
    return 1;
  }
  if ( a1 == -2005270494 )
  {
    *a3 = -2003304442;
    return 1;
  }
  return v3;
}
