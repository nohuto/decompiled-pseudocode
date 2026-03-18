/*
 * XREFs of ?IsVRRMaxDuration@CLegacyRenderTarget@@UEBA_NXZ @ 0x180218910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLegacyRenderTarget::IsVRRMaxDuration(CLegacyRenderTarget *this)
{
  return *((_QWORD *)this + 4135) == 0xFFFFFFFFLL;
}
