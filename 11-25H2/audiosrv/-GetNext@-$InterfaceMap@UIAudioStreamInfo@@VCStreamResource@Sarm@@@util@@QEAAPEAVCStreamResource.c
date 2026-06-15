/*
 * XREFs of ?GetNext@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@XZ @ 0x1801189C0
 * Callers:
 *     ?DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1801186D4 (-DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z @ 0x180118720 (-FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z.c)
 *     ?GetFirst@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@XZ @ 0x180118894 (-GetFirst@-$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResourc.c)
 *     ?GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x180118944 (-GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x180118A08 (-GetNextStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::GetNext(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rdx

  v1 = 0LL;
  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 104);
    if ( !v3 )
    {
      LODWORD(v4) = *(_DWORD *)(v2 + 112) % *(_DWORD *)(a1 + 16);
      do
      {
        v4 = (unsigned int)(v4 + 1);
        v3 = 0LL;
        if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 16) )
          break;
        v3 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
      }
      while ( !v3 );
    }
    *(_QWORD *)(a1 + 72) = v3;
    return v2 + 8;
  }
  return v1;
}
