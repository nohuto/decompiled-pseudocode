/*
 * XREFs of ?GetRenderTargetInfo@CLegacyRenderTarget@@WEI@EBA?AVRenderTargetInfo@@XZ @ 0x180276F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  return CDDisplayRenderTarget::GetRenderTargetInfo(a1 - 72, a2);
}
