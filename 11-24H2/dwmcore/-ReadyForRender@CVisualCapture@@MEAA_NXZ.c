/*
 * XREFs of ?ReadyForRender@CVisualCapture@@MEAA_NXZ @ 0x1802A8BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ @ 0x180159A70 (-ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ.c)
 */

char __fastcall CVisualCapture::ReadyForRender(CVisualCapture *this)
{
  char v1; // bl

  v1 = 1;
  if ( *((_DWORD *)this + 696) != 1 || !COffScreenRenderTarget::ReadyForRender(this) )
    return 0;
  return v1;
}
