/*
 * XREFs of ?GetBackBuffer@CConversionSwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x180218F50
 * Callers:
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180086570 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?IsDesktopRect@CConversionSwapChain@@IEBA_NAEBUtagRECT@@@Z @ 0x1802D48E8 (-IsDesktopRect@CConversionSwapChain@@IEBA_NAEBUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IDeviceTarget *__fastcall CConversionSwapChain::GetBackBuffer(CConversionSwapChain *this)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 62) + 144LL))(*((_QWORD *)this + 62));
  return (struct IDeviceTarget *)((v1 + 16) & -(__int64)(v1 != 0));
}
