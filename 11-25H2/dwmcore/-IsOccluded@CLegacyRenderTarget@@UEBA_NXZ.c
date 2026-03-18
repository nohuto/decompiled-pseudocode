/*
 * XREFs of ?IsOccluded@CLegacyRenderTarget@@UEBA_NXZ @ 0x1802007A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLegacyRenderTarget::IsOccluded(CLegacyRenderTarget *this)
{
  return *((_DWORD *)this + 8348) == 1;
}
