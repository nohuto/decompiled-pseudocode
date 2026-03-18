/*
 * XREFs of ??1CFailFastError@@QEAA@XZ @ 0x180243AA0
 * Callers:
 *     ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x18009912C (-Present@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x180099BC8 (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAPEAUID3D11Device1@@@Z @ 0x1801DEB7C (-CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEA_NPEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVE.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x180235580 (-CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x180235DA0 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVCLegacySwapChain@@@Z @ 0x18023EA98 (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 * Callees:
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x18019EC30 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 *     ?IsFailFastTriggered@@YA_NXZ @ 0x180245B80 (-IsFailFastTriggered@@YA_NXZ.c)
 */

void __fastcall CFailFastError::~CFailFastError(CFailFastError *this)
{
  int *v1; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (int *)*((_QWORD *)this + 1);
  if ( v1 && *v1 < 0 && IsFailFastTriggered() )
  {
    MilFailFastForHR(g_hrNoHardwareDeviceOverride, retaddr);
    __debugbreak();
  }
  g_hrNoHardwareDeviceOverride = *(_DWORD *)this;
}
