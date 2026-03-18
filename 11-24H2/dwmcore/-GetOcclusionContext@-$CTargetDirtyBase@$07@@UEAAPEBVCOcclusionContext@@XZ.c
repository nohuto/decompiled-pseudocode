/*
 * XREFs of ?GetOcclusionContext@?$CTargetDirtyBase@$07@@UEAAPEBVCOcclusionContext@@XZ @ 0x180098A10
 * Callers:
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180099330 (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180072B00 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x180098B00 (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     ?GetDeviceTransform@CDDARenderTarget@@UEBAAEBVCMILMatrix@@XZ @ 0x180098B30 (-GetDeviceTransform@CDDARenderTarget@@UEBAAEBVCMILMatrix@@XZ.c)
 *     ?CalcOcclusion@?$CTargetDirtyBase@$07@@IEAAJAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1800F75B4 (-CalcOcclusion@-$CTargetDirtyBase@$07@@IEAAJAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x180241D00 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTargetDirtyBase<8>::GetOcclusionContext(__int64 a1)
{
  CDDARenderTarget *v2; // rcx
  __int64 (*v3)(void); // rax
  CMILMatrix *DeviceTransform; // rax
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(CDDARenderTarget **)(a1 + 8);
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 64LL);
  if ( (char *)v3 == (char *)CDDARenderTarget::GetDeviceTransform )
    DeviceTransform = CDDARenderTarget::GetDeviceTransform(v2);
  else
    DeviceTransform = (CMILMatrix *)v3();
  if ( !CMILMatrix::Is2DAxisAlignedPreserving(DeviceTransform) )
  {
    *(_BYTE *)(a1 + 2313) = 0;
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 2313) )
  {
    if ( COcclusionContext::IsCurrent((COcclusionContext *)(a1 + 472)) )
      return v5;
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 456) )
    CMergedRectBase<8>::Optimize(a1 + 16);
  gsl::details::extent_type<-1>::extent_type<-1>(v7, *(unsigned int *)(a1 + 16));
  v7[1] = a1 + 20;
  if ( v7[0] == -1LL || a1 == -20 && v7[0] )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  if ( (int)CTargetDirtyBase<8>::CalcOcclusion(a1, v7) < 0 )
    return 0LL;
  return a1 + 472;
}
