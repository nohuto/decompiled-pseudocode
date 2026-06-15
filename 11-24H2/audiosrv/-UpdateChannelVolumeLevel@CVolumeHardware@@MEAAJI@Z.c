/*
 * XREFs of ?UpdateChannelVolumeLevel@CVolumeHardware@@MEAAJI@Z @ 0x180086BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180048740 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     WPP_SF_dg @ 0x1800C344C (WPP_SF_dg.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeHardware::UpdateChannelVolumeLevel(CVolumeHardware *this, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  float *v4; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64, char *); // rbx
  __int64 v7; // r8

  v2 = a2;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                    (_QWORD *)this + 10,
                    (unsigned int)v2);
    WPP_SF_dg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      37LL,
      &WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids,
      (unsigned int)v2,
      fmaxf(fminf(v4[1], v4[3]), v4[2]));
  }
  v5 = *((_QWORD *)this + 32);
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v5 + 48LL);
  ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v2);
  return v6(v5, (unsigned int)v2, v7, (char *)this + 264);
}
