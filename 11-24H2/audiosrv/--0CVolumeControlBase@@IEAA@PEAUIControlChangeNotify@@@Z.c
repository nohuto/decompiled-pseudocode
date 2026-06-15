/*
 * XREFs of ??0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z @ 0x18007492C
 * Callers:
 *     ??0CVolumeHardware@@AEAA@PEAUIControlChangeNotify@@@Z @ 0x1800748CC (--0CVolumeHardware@@AEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ??0CVolumeSoftware@@AEAA@PEAUIControlChangeNotify@@@Z @ 0x1801129D4 (--0CVolumeSoftware@@AEAA@PEAUIControlChangeNotify@@@Z.c)
 * Callees:
 *     ??0AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x18000A2E4 (--0AudioSrvVolumeTelemetry@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 */

// Hidden C++ exception states: #wind=5
CVolumeControlBase *__fastcall CVolumeControlBase::CVolumeControlBase(
        CVolumeControlBase *this,
        struct IControlChangeNotify *a2)
{
  *(_QWORD *)this = &CVolumeControlBase::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 8), 0, 0);
  *((_DWORD *)this + 12) = 51;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 16) = a2;
  AudioSrvVolumeTelemetry::AudioSrvVolumeTelemetry((CVolumeControlBase *)((char *)this + 136));
  *((_QWORD *)this + 17) = &AudioSrvVolumeTelemetryEndpointVolume::`vftable';
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 60) = 1;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids, this);
  }
  return this;
}
