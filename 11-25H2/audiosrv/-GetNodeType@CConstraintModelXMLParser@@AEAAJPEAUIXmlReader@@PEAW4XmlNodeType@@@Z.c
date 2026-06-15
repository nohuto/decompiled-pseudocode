/*
 * XREFs of ?GetNodeType@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4XmlNodeType@@@Z @ 0x18015AA20
 * Callers:
 *     ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x18015A660 (-FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?FindStartElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x18015A6E0 (-FindStartElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?FindStartOrEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG1HPEAH@Z @ 0x18015A778 (-FindStartOrEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG1HPEAH@Z.c)
 *     ?ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@PEAH@Z @ 0x18015AD2C (-ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@PEAH.c)
 *     ?ParseHardwareIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI1I@Z @ 0x18015B148 (-ParseHardwareIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI1I@Z.c)
 *     ?ParseText@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI@Z @ 0x18015C6C4 (-ParseText@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI@Z.c)
 *     ?ParseXML@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@5@PEAV?$CAtlArray@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@2@@5@@Z @ 0x18015C77C (-ParseXML@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV-$CAtlMap@V-$.c)
 * Callees:
 *     ?LogError@@YAXPEBGZZ @ 0x1800E9510 (-LogError@@YAXPEBGZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConstraintModelXMLParser::GetNodeType(
        enum XmlNodeType *this,
        struct IXmlReader *a2,
        enum XmlNodeType *a3)
{
  int v3; // ebx
  int v8; // eax
  int v9; // ecx

  v3 = 0;
  if ( *this )
  {
    *a3 = this[1];
    return 0LL;
  }
  else
  {
    while ( v3 >= 0 )
    {
      v8 = ((__int64 (__fastcall *)(struct IXmlReader *, enum XmlNodeType *))a2->lpVtbl->Read)(a2, a3);
      if ( v8 == 1 )
      {
        v3 = -2147467259;
        LogError((size_t *)L"End of file reached!!");
      }
      else
      {
        v3 = v8;
        if ( v8 >= 0 )
        {
          v9 = *a3;
          if ( *a3 != XmlNodeType_Comment && v9 != 13 )
          {
            *((_DWORD *)this + 1) = v9;
            return (unsigned int)v3;
          }
        }
      }
    }
    return (unsigned int)v3;
  }
}
