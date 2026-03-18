/*
 * XREFs of ?GetRenderTargetInfo@CLegacyRenderTarget@@WFA@EBA?AVRenderTargetInfo@@XZ @ 0x180276F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  return CDDisplayRenderTarget::GetRenderTargetInfo(a1 - 80, a2);
}
