/*
 * XREFs of ?IsInitialRender@CCachedImageProducer@@IEBA_NXZ @ 0x18011B004
 * Callers:
 *     ?ProduceRealizationInternal@CShadowBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011AD84 (-ProduceRealizationInternal@CShadowBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealiza.c)
 *     ?ProduceRealization@CShadowMaskProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1802E4AF0 (-ProduceRealization@CShadowMaskProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCa.c)
 *     ?ProduceRealizationInternal@CShadowMaskCachingBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802E4C04 (-ProduceRealizationInternal@CShadowMaskCachingBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCa.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CCachedImageProducer::IsInitialRender(CCachedImageProducer *this)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  return *(_DWORD *)(*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this + 2) + 32LL))((char *)this + 16, &v2) == 0;
}
