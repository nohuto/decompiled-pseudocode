/*
 * XREFs of ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z @ 0x180068194
 * Callers:
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800602A0 (-CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TY.c)
 *     ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180066F30 (-CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_.c)
 *     ?CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18023F060 (-CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPOR.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1801DE5E0 (--$_Emplace_reallocate@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@.c)
 *     ??1?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@QEAA@XZ @ 0x1801DE880 (--1-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@@QEAA@XZ.c)
 *     ??$make_unique@VCCheckMPOCache@@AEAPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@AEAIAEA_N$0A@@std@@YA?AV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@0@AEAPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@AEAIAEA_N@Z @ 0x1801F2900 (--$make_unique@VCCheckMPOCache@@AEAPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@AEAIAEA_.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1802B8250 (--$_Emplace_reallocate@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCa.c)
 *     ??$make_unique@VCBetterCheckMPOCache@@AEAPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@AEAIAEA_NAEA_K$0A@@std@@YA?AV?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@0@AEAPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@AEAIAEA_NAEA_K@Z @ 0x1802B83D8 (--$make_unique@VCBetterCheckMPOCache@@AEAPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@AE.c)
 *     ??1?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@QEAA@XZ @ 0x1802B8C3C (--1-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@@@std@@@std@@QEAA.c)
 */

void __fastcall CD3DDevice::AddCheckMPOCache(
        CD3DDevice *this,
        const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *a2,
        int a3,
        char a4)
{
  __int64 *v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _BYTE v11[16]; // [rsp+30h] [rbp-10h] BYREF
  const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *v12; // [rsp+68h] [rbp+28h] BYREF
  int v13; // [rsp+70h] [rbp+30h] BYREF
  char v14; // [rsp+78h] [rbp+38h] BYREF

  v14 = a4;
  v13 = a3;
  v12 = a2;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
  {
    v5 = (__int64 *)std::make_unique<CBetterCheckMPOCache,DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO const * &,unsigned int &,bool &,unsigned __int64 &,0>(
                      (unsigned int)v11,
                      (unsigned int)&v12,
                      (unsigned int)&v13,
                      (unsigned int)&v14,
                      (__int64)this + 1456);
    v6 = (_QWORD *)*((_QWORD *)this + 180);
    if ( v6 == *((_QWORD **)this + 181) )
    {
      std::vector<std::unique_ptr<CBetterCheckMPOCache>>::_Emplace_reallocate<std::unique_ptr<CBetterCheckMPOCache>>(
        (char *)this + 1432,
        v6,
        v5);
    }
    else
    {
      v7 = *v5;
      *v5 = 0LL;
      *v6 = v7;
      *((_QWORD *)this + 180) += 8LL;
    }
    std::unique_ptr<CBetterCheckMPOCache>::~unique_ptr<CBetterCheckMPOCache>(v11);
  }
  else
  {
    v8 = (__int64 *)std::make_unique<CCheckMPOCache,DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO const * &,unsigned int &,bool &,0>(
                      v11,
                      &v12,
                      &v13,
                      &v14);
    v9 = (_QWORD *)*((_QWORD *)this + 177);
    if ( v9 == *((_QWORD **)this + 178) )
    {
      std::vector<std::unique_ptr<CCheckMPOCache>>::_Emplace_reallocate<std::unique_ptr<CCheckMPOCache>>(
        (char *)this + 1408,
        v9,
        v8);
    }
    else
    {
      v10 = *v8;
      *v8 = 0LL;
      *v9 = v10;
      *((_QWORD *)this + 177) += 8LL;
    }
    std::unique_ptr<CCheckMPOCache>::~unique_ptr<CCheckMPOCache>(v11);
  }
}
