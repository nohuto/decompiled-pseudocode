/*
 * XREFs of ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90
 * Callers:
 *     ?UpdateAlphaMode@CLegacyRenderTarget@@IEAAXXZ @ 0x1800C2F58 (-UpdateAlphaMode@CLegacyRenderTarget@@IEAAXXZ.c)
 *     ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800C33F8 (-ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDER.c)
 *     ?UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1800C4140 (-UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C7228 (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ @ 0x180160D54 (-CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1801A8D4C (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 *     ?CheckOcclusionState@CDDARenderTarget@@UEAAJ_N@Z @ 0x1801FDBB0 (-CheckOcclusionState@CDDARenderTarget@@UEAAJ_N@Z.c)
 *     ?HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ @ 0x18020F620 (-HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x1802121D0 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?UpdateTargetDirty@COffScreenRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1802289A0 (-UpdateTargetDirty@COffScreenRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 *     ?UpdateAlphaMode@CDDisplayRenderTarget@@IEAAXXZ @ 0x18022BA04 (-UpdateAlphaMode@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?ForceFullDirty@CLegacyRenderTarget@@UEAAXXZ @ 0x18022DDF0 (-ForceFullDirty@CLegacyRenderTarget@@UEAAXXZ.c)
 *     ?ForceFullDirty@CDDisplayRenderTarget@@UEAAXXZ @ 0x180232080 (-ForceFullDirty@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ?ForceFullDirty@COffScreenRenderTarget@@UEAAXXZ @ 0x180232E40 (-ForceFullDirty@COffScreenRenderTarget@@UEAAXXZ.c)
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x18023EE50 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x18023F210 (-CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x18023F450 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?UpdateTargetDirty@CIndirectSwapchainRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x18024F660 (-UpdateTargetDirty@CIndirectSwapchainRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 *     ?SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z @ 0x180252E48 (-SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z.c)
 *     ?SetSDRBoost@CDDisplayRenderTarget@@IEAAXM@Z @ 0x180252ED8 (-SetSDRBoost@CDDisplayRenderTarget@@IEAAXM@Z.c)
 *     ?ForceFullDirty@CRemoteRenderTarget@@UEAAXXZ @ 0x180280EF0 (-ForceFullDirty@CRemoteRenderTarget@@UEAAXXZ.c)
 *     ?ForceFullDirty@CDDARenderTarget@@UEAAXXZ @ 0x1802895E0 (-ForceFullDirty@CDDARenderTarget@@UEAAXXZ.c)
 *     ?SetSDRBoost@CDDARenderTarget@@QEAAXM@Z @ 0x180289C48 (-SetSDRBoost@CDDARenderTarget@@QEAAXM@Z.c)
 *     ?HandleDDAArrivalOrDeparture@CDDisplayRenderTarget@@UEAAJXZ @ 0x18028A1E0 (-HandleDDAArrivalOrDeparture@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x18028A4B8 (-ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRE.c)
 *     ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x18028ACC0 (-EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ.c)
 *     ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x18028B390 (-ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDER.c)
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18028BB84 (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?ForceFullDirty@CRemoteAppRenderTarget@@UEAAXXZ @ 0x18028BCC0 (-ForceFullDirty@CRemoteAppRenderTarget@@UEAAXXZ.c)
 *     ?Present@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18028BE9C (-Present@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028C274 (-Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z @ 0x18028C998 (-SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z.c)
 *     ?UpdateTransformAndTreeBounds@CRemoteAppRenderTarget@@IEAAXXZ @ 0x18028CA88 (-UpdateTransformAndTreeBounds@CRemoteAppRenderTarget@@IEAAXXZ.c)
 *     _lambda_d632561372f60ca28cb2b9bb8a736df3_::operator() @ 0x18028D144 (_lambda_d632561372f60ca28cb2b9bb8a736df3_--operator().c)
 *     ?AddCursorInvalidRects_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAXXZ @ 0x18028D2AC (-AddCursorInvalidRects_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x18028F00C (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ @ 0x18028F6F0 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?Add@?$CMergedRectBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C406C (-Add@-$CMergedRectBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?GetRects@?$CMergedRectBase@$07@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800C519C (-GetRects@-$CMergedRectBase@$07@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?Reset@?$CMergedRectBase@$07@@QEAAXXZ @ 0x1800C8194 (-Reset@-$CMergedRectBase@$07@@QEAAXXZ.c)
 *     ?DoesContain@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1801C3150 (-DoesContain@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??A?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@QEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_K@Z @ 0x1801FF67C (--A-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUnique.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTargetDirtyBase<8>::SetFullDirty(__int64 a1)
{
  __m128 v2; // xmm1
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rax
  __m128 v6; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF

  v2 = (__m128)_mm_loadu_si128((const __m128i *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 32LL))(*(_QWORD *)(a1 + 8)));
  v6 = v2;
  if ( _mm_shuffle_ps(v2, v2, 170).m128_f32[0] <= v2.m128_f32[0]
    || _mm_shuffle_ps(v2, v2, 255).m128_f32[0] <= _mm_shuffle_ps(v2, v2, 85).m128_f32[0] )
  {
    return CTargetDirtyBase<8>::Reset(a1);
  }
  if ( !*(_BYTE *)(a1 + 2312)
    || !*(_BYTE *)(a1 + 2313)
    && (CMergedRectBase<8>::GetRects(a1 + 16, v7),
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
