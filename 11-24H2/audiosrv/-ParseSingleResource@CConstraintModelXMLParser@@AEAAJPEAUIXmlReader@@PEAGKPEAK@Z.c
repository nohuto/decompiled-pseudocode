/*
 * XREFs of ?ParseSingleResource@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGKPEAK@Z @ 0x180165084
 * Callers:
 *     ?ParseLimits@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@@Z @ 0x18016400C (-ParseLimits@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV-$CAtlMap@.c)
 *     ?ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@4@@Z @ 0x180164668 (-ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV-$CAtlMap@V-$CStringT.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x180163410 (-FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x180165018 (-ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 */

int __fastcall CConstraintModelXMLParser::ParseSingleResource(
        CConstraintModelXMLParser *this,
        struct IXmlReader *a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int *a5)
{
  int result; // eax
  wchar_t *EndPtr; // [rsp+30h] [rbp-48h] BYREF
  wchar_t String; // [rsp+38h] [rbp-40h] BYREF
  __int128 v10; // [rsp+3Ah] [rbp-3Eh]
  int v11; // [rsp+4Ah] [rbp-2Eh]

  result = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"ID", a3, 0x101u);
  if ( result >= 0 )
  {
    String = 0;
    v11 = 0;
    v10 = 0LL;
    result = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"Consumption", &String, 0xBu);
    if ( result >= 0 )
    {
      EndPtr = 0LL;
      *a5 = wcstoul(&String, &EndPtr, 10);
      if ( *EndPtr || EndPtr == &String )
        return -2147024809;
      else
        return CConstraintModelXMLParser::FindEndElement(this, a2, L"Resource");
    }
  }
  return result;
}
