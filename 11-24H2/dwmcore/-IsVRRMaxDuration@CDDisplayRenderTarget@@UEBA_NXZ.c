/*
 * XREFs of ?IsVRRMaxDuration@CDDisplayRenderTarget@@UEBA_NXZ @ 0x180227EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDDisplayRenderTarget::IsVRRMaxDuration(CDDisplayRenderTarget *this)
{
  return *((_QWORD *)this + 4137) == 0xFFFFFFFFLL;
}
