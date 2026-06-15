/*
 * XREFs of ?GetFirst@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@XZ @ 0x180118894
 * Callers:
 *     ?DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1801186D4 (-DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z @ 0x180118720 (-FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z.c)
 *     ?GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x180118944 (-GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ @ 0x18011A850 (-Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::GetFirst(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int i; // r9d

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 8) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL * i) )
      {
        v1 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * i);
        break;
      }
    }
  }
  *(_QWORD *)(a1 + 72) = v1;
  return util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::GetNext(a1);
}
