/*
 * XREFs of ??1CVolumeStrip@@MEAA@XZ @ 0x18004799C
 * Callers:
 *     ??_GCVolumeStrip@@MEAAPEAXI@Z @ 0x180047960 (--_GCVolumeStrip@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180019F28 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAA@XZ @ 0x180047A4C (--1-$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAA@XZ.c)
 *     ??1?$CLockedList_UniqueValuesOnly@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@QEAA@XZ @ 0x180047A98 (--1-$CLockedList_UniqueValuesOnly@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$0A@@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVolumeStrip::~CVolumeStrip(CVolumeStrip *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CVolumeStrip::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 1) = &CVolumeStrip::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IVolumeStrip>'};
  v2 = *((_QWORD *)this + 21);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 21) = 0LL;
  }
  v3 = *((_QWORD *)this + 22);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 22) = 0LL;
  }
  v4 = *((_QWORD *)this + 23);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 23) = 0LL;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)this + 19);
  CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>::~CLockedList_UniqueValuesOnly<ATL::CComPtr<IAudioEndpointVolumeCallback>,0>((char *)this + 88);
  CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::~CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>((char *)this + 24);
  *((_DWORD *)this + 5) = -1073741823;
}
