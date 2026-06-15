/*
 * XREFs of ?ParseExclusiveEndpoints@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@Z @ 0x18015B04C
 * Callers:
 *     ?ParseConstraintModel@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@5@PEAV?$CAtlArray@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@2@@5@@Z @ 0x18015AB20 (-ParseConstraintModel@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV-.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?LogError@@YAXPEBGZZ @ 0x1800E9510 (-LogError@@YAXPEBGZZ.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@AEAA_N_K@Z @ 0x1801111B4 (-GrowBuffer@-$CAtlArray@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@.c)
 *     ?FindStartOrEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG1HPEAH@Z @ 0x18015A778 (-FindStartOrEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG1HPEAH@Z.c)
 *     ?ParseExclusiveEndpoint@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVEndpointInfo@@@Z @ 0x18015AE84 (-ParseExclusiveEndpoint@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVEndpointInfo@@@Z.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParseExclusiveEndpoints(
        CConstraintModelXMLParser *this,
        struct IXmlReader *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int StartOrEndElement; // edi
  int v8; // ebp
  unsigned __int64 v9; // r14
  struct EndpointInfo *v11; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  StartOrEndElement = 0;
  v8 = 1;
  v12 = 1;
  while ( v8 )
  {
    StartOrEndElement = CConstraintModelXMLParser::FindStartOrEndElement(
                          this,
                          a2,
                          L"Endpoint",
                          L"ExclusiveEndpoints",
                          0,
                          &v12);
    if ( StartOrEndElement < 0 )
      return (unsigned int)StartOrEndElement;
    v8 = v12;
    if ( !v12 )
      break;
    v11 = 0LL;
    StartOrEndElement = CConstraintModelXMLParser::ParseExclusiveEndpoint(this, a2, &v11);
    if ( StartOrEndElement < 0 )
      return (unsigned int)StartOrEndElement;
    v9 = a3[1];
    if ( v9 >= a3[2]
      && !ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GrowBuffer(
            (__int64)a3,
            v9 + 1) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    *(_QWORD *)(*a3 + 8 * v9) = v11;
    ++a3[1];
    ++v3;
  }
  if ( v3 < 2 )
    LogError((size_t *)L"ExclusiveEndpoints list must have more than one endpoint (only found %d)", v3);
  return (unsigned int)StartOrEndElement;
}
