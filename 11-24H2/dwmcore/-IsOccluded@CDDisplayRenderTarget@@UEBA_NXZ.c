/*
 * XREFs of ?IsOccluded@CDDisplayRenderTarget@@UEBA_NXZ @ 0x1801FE030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDDisplayRenderTarget::IsOccluded(CDDisplayRenderTarget *this)
{
  return *((_DWORD *)this + 8256) == 1;
}
