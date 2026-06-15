/*
 * XREFs of ?RemoveAtPos@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180121F80
 * Callers:
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x18004E0E4 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x180120100 (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 *     _ATL::CAtlMap_IAudioStreamInfo___Sarm::CStreamResource_ATL::CElementTraits_IAudioStreamInfo____ATL::CElementTraits_Sarm::CStreamResource___::SetAt_::_1_::catch$0 @ 0x180171395 (_ATL--CAtlMap_IAudioStreamInfo___Sarm--CStreamResource_ATL--CElementTraits_IAudioSt_ea_180171395.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18012040C (-FreeNode@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudioStr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::RemoveAtPos(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 i; // rcx
  __int64 v8; // rcx

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 112) % *(_DWORD *)(a1 + 16));
  v5 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
  if ( a2 == v6 )
  {
    v6 = 0LL;
  }
  else
  {
    for ( i = *(_QWORD *)(v6 + 104); i != a2; i = *(_QWORD *)(i + 104) )
      v6 = i;
  }
  v8 = *(_QWORD *)(a2 + 104);
  if ( v6 )
    *(_QWORD *)(v6 + 104) = v8;
  else
    *(_QWORD *)(v5 + 8 * v4) = v8;
  return ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::FreeNode(
           a1,
           a2);
}
