/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioCrossProcessFormatCorruption@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x140082A24
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioCrossProcessFormatCorruption@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x14008236C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioCrossProc.c)
 * Callees:
 *     ?WilApi_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x140085458 (-WilApi_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2605@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1400854FC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2605@@@details@wil@@QEAA_N.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AudioCrossProcessFormatCorruption>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2,
        enum FEATURE_CHANGE_TIME a3,
        int *a4)
{
  enum FEATURE_ENABLED_STATE FeatureEnabledState; // eax
  unsigned int v6; // r9d
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // edi
  char v11; // si
  char IsEnabled; // al

  FeatureEnabledState = wil::details::WilApi_GetFeatureEnabledState((wil::details *)0x39F75AF, (unsigned int)a2, a3, a4);
  *a2 = 0LL;
  v6 = FeatureEnabledState & 0xFFFFFF3F;
  v7 = ((FeatureEnabledState & 3) << 7) | ((FeatureEnabledState & 0x80) != 0 ? 0x400 : 0) | ((FeatureEnabledState & 0x40) != 0
                                                                                           ? 0x800
                                                                                           : 0);
  *(_DWORD *)a2 = v7;
  if ( (FeatureEnabledState & 0xFFFFFF3F) != 0 )
  {
    v8 = 0;
    if ( v6 == 2 )
      v8 = 64;
  }
  else
  {
    v8 = 64;
  }
  v9 = v8 | v7;
  *(_DWORD *)a2 = v9;
  v10 = 1;
  if ( (v9 & 0xC00) == 0xC00 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    if ( (v9 & 0x40) == 0 )
    {
LABEL_13:
      v10 = 0;
      goto LABEL_14;
    }
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_MediaQI2605>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_MediaQI2605>::GetImpl'::`2'::impl);
  v9 = *(_DWORD *)a2;
  if ( v11 && !IsEnabled )
    v9 &= ~0x400u;
  if ( (v9 & 0x40) == 0 || !IsEnabled )
    goto LABEL_13;
LABEL_14:
  *(_DWORD *)a2 = v10 | v9 & 0xFFFFFFFE;
  return a2;
}
