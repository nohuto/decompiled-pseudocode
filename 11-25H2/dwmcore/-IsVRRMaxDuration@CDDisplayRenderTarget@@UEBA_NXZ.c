/*
 * XREFs of ?IsVRRMaxDuration@CDDisplayRenderTarget@@UEBA_NXZ @ 0x180233800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDDisplayRenderTarget::IsVRRMaxDuration(CDDisplayRenderTarget *this)
{
  return *((_QWORD *)this + 4185) == 0xFFFFFFFFLL;
}
