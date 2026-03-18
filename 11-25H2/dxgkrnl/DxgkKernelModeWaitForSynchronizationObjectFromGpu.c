/*
 * XREFs of DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x1402AB2A0
 * Callers:
 *     ?SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z @ 0x1400378D0 (-SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z.c)
 *     ?AddWaitToContext@CAdapter@@UEAAJII_K@Z @ 0x140099160 (-AddWaitToContext@CAdapter@@UEAAJII_K@Z.c)
 *     ?IssueFlipManagerWaitForFlipAway@CAdapter@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@_K@Z @ 0x140099804 (-IssueFlipManagerWaitForFlipAway@CAdapter@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET.c)
 *     ?IssueFlipManagerWaitForFrameRenderingComplete@CAdapter@@QEAAJPEAUFlipManagerObject@@_K@Z @ 0x140099900 (-IssueFlipManagerWaitForFrameRenderingComplete@CAdapter@@QEAAJPEAUFlipManagerObject@@_K@Z.c)
 * Callees:
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1402AB300 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

__int64 __fastcall DxgkKernelModeWaitForSynchronizationObjectFromGpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *a1)
{
  return DxgkWaitForSynchronizationObjectFromGpuInternal(a1, 0, 1, 0LL, 1);
}
