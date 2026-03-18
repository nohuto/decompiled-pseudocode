/*
 * XREFs of ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18009823C
 * Callers:
 *     ?CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ @ 0x180096F3C (-CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180099330 (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateTargetDirty@COffScreenRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x180158B90 (-UpdateTargetDirty@COffScreenRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 *     ?HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ @ 0x180188E50 (-HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?UpdateAlphaMode@CDDisplayRenderTarget@@IEAAXXZ @ 0x180189A34 (-UpdateAlphaMode@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x180189DD4 (-ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDER.c)
 *     ?UpdateAlphaMode@CLegacyRenderTarget@@IEAAXXZ @ 0x18018A414 (-UpdateAlphaMode@CLegacyRenderTarget@@IEAAXXZ.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1801E4EBC (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 *     ?CheckOcclusionState@CDDARenderTarget@@UEAAJ_N@Z @ 0x1801F1630 (-CheckOcclusionState@CDDARenderTarget@@UEAAJ_N@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180205940 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?ForceFullDirty@CLegacyRenderTarget@@UEAAXXZ @ 0x1802229C0 (-ForceFullDirty@CLegacyRenderTarget@@UEAAXXZ.c)
 *     ?ForceFullDirty@CDDisplayRenderTarget@@UEAAXXZ @ 0x180226410 (-ForceFullDirty@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ?ForceFullDirty@COffScreenRenderTarget@@UEAAXXZ @ 0x1802275B0 (-ForceFullDirty@COffScreenRenderTarget@@UEAAXXZ.c)
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x1802357C0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x180235B80 (-CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x180235DA0 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x180236660 (-UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 *     ?SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z @ 0x180247E9C (-SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z.c)
 *     ?SetSDRBoost@CDDisplayRenderTarget@@IEAAXM@Z @ 0x180247F2C (-SetSDRBoost@CDDisplayRenderTarget@@IEAAXM@Z.c)
 *     ?ForceFullDirty@CRemoteRenderTarget@@UEAAXXZ @ 0x180276460 (-ForceFullDirty@CRemoteRenderTarget@@UEAAXXZ.c)
 *     ?ForceFullDirty@CDDARenderTarget@@UEAAXXZ @ 0x18027E5C0 (-ForceFullDirty@CDDARenderTarget@@UEAAXXZ.c)
 *     ?SetSDRBoost@CDDARenderTarget@@QEAAXM@Z @ 0x18027EC08 (-SetSDRBoost@CDDARenderTarget@@QEAAXM@Z.c)
 *     ?HandleDDAArrivalOrDeparture@CDDisplayRenderTarget@@UEAAJXZ @ 0x18027F3C0 (-HandleDDAArrivalOrDeparture@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x18027F698 (-ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRE.c)
 *     ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x18027FF70 (-EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ.c)
 *     ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x180280640 (-ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDER.c)
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180280E34 (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?ForceFullDirty@CRemoteAppRenderTarget@@UEAAXXZ @ 0x180280F70 (-ForceFullDirty@CRemoteAppRenderTarget@@UEAAXXZ.c)
 *     ?Present@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18028114C (-Present@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180281524 (-Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z @ 0x180281C48 (-SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z.c)
 *     ?UpdateTransformAndTreeBounds@CRemoteAppRenderTarget@@IEAAXXZ @ 0x180281D38 (-UpdateTransformAndTreeBounds@CRemoteAppRenderTarget@@IEAAXXZ.c)
 *     _lambda_62ff84c7c0707752f96e4fa15018ccd2_::operator() @ 0x1802821A0 (_lambda_62ff84c7c0707752f96e4fa15018ccd2_--operator().c)
 *     ?UpdateTargetDirty@CIndirectSwapchainRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1802838D0 (-UpdateTargetDirty@CIndirectSwapchainRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x180283A6C (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ @ 0x180284150 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?GetRects@?$CMergedRectBase@$07@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x180096E84 (-GetRects@-$CMergedRectBase@$07@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?Add@?$CMergedRectBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098318 (-Add@-$CMergedRectBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?Reset@?$CMergedRectBase@$07@@QEAAXXZ @ 0x18009A1D4 (-Reset@-$CMergedRectBase@$07@@QEAAXXZ.c)
 *     ?DoesContain@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1801B3040 (-DoesContain@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??A?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@QEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_K@Z @ 0x1801F2F8C (--A-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUnique.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTargetDirtyBase<8>::SetFullDirty(__int64 a1)
{
  __m128 v2; // xmm1
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rax
  __m128 v6; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = (__m128)_mm_loadu_si128((const __m128i *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 32LL))(*(_QWORD *)(a1 + 8)));
  v6 = v2;
  if ( _mm_shuffle_ps(v2, v2, 170).m128_f32[0] <= v2.m128_f32[0]
    || _mm_shuffle_ps(v2, v2, 255).m128_f32[0] <= _mm_shuffle_ps(v2, v2, 85).m128_f32[0] )
  {
    return CTargetDirtyBase<8>::Reset(a1);
  }
  if ( !*(_BYTE *)(a1 + 2312)
    || !*(_BYTE *)(a1 + 2313)
    && (CMergedRectBase<8>::GetRects((unsigned int *)(a1 + 16), v7),
        v5 = gsl::span<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> const,-1>::operator[](
               v7,
               0LL),
        !(unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::DoesContain(v5, &v6)) )
  {
    *(_BYTE *)(a1 + 2313) = 1;
  }
  CMergedRectBase<8>::Reset(a1 + 16);
  result = CMergedRectBase<8>::Add(v3, &v6);
  if ( *(_QWORD *)(a1 + 464) )
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, 0LL);
  *(_BYTE *)(a1 + 2312) = 1;
  return result;
}
