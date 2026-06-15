/*
 * XREFs of ?FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z @ 0x1801203D0
 * Callers:
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x180120910 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     ?HandleRevocationCompletion@CSpatialAudioResourceManager@Sarm@@AEAAX_J@Z @ 0x180120A24 (-HandleRevocationCompletion@CSpatialAudioResourceManager@Sarm@@AEAAX_J@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x180120F60 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 * Callees:
 *     ?GetFirst@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@XZ @ 0x180120544 (-GetFirst@-$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResourc.c)
 *     ?GetNext@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@XZ @ 0x180120670 (-GetNext@-$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource.c)
 */

struct Sarm::CStreamResource *__fastcall Sarm::CSpatialAudioResourceManager::FindStream(
        Sarm::CSpatialAudioResourceManager *this,
        __int64 a2)
{
  struct Sarm::CStreamResource *result; // rax
  __int64 v4; // r11

  for ( result = (struct Sarm::CStreamResource *)util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::GetFirst((char *)this + 192);
        result && *((_QWORD *)result + 5) != a2;
        result = (struct Sarm::CStreamResource *)util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::GetNext(v4) )
  {
    ;
  }
  return result;
}
