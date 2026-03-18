/*
 * XREFs of ?PresentRateSupportsOverlay@CGlobalCompositionSurfaceInfo@@UEAA_NXZ @ 0x1802373C0
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 */

char __fastcall CGlobalCompositionSurfaceInfo::PresentRateSupportsOverlay(CGlobalCompositionSurfaceInfo *this)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned int v5; // ebx
  __int64 v6; // rcx
  bool v7; // cf
  __int64 v8; // rcx
  unsigned int v9; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
  {
    if ( *((_BYTE *)this + 299) )
    {
      v5 = CCommonRegistryData::OverlayMinFPSToKeep;
    }
    else
    {
      v2 = *((_QWORD *)this + 35);
      if ( v2 )
      {
        v3 = *((_QWORD *)g_pComposition + 37);
        if ( v3 >= v2
          && v3 - v2 <= g_qpcFrequency.QuadPart
                      * (unsigned __int64)(unsigned int)CCommonRegistryData::OverlayDebounceTimeMs
                      / 0x3E8 )
        {
          return 0;
        }
      }
      v5 = CCommonRegistryData::OverlayMinFPSToEnable;
    }
    if ( v5 )
    {
      v6 = *((_QWORD *)this + 4);
      v9 = 0;
      NtQueryCompositionSurfaceFrameRate(v6, &v9);
      v7 = v9 < v5;
      return !v7;
    }
  }
  else if ( CCommonRegistryData::OverlayMinFPS )
  {
    v8 = *((_QWORD *)this + 4);
    v9 = 0;
    NtQueryCompositionSurfaceFrameRate(v8, &v9);
    v7 = v9 < CCommonRegistryData::OverlayMinFPS;
    return !v7;
  }
  return 1;
}
