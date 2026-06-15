/*
 * XREFs of ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x18008609C
 * Callers:
 *     ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x180085CC0 (-OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?ReloadVolumeState@CVolumeHardware@@MEAAXXZ @ 0x180114F40 (-ReloadVolumeState@CVolumeHardware@@MEAAXXZ.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180048740 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x180086208 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     WPP_SF_dg @ 0x1800C344C (WPP_SF_dg.c)
 *     WPP_SF_qd @ 0x1800C3678 (WPP_SF_qd.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeHardware::ReadChannelLevelsFromHardware(CVolumeHardware *this)
{
  int v1; // edi
  unsigned int v3; // esi
  __int64 v4; // rcx
  float *v5; // rax
  float v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 32) )
  {
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 38LL, &WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids, this);
    }
    v3 = 0;
    if ( !*((_DWORD *)this + 29) )
    {
LABEL_17:
      CVolumeControlBase::RecalcMasterFromChannelLevels(this);
      return (unsigned int)v1;
    }
    while ( 1 )
    {
      v4 = *((_QWORD *)this + 32);
      v7 = 0.0;
      v1 = (*(__int64 (__fastcall **)(__int64, _QWORD, float *))(*(_QWORD *)v4 + 40LL))(v4, v3, &v7);
      if ( v1 < 0 )
        break;
      if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
        && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_dg(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, &WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids, v3, v7);
      }
      v5 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v3++);
      v5[1] = fmaxf(fminf(v7, v5[5]), v5[2]);
      if ( v3 >= *((_DWORD *)this + 29) )
        goto LABEL_17;
    }
  }
  else
  {
    v1 = -2147418113;
  }
  AudSrvTraceLoggingErrorHelper("CVolumeHardware::ReadChannelLevelsFromHardware", 1730, v1);
  return (unsigned int)v1;
}
