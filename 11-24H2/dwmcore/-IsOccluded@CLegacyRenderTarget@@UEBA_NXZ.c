/*
 * XREFs of ?IsOccluded@CLegacyRenderTarget@@UEBA_NXZ @ 0x1801F40B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLegacyRenderTarget::IsOccluded(CLegacyRenderTarget *this)
{
  return *((_DWORD *)this + 8252) == 1;
}
