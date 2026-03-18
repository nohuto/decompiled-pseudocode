/*
 * XREFs of ?AttributesMatch@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x180108E84
 * Callers:
 *     ?HasValidRenderingRealization@CWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x180108AF4 (-HasValidRenderingRealization@CWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?HasValidRealization@CWindowBackgroundBitmapProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z @ 0x180108BD0 (-HasValidRealization@CWindowBackgroundBitmapProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z.c)
 *     ?FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo@@@Z @ 0x1801DBA64 (-FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo.c)
 * Callees:
 *     ?GetRenderTargetInfo@CRenderTargetBitmap@@UEBA?AVRenderTargetInfo@@XZ @ 0x1800B1630 (-GetRenderTargetInfo@CRenderTargetBitmap@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CCachedImageProducer::CCachedRealization::AttributesMatch(
        CCachedImageProducer::CCachedRealization *this,
        const struct RenderTargetInfo *a2)
{
  __int64 v2; // rcx
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  __int64 RenderTargetInfo; // rax
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)this;
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 88LL);
  if ( v4 == CRenderTargetBitmap::GetRenderTargetInfo )
    RenderTargetInfo = CRenderTargetBitmap::GetRenderTargetInfo(v2, (__int64)v7);
  else
    RenderTargetInfo = v4(v2, (__int64)v7);
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 4) - *(float *)(RenderTargetInfo + 16)) & _xmm) <= 0.0000011920929;
}
