/*
 * XREFs of ??1CSpatialAudioResourceManager@Sarm@@UEAA@XZ @ 0x180117F78
 * Callers:
 *     ??_ECSpatialAudioResourceManager@Sarm@@UEAAPEAXI@Z @ 0x180118160 (--_ECSpatialAudioResourceManager@Sarm@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1CWorkFifo@@QEAA@XZ @ 0x180118040 (--1CWorkFifo@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAXXZ @ 0x18011A1D0 (-RemoveAll@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudioSt.c)
 *     ?RemoveAll@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXXZ @ 0x18011A268 (-RemoveAll@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUISaD.c)
 *     ??1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ @ 0x18011C2D4 (--1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ.c)
 */

void __fastcall Sarm::CSpatialAudioResourceManager::~CSpatialAudioResourceManager(
        Sarm::CSpatialAudioResourceManager *this)
{
  char *v2; // rcx

  CSpatialAudioResourceManagerTraceLogger::~CSpatialAudioResourceManagerTraceLogger((Sarm::CSpatialAudioResourceManager *)((char *)this + 488));
  CWorkFifo::~CWorkFifo((Sarm::CSpatialAudioResourceManager *)((char *)this + 304));
  v2 = (char *)*((_QWORD *)this + 34);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 36) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 35) = 0LL;
    *((_QWORD *)this + 36) = 0LL;
  }
  ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::RemoveAll((char *)this + 192);
  ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAll((char *)this + 112);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_DWORD *)this + 5) = -1073741823;
}
