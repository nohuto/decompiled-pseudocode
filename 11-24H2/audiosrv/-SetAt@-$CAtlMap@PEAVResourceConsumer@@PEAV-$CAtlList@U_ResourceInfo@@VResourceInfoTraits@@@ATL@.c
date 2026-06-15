/*
 * XREFs of ?SetAt@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAAPEAU__POSITION@@AEBQEAVResourceConsumer@@AEBQEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@2@@Z @ 0x180162734
 * Callers:
 *     ?CopyResourceConsumptionMap@CConstraintModel@@AEAAJPEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@0@Z @ 0x1801609E0 (-CopyResourceConsumptionMap@CConstraintModel@@AEAAJPEAV-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAt.c)
 *     ?ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@4@@Z @ 0x180164668 (-ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV-$CAtlMap@V-$CStringT.c)
 * Callees:
 *     ?GetNode@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@AEBAPEAVCNode@12@AEBQEAVResourceConsumer@@AEAI1AEAPEAV312@@Z @ 0x18006768C (-GetNode@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@AT.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAA_NI_N@Z @ 0x180120AB0 (-InitHashTable@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAud.c)
 *     ?NewNode@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@AEAAPEAVCNode@12@AEBQEAVResourceConsumer@@II@Z @ 0x180162028 (-NewNode@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@AT.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::SetAt(
        __int64 a1,
        struct ResourceConsumer **a2,
        _QWORD *a3)
{
  __int64 Node; // r8
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0;
  LODWORD(v16) = 0;
  Node = ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::GetNode(
           a1,
           a2,
           (__int64)&v13,
           &v16,
           &v14);
  if ( Node )
  {
    *(_QWORD *)(Node + 8) = *a3;
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
    Node = ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::NewNode(
             a1,
             a2,
             v13,
             v16);
    v16 = Node;
    try
    {
      *(_QWORD *)(Node + 8) = *a3;
    }
    catch ( ... )
    {
      v8 = v16;
      v9 = (unsigned int)(*(_DWORD *)(v16 + 24) % *(_DWORD *)(a1 + 16));
      if ( v16 == *(_QWORD *)(*(_QWORD *)a1 + 8 * v9) )
      {
        v10 = 0LL;
      }
      else
      {
        v10 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v9);
        if ( *(_QWORD *)(v10 + 16) != v16 )
        {
          v11 = *(_QWORD *)(v10 + 16);
          do
          {
            v10 = v11;
            v11 = *(_QWORD *)(v11 + 16);
          }
          while ( v11 != v16 );
        }
      }
      v12 = *(_QWORD *)(v16 + 16);
      if ( v10 )
        *(_QWORD *)(v10 + 16) = v12;
      else
        *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(v16 + 24) % *(_DWORD *)(a1 + 16))) = v12;
      ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::FreeNode(
        a1,
        v8);
      throw;
    }
  }
  return Node;
}
