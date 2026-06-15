/*
 * XREFs of ?ParseResourceGroup@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@HPEAGKPEAK2@Z @ 0x18015BF9C
 * Callers:
 *     ?ParseLimits@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@5@@Z @ 0x18015B25C (-ParseLimits@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4RmResourceType@@PEAV-$CAtlMap@.c)
 *     ?ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@4@@Z @ 0x18015B8B8 (-ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV-$CAtlMap@V-$CStringT.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?LogError@@YAXPEBGZZ @ 0x1800E9510 (-LogError@@YAXPEBGZZ.c)
 *     ?ParseSimpleAttribute@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x18015C1B8 (-ParseSimpleAttribute@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 *     ?ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x18015C268 (-ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParseResourceGroup(
        CConstraintModelXMLParser *this,
        struct IXmlReader *a2,
        int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int *a7)
{
  int v11; // eax
  CConstraintModelXMLParser *v12; // rcx
  int v13; // ebx
  int v14; // eax
  CConstraintModelXMLParser *v15; // rcx
  int v16; // eax
  wchar_t *EndPtr; // [rsp+30h] [rbp-40h] BYREF
  wchar_t v19; // [rsp+38h] [rbp-38h] BYREF
  __int128 v20; // [rsp+3Ah] [rbp-36h]
  int v21; // [rsp+4Ah] [rbp-26h]
  wchar_t String; // [rsp+50h] [rbp-20h] BYREF
  __int128 v23; // [rsp+52h] [rbp-1Eh]
  int v24; // [rsp+62h] [rbp-Eh]

  v11 = ((__int64 (__fastcall *)(struct IXmlReader *))a2->lpVtbl->MoveToFirstAttribute)(a2);
  v13 = v11;
  if ( v11 < 0 )
    return (unsigned int)v13;
  if ( v11 == 1 )
    goto LABEL_18;
  v13 = CConstraintModelXMLParser::ParseSimpleAttribute(v12, a2, L"Name", a4, 0x101u);
  if ( v13 < 0 )
    return (unsigned int)v13;
  v14 = ((__int64 (__fastcall *)(struct IXmlReader *))a2->lpVtbl->MoveToNextAttribute)(a2);
  v13 = v14;
  if ( v14 < 0 || v14 == 1 )
  {
    if ( !a3 )
    {
      v13 = -2147024809;
      LogError((size_t *)L"Resource group should have priority attribute when referenced in resource consumptions");
      return (unsigned int)v13;
    }
    v13 = 0;
    goto LABEL_18;
  }
  if ( a3 )
  {
    v13 = -2147024809;
    LogError((size_t *)L"Resource group should not have priority attribute when declared in Limits");
  }
  if ( v13 >= 0 )
  {
    String = 0;
    v24 = 0;
    v23 = 0LL;
    v13 = CConstraintModelXMLParser::ParseSimpleAttribute(v15, a2, L"Priority", &String, 0xBu);
    if ( v13 >= 0 )
    {
      EndPtr = 0LL;
      *a7 = wcstoul(&String, &EndPtr, 10);
      v16 = ((__int64 (__fastcall *)(struct IXmlReader *))a2->lpVtbl->MoveToNextAttribute)(a2);
      v13 = v16;
      if ( v16 >= 0 )
      {
        if ( v16 != 1 )
        {
          v13 = -2147024809;
          LogError((size_t *)L"Got unexpected attribute");
        }
        if ( v13 >= 0 )
        {
LABEL_18:
          if ( a3 )
          {
            v19 = 0;
            v21 = 0;
            v20 = 0LL;
            v13 = CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"Consumption", &v19, 0xBu);
            if ( v13 >= 0 )
            {
              EndPtr = 0LL;
              *a6 = wcstoul(&v19, &EndPtr, 10);
              if ( *EndPtr || EndPtr == &v19 )
                return (unsigned int)-2147024809;
            }
          }
          else
          {
            *a6 = 1;
          }
        }
      }
    }
  }
  return (unsigned int)v13;
}
