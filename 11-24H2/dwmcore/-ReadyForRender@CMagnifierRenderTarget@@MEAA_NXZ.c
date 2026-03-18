/*
 * XREFs of ?ReadyForRender@CMagnifierRenderTarget@@MEAA_NXZ @ 0x180159140
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ @ 0x180159A70 (-ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ.c)
 */

bool __fastcall CMagnifierRenderTarget::ReadyForRender(CMagnifierRenderTarget *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 2992) )
    return COffScreenRenderTarget::ReadyForRender(this);
  return v1;
}
