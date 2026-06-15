/*
 * XREFs of ?Lookup@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEBA_NAEBQEAVResourceConsumer@@AEAPEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@2@@Z @ 0x1800677BC
 * Callers:
 *     ?GetResourceConsumptionFromMap@CConstraintModel@@AEAAJPEAVResourceConsumer@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x180067748 (-GetResourceConsumptionFromMap@CConstraintModel@@AEAAJPEAVResourceConsumer@@PEAKPEAPEAU_Resource.c)
 *     ?VerifyNoRepeatedConsumers@CConstraintModel@@AEAAJPEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@0@Z @ 0x180162904 (-VerifyNoRepeatedConsumers@CConstraintModel@@AEAAJPEAV-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtl.c)
 *     ?ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@4@@Z @ 0x180164668 (-ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV-$CAtlMap@V-$CStringT.c)
 * Callees:
 *     ?Hash@ResourceConsumerTraits@@SAKAEBQEAVResourceConsumer@@@Z @ 0x180067858 (-Hash@ResourceConsumerTraits@@SAKAEBQEAVResourceConsumer@@@Z.c)
 *     ??8StreamResourceConsumer@@QEAA_NAEBV0@@Z @ 0x180160138 (--8StreamResourceConsumer@@QEAA_NAEBV0@@Z.c)
 */

char __fastcall ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::Lookup(
        __int64 a1,
        struct ResourceConsumer *const *a2,
        _QWORD *a3)
{
  unsigned int v5; // eax
  __int64 v6; // r9
  unsigned int v7; // esi
  __int64 i; // rbx
  int v9; // r8d

  v5 = ResourceConsumerTraits::Hash(a2);
  v7 = v5;
  if ( *(_QWORD *)v6 )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)v6 + 8LL * (v5 % *(_DWORD *)(v6 + 16))); i; i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 24) == v7 )
      {
        v9 = *(_DWORD *)(*(_QWORD *)i + 8LL);
        if ( v9 || *((_DWORD *)*a2 + 2) )
        {
          if ( v9 == *((_DWORD *)*a2 + 2) )
          {
LABEL_8:
            *a3 = *(_QWORD *)(i + 8);
            return 1;
          }
        }
        else if ( (unsigned __int8)StreamResourceConsumer::operator==() )
        {
          goto LABEL_8;
        }
      }
    }
  }
  return 0;
}
