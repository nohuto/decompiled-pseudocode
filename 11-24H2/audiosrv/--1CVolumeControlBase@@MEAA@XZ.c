/*
 * XREFs of ??1CVolumeControlBase@@MEAA@XZ @ 0x180112A64
 * Callers:
 *     ??1CVolumeHardware@@EEAA@XZ @ 0x1800A257C (--1CVolumeHardware@@EEAA@XZ.c)
 *     ??1CVolumeSoftware@@EEAA@XZ @ 0x180112B10 (--1CVolumeSoftware@@EEAA@XZ.c)
 *     ??_ECVolumeControlBase@@MEAAPEAXI@Z @ 0x180112E80 (--_ECVolumeControlBase@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180019F28 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1AudioSrvVolumeTelemetryEndpointVolume@@QEAA@XZ @ 0x1800721EC (--1AudioSrvVolumeTelemetryEndpointVolume@@QEAA@XZ.c)
 *     ??1?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@QEAA@XZ @ 0x1800A035C (--1-$CAtlArray@PEAVEndpointInfo@@V-$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 */

void __fastcall CVolumeControlBase::~CVolumeControlBase(CVolumeControlBase *this)
{
  *(_QWORD *)this = &CVolumeControlBase::`vftable';
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids, this);
  }
  AudioSrvVolumeTelemetryEndpointVolume::~AudioSrvVolumeTelemetryEndpointVolume((CVolumeControlBase *)((char *)this + 136));
  ATL::CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>>::~CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>>((void **)this + 10);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)this + 8);
  CoTaskMemFree(*((LPVOID *)this + 7));
  *((_QWORD *)this + 7) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
}
