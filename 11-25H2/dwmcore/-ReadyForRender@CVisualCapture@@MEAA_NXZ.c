/*
 * XREFs of ?ReadyForRender@CVisualCapture@@MEAA_NXZ @ 0x1802B2680
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ @ 0x1800C4C70 (-ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ.c)
 */

char __fastcall CVisualCapture::ReadyForRender(CVisualCapture *this)
{
  char v1; // bl

  v1 = 1;
  if ( *((_DWORD *)this + 696) != 1 || !COffScreenRenderTarget::ReadyForRender(this) )
    return 0;
  return v1;
}
