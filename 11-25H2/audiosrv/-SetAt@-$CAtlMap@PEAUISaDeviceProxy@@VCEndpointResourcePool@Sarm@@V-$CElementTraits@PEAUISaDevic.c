/*
 * XREFs of ?SetAt@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAPEAU__POSITION@@AEBQEAUISaDeviceProxy@@AEBVCEndpointResourcePool@Sarm@@@Z @ 0x18011A62C
 * Callers:
 *     ?Add@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResourcePool@Sarm@@PEAUISaDeviceProxy@@PEAPEAU__POSITION@@@Z @ 0x18011833C (-Add@-$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResour.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??4?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180118084 (--4-$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetNode@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@AEBAPEAVCNode@12@AEBQEAUISaDeviceProxy@@AEAI1AEAPEAV312@@Z @ 0x180118A34 (-GetNode@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUISaDev.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAA_NI_N@Z @ 0x180118E00 (-InitHashTable@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAud.c)
 *     ?NewNode@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@AEAAPEAVCNode@12@AEBQEAUISaDeviceProxy@@II@Z @ 0x1801191C8 (-NewNode@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUISaDev.c)
 */

__int64 __fastcall ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::SetAt(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  __int64 Node; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v10 = 0;
  LODWORD(v13) = 0;
  Node = ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::GetNode(
           a1,
           a2,
           (int *)&v10,
           (unsigned int *)&v13,
           v11);
  v7 = Node;
  if ( Node )
  {
    *(_QWORD *)(Node + 8) = *(_QWORD *)a3;
    *(_BYTE *)(Node + 16) = *(_BYTE *)(a3 + 8);
    *(_DWORD *)(Node + 20) = *(_DWORD *)(a3 + 12);
    std::shared_ptr<Sarm::CEndpointResourcePool::Pool>::operator=((_QWORD *)(Node + 24), (_QWORD *)(a3 + 16));
  }
  else
  {
    if ( !*(_QWORD *)a1
      && !ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::InitHashTable(
            a1,
            *(_DWORD *)(a1 + 16),
            1) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    v8 = ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::NewNode(
           a1,
           a2,
           v10,
           v13);
    v7 = v8;
    v13 = v8;
    try
    {
      *(_QWORD *)(v8 + 8) = *(_QWORD *)a3;
      *(_BYTE *)(v8 + 16) = *(_BYTE *)(a3 + 8);
      *(_DWORD *)(v8 + 20) = *(_DWORD *)(a3 + 12);
      std::shared_ptr<Sarm::CEndpointResourcePool::Pool>::operator=((_QWORD *)(v8 + 24), (_QWORD *)(a3 + 16));
    }
    catch ( ... )
    {
      ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos(
        a1,
        v13);
      throw;
    }
  }
  return v7;
}
