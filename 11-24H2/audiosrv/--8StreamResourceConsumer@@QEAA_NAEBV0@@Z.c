/*
 * XREFs of ??8StreamResourceConsumer@@QEAA_NAEBV0@@Z @ 0x180160138
 * Callers:
 *     ?GetNode@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@AEBAPEAVCNode@12@AEBQEAVResourceConsumer@@AEAI1AEAPEAV312@@Z @ 0x18006768C (-GetNode@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@AT.c)
 *     ?Lookup@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEBA_NAEBQEAVResourceConsumer@@AEAPEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@2@@Z @ 0x1800677BC (-Lookup@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL.c)
 * Callees:
 *     ??8EndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800EAE84 (--8EndpointInfo@@QEBA_NAEBV0@@Z.c)
 */

bool __fastcall StreamResourceConsumer::operator==(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( *(_DWORD *)(a1 + 160) == *(_DWORD *)(a2 + 160)
    && *(_QWORD *)(a1 + 144) == *(_QWORD *)(a2 + 144)
    && *(_QWORD *)(a1 + 152) == *(_QWORD *)(a2 + 152) )
  {
    return EndpointInfo::operator==(a1 + 16, a2 + 16) != 0;
  }
  return v2;
}
