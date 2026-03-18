/*
 * XREFs of ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x18023F210
 * Callers:
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@WEI@EAAJ_N@Z @ 0x180280CB0 (-CheckOcclusionState@CDDisplayRenderTarget@@WEI@EAAJ_N@Z.c)
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@WFA@EAAJ_N@Z @ 0x180280CC0 (-CheckOcclusionState@CDDisplayRenderTarget@@WFA@EAAJ_N@Z.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@QEAA_NXZ @ 0x1800C865C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x1800FEF54 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?CheckOcclusionState@CDDisplaySwapChain@@UEBAJXZ @ 0x180211C30 (-CheckOcclusionState@CDDisplaySwapChain@@UEBAJXZ.c)
 *     ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x18022B9A0 (-UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x18023F450 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_FBR@@@details@wil@@QEAA_NXZ @ 0x18024CF98 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_FBR@@@details@wil@@QEAA_.c)
 */

__int64 __fastcall CDDisplayRenderTarget::CheckOcclusionState(CDDisplayRenderTarget *this, char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  char v8; // si
  int v9; // eax
  int v10; // esi
  int v11; // eax

  v4 = CDDisplayRenderTarget::TryEnsureSwapChain((CDDisplayRenderTarget *)((char *)this - 96));
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x16Cu, 0LL);
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetImpl'::`2'::impl) )
  {
    if ( v5 != -2147023728 )
    {
      if ( v5 != -2005270526 && v5 != -2003304309 )
      {
        if ( !v5 )
        {
          v10 = *((_DWORD *)this + 8368);
          if ( a2 )
          {
            CTargetDirtyBase<8>::SetFullDirty((__int64)this + 31064);
            *((_BYTE *)this + 33808) = 1;
            if ( v10 == 1 )
              *((_DWORD *)this + 8368) = 2;
            return v5;
          }
          if ( v10 == 1 )
          {
            v11 = CDDisplaySwapChain::CheckOcclusionState((CDDisplaySwapChain *)(*((_QWORD *)this + 14) + 24LL));
            v5 = v11;
            if ( v11 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x1F2u, 0LL);
              return v5;
            }
            if ( v11 == 142213121 )
              return v5;
            *((_DWORD *)this + 8368) = 2;
            CTargetDirtyBase<8>::SetFullDirty((__int64)this + 31064);
            goto LABEL_38;
          }
        }
        return v5;
      }
      return 142213121;
    }
LABEL_40:
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=((__int64)this + 88);
    return 142213121;
  }
  v6 = *((_QWORD *)this + 14);
  if ( !v6 )
    return 142213121LL;
  if ( (v5 & 0x80000000) != 0 )
  {
    if ( v5 != -2147023728 )
    {
      if ( v5 != -2005270526 && v5 != -2003304309 )
        return v5;
      return 142213121;
    }
    goto LABEL_40;
  }
  if ( *((_DWORD *)this + 8368) == 1 || !*((_DWORD *)g_pComposition + 1621) )
  {
    v8 = 1;
    goto LABEL_12;
  }
  v8 = 0;
  if ( a2 )
  {
LABEL_12:
    v9 = CDDisplaySwapChain::CheckOcclusionState((CDDisplaySwapChain *)(v6 + 24));
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x17Eu, 0LL);
      return v5;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplay_FBR>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DDisplay_FBR>::GetImpl'::`2'::impl) )
    {
      if ( v5 != 142213121 )
      {
        if ( !v8 && v5 != 142213129 )
          goto LABEL_39;
        goto LABEL_21;
      }
    }
    else if ( v5 != 142213121 )
    {
LABEL_21:
      CTargetDirtyBase<8>::SetFullDirty((__int64)this + 31064);
      *((_DWORD *)this + 8368) = 2;
LABEL_38:
      *((_BYTE *)this + 33808) = 1;
LABEL_39:
      CDDisplayRenderTarget::UpdateMPOCaps((CDirectFlipInfo **)this + 8);
      return 0;
    }
    *((_DWORD *)this + 8368) = 1;
  }
  return v5;
}
