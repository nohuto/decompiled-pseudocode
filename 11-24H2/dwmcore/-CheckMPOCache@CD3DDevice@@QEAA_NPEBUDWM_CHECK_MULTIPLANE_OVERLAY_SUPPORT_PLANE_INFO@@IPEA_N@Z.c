/*
 * XREFs of ?CheckMPOCache@CD3DDevice@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1802B8D4C
 * Callers:
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800602A0 (-CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TY.c)
 *     ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180066F30 (-CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_.c)
 *     ?CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18023F060 (-CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPOR.c)
 * Callees:
 *     ?Check@CCheckMPOCache@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18003A380 (-Check@CCheckMPOCache@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     ?IsEqual@PlaneInfo@CBetterCheckMPOCache@@QEBA_NAEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z @ 0x1802BA6B4 (-IsEqual@PlaneInfo@CBetterCheckMPOCache@@QEBA_NAEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_IN.c)
 */

char __fastcall CD3DDevice::CheckMPOCache(
        CD3DDevice *this,
        const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  __int64 v5; // rbp
  _QWORD *v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  CCheckMPOCache **v14; // rbx
  CCheckMPOCache **v15; // rdi

  v5 = a3;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
  {
    if ( !*((_BYTE *)this + 1501) )
    {
      ++*((_QWORD *)this + 182);
      *((_BYTE *)this + 1501) = 1;
    }
    v8 = (_QWORD *)*((_QWORD *)this + 180);
    while ( v8 != *((_QWORD **)this + 179) )
    {
      v9 = (_QWORD *)*--v8;
      if ( v5 == 0x86BCA1AF286BCA1BuLL * ((__int64)(*(_QWORD *)(*v8 + 8LL) - *(_QWORD *)*v8) >> 2) )
      {
        v10 = 0LL;
        if ( !(_DWORD)v5 )
        {
LABEL_10:
          *(_QWORD *)(*v8 + 480LL) = *((_QWORD *)this + 182);
          v11 = *v8;
          v12 = (_QWORD *)(*((_QWORD *)this + 180) - 8LL);
          *a4 = *(_BYTE *)(*v8 + 488LL);
          if ( v8 != v12 )
          {
            *v8 = *v12;
            *v12 = v11;
          }
          return 1;
        }
        while ( CBetterCheckMPOCache::PlaneInfo::IsEqual(
                  (CBetterCheckMPOCache::PlaneInfo *)(*v9 + 76LL * (unsigned int)v10),
                  (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)((char *)a2 + 144 * v10)) )
        {
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= (unsigned int)v5 )
            goto LABEL_10;
        }
      }
    }
  }
  else
  {
    v14 = (CCheckMPOCache **)*((_QWORD *)this + 176);
    v15 = (CCheckMPOCache **)*((_QWORD *)this + 177);
    while ( v14 != v15 )
    {
      if ( CCheckMPOCache::Check(*v14, a2, v5, a4) )
        return 1;
      ++v14;
    }
  }
  return 0;
}
