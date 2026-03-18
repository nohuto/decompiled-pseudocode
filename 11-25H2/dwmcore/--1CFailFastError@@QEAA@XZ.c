/*
 * XREFs of ??1CFailFastError@@QEAA@XZ @ 0x18024C9D8
 * Callers:
 *     ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x1800C6E9C (-Present@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x1800C7AC8 (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVCLegacySwapChain@@@Z @ 0x18023598C (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x18023EBE0 (-CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x18023F450 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x1801994B0 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 *     ?IsFailFastTriggered@@YA_NXZ @ 0x18025019C (-IsFailFastTriggered@@YA_NXZ.c)
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
