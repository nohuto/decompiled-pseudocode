/*
 * XREFs of ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180159B58
 * Callers:
 *     ?Present@CIndirectSwapchainRenderTarget@@MEAAJXZ @ 0x1800F4560 (-Present@CIndirectSwapchainRenderTarget@@MEAAJXZ.c)
 *     ?ReadyForRender@CIndirectSwapchainRenderTarget@@MEAA_NXZ @ 0x1801599D0 (-ReadyForRender@CIndirectSwapchainRenderTarget@@MEAA_NXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180106F10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180159C2C (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18028376C (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::TryTargetNextBuffer(CIndirectSwapchainRenderTarget *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax
  int RenderTargetForAcquiredBuffer; // eax
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 351);
  if ( v3 && !*((_QWORD *)this + 352) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, 0LL);
    v7 = v4;
    if ( v4 < 0 )
    {
      TranslateDXGIorD3DErrorInContext(v4, 0, &v7);
      v2 = v7;
      if ( v7 == -2005270490 )
      {
        CIndirectSwapchainRenderTarget::Unregister(this);
        return 0;
      }
      if ( v7 == -2147483638 )
      {
        CComposition::ScheduleCompositionPass(*((_QWORD *)this + 3), 0, 0x1000u);
        v2 = 0;
      }
    }
    else
    {
      RenderTargetForAcquiredBuffer = CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer(this);
      v2 = RenderTargetForAcquiredBuffer;
      if ( RenderTargetForAcquiredBuffer < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, RenderTargetForAcquiredBuffer, 0x18Bu, 0LL);
    }
    if ( v2 == -2003304307 )
      CIndirectSwapchainRenderTarget::Unregister(this);
  }
  return v2;
}
