/*
 * XREFs of ?ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ @ 0x180159A70
 * Callers:
 *     ?ReadyForRender@CMagnifierRenderTarget@@MEAA_NXZ @ 0x180159140 (-ReadyForRender@CMagnifierRenderTarget@@MEAA_NXZ.c)
 *     ?ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ @ 0x1801593D0 (-ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ.c)
 *     ?ReadyForRender@CIndirectSwapchainRenderTarget@@MEAA_NXZ @ 0x1801599D0 (-ReadyForRender@CIndirectSwapchainRenderTarget@@MEAA_NXZ.c)
 *     ?ReadyForRender@CVisualCapture@@MEAA_NXZ @ 0x1802A8BC0 (-ReadyForRender@CVisualCapture@@MEAA_NXZ.c)
 * Callees:
 *     ?IsRenderTime@COffScreenRenderTarget@@MEAA_NXZ @ 0x180159AC0 (-IsRenderTime@COffScreenRenderTarget@@MEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COffScreenRenderTarget::ReadyForRender(COffScreenRenderTarget *this)
{
  char v1; // bl
  __int64 (*v2)(void); // rax
  char IsRenderTime; // al

  v1 = 0;
  if ( *((_QWORD *)this + 14) )
  {
    v2 = *(__int64 (**)(void))(*(_QWORD *)this + 248LL);
    if ( (char *)v2 == (char *)COffScreenRenderTarget::IsRenderTime )
      IsRenderTime = COffScreenRenderTarget::IsRenderTime(this);
    else
      IsRenderTime = v2();
    if ( IsRenderTime )
      return 1;
  }
  return v1;
}
