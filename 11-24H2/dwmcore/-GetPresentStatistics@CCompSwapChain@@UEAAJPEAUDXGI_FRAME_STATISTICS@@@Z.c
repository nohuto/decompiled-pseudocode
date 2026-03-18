/*
 * XREFs of ?GetPresentStatistics@CCompSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x1802C7A40
 * Callers:
 *     ?GetPresentStatistics@CRemoteAppRenderTarget@@UEBAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x180280FF0 (-GetPresentStatistics@CRemoteAppRenderTarget@@UEBAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180106F10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompSwapChain::GetPresentStatistics(CCompSwapChain *this, struct DXGI_FRAME_STATISTICS *a2)
{
  int v2; // eax
  int v3; // ebx
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, struct DXGI_FRAME_STATISTICS *))(**((_QWORD **)this + 8) + 128LL))(
         *((_QWORD *)this + 8),
         a2);
  v5 = v2;
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032CEC8, 3u, v2, 0xB6u, 0LL);
  TranslateDXGIorD3DErrorInContext(v3, 0, &v5);
  return v5;
}
