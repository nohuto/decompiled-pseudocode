/*
 * XREFs of ?DistributeAvailableObjectsToOtherApps@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180120384
 * Callers:
 *     ?HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180120878 (-HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     std::_Func_impl_no_alloc__lambda_aa3efb362c26672f3bb90355f03c35d6__void_::_Do_call @ 0x1801227E0 (std--_Func_impl_no_alloc__lambda_aa3efb362c26672f3bb90355f03c35d6__void_--_Do_call.c)
 * Callees:
 *     ?GetFirst@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@XZ @ 0x180120544 (-GetFirst@-$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResourc.c)
 *     ?GetNext@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@XZ @ 0x180120670 (-GetNext@-$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource.c)
 *     ?GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ @ 0x1801234C8 (-GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ.c)
 */

void __fastcall Sarm::CSpatialAudioResourceManager::DistributeAvailableObjectsToOtherApps(
        Sarm::CSpatialAudioResourceManager *this,
        int a2)
{
  char *v2; // rbx
  Sarm::CStreamResource *i; // rax

  v2 = (char *)this + 192;
  for ( i = (Sarm::CStreamResource *)util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::GetFirst((char *)this + 192);
        i;
        i = (Sarm::CStreamResource *)util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::GetNext(v2) )
  {
    if ( *((_DWORD *)i + 13) != a2 )
      Sarm::CStreamResource::GrantAvailableObjects(i);
  }
}
