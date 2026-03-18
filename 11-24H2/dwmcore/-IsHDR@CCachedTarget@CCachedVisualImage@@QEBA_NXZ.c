/*
 * XREFs of ?IsHDR@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x1801AE640
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x1801AE0BC (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 * Callees:
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180061250 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA?AVRenderTargetInfo@@XZ @ 0x180108750 (-GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA-AVRenderTargetInfo@@XZ.c)
 */

bool __fastcall CCachedVisualImage::CCachedTarget::IsHDR(CCachedVisualImage::CCachedTarget *this)
{
  RenderTargetInfo *RenderTargetInfo; // rax
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  RenderTargetInfo = (RenderTargetInfo *)CCachedVisualImage::CCachedTarget::GetRenderTargetInfo(
                                           (__int64)this,
                                           (__int64)v3);
  return RenderTargetInfo::IsHDR(RenderTargetInfo);
}
