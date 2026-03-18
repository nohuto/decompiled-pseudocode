/*
 * XREFs of ?GetBackBuffer@CDDisplaySwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x18002C470
 * Callers:
 *     ?NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18002C7D0 (-NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil.c)
 * Callees:
 *     <none>
 */

struct IDeviceTarget *__fastcall CDDisplaySwapChain::GetBackBuffer(CDDisplaySwapChain *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 55) + 8LL * *((unsigned int *)this + 125)) + 216LL);
  return (struct IDeviceTarget *)((v1 + 16) & -(__int64)(v1 != 0));
}
