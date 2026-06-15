/*
 * XREFs of ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x14003E08C
 * Callers:
 *     ??_GCDeviceGraphObjectCache@@MEAAPEAXI@Z @ 0x14003E050 (--_GCDeviceGraphObjectCache@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x14000474C (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ?ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x140005DF0 (-ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?ReleaseConnection@CDeviceGraphObjectCache@@UEAAJ_K@Z @ 0x140008DB0 (-ReleaseConnection@CDeviceGraphObjectCache@@UEAAJ_K@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B8BC (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXXZ @ 0x14003E188 (-RemoveAll@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall CDeviceGraphObjectCache::~CDeviceGraphObjectCache(CDeviceGraphObjectCache *this)
{
  CDeviceGraphObjectCache *v2; // rsi
  char *v3; // rdi
  struct IAudioProcessingObject ***Head; // rax

  *(_QWORD *)this = &CDeviceGraphObjectCache::`vftable'{for `IInspectable'};
  v2 = (CDeviceGraphObjectCache *)((char *)this + 8);
  *((_QWORD *)this + 1) = &CDeviceGraphObjectCache::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IDeviceGraphObjectCache,IWeakReferenceSource,IDeviceGraphObjectCacheInternal>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CDeviceGraphObjectCache::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IDeviceGraphObjectCacheInternal>'};
  *((_BYTE *)this + 200) = 1;
  while ( *((_QWORD *)this + 15) )
  {
    Head = (struct IAudioProcessingObject ***)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead((_QWORD *)this + 13);
    CDeviceGraphObjectCache::ReleaseAPO(v2, **Head);
  }
  v3 = (char *)this + 152;
  while ( *((_QWORD *)this + 21) )
  {
    if ( !*(_QWORD *)v3 )
      ATL::AtlThrowImpl(-2147467259);
    CDeviceGraphObjectCache::ReleaseConnection(v2, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 16LL) + 16LL));
  }
  ATL::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll((char *)this + 152);
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)this + 104);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 12);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 6);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::Collections::IVector<EventRegistrationToken>,Windows::Foundation::Collections::IIterable<EventRegistrationToken>,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::Collections::IVector<EventRegistrationToken>,Windows::Foundation::Collections::IIterable<EventRegistrationToken>,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>((__int64)this);
}
