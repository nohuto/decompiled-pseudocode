/*
 * XREFs of ?FinalRelease@CRenderTarget@@MEAAXXZ @ 0x180229010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTarget::FinalRelease(CRenderTarget *this)
{
  if ( *((_BYTE *)this + 156) )
    CRenderTarget::RemoveFromRenderTargetManager(this);
}
