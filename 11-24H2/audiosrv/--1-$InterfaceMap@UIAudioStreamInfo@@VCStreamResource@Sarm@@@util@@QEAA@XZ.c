/*
 * XREFs of ??1?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAA@XZ @ 0x18011FB68
 * Callers:
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$4 @ 0x180171171 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::~InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>()
{
  return ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::RemoveAll();
}
