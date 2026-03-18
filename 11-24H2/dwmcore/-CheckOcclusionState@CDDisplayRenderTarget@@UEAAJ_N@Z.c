/*
 * XREFs of ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x180235B80
 * Callers:
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@WEI@EAAJ_N@Z @ 0x180276240 (-CheckOcclusionState@CDDisplayRenderTarget@@WEI@EAAJ_N@Z.c)
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@WFA@EAAJ_N@Z @ 0x180276250 (-CheckOcclusionState@CDDisplayRenderTarget@@WFA@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18009823C (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@QEAA_NXZ @ 0x18009A69C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x1801581DC (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Clo_ea_1801581DC.c)
 *     ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x180188CA0 (-UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x180235DA0 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?CheckOcclusionState@CDDisplaySwapChain@@UEBAJXZ @ 0x18023F960 (-CheckOcclusionState@CDDisplaySwapChain@@UEBAJXZ.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x14Cu, 0LL);
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetImpl'::`2'::impl) )
  {
    if ( v5 != -2147023728 )
    {
      if ( v5 != -2005270526 && v5 != -2003304309 )
      {
        if ( !v5 )
        {
          v10 = *((_DWORD *)this + 8272);
          if ( a2 )
          {
            CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30680);
            *((_BYTE *)this + 33424) = 1;
            if ( v10 == 1 )
              *((_DWORD *)this + 8272) = 2;
            return v5;
          }
          if ( v10 == 1 )
          {
            v11 = CDDisplaySwapChain::CheckOcclusionState((CDDisplaySwapChain *)(*((_QWORD *)this + 14) + 24LL));
            v5 = v11;
            if ( v11 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x1BCu, 0LL);
              return v5;
            }
            if ( v11 == 142213121 )
              return v5;
            *((_DWORD *)this + 8272) = 2;
            CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30680);
            goto LABEL_35;
          }
        }
        return v5;
      }
      return 142213121;
    }
LABEL_37:
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=((void **)this + 11);
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
    goto LABEL_37;
  }
  if ( *((_DWORD *)this + 8272) == 1 || !*((_DWORD *)g_pComposition + 1615) )
  {
    v8 = 1;
LABEL_12:
    v9 = CDDisplaySwapChain::CheckOcclusionState((CDDisplaySwapChain *)(v6 + 24));
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x15Eu, 0LL);
      return v5;
    }
    if ( v9 == 142213121 )
    {
      *((_DWORD *)this + 8272) = 1;
      return v5;
    }
    if ( !v8 && v9 != 142213129 )
    {
LABEL_36:
      CDDisplayRenderTarget::UpdateMPOCaps((CDDisplayRenderTarget *)((char *)this + 64));
      return 0;
    }
    CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30680);
    *((_DWORD *)this + 8272) = 2;
LABEL_35:
    *((_BYTE *)this + 33424) = 1;
    goto LABEL_36;
  }
  v8 = 0;
  if ( a2 )
    goto LABEL_12;
  return v5;
}
