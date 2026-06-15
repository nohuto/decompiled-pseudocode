/*
 * XREFs of ?ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@PEAH@Z @ 0x18015AD2C
 * Callers:
 *     ?ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@PEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@4@@Z @ 0x18015B8B8 (-ParseResourceConsumer@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAV-$CAtlMap@V-$CStringT.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 *     ?LogError@@YAXPEBGZZ @ 0x1800E9510 (-LogError@@YAXPEBGZZ.c)
 *     ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x18015A660 (-FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?GetNodeType@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4XmlNodeType@@@Z @ 0x18015AA20 (-GetNodeType@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4XmlNodeType@@@Z.c)
 *     ?ParsePhoneCallInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18015B810 (-ParsePhoneCallInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 *     ?ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18015C3C8 (-ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 *     wcscmp_0 @ 0x18015E864 (wcscmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParseConsumerInfo(
        enum XmlNodeType *this,
        struct IXmlReader *a2,
        wchar_t **a3,
        int *a4)
{
  int NodeType; // ebx
  struct IXmlReaderVtbl *lpVtbl; // rax
  struct ResourceConsumer **v10; // r8
  int v11; // eax
  wchar_t *v12; // rax
  wchar_t *String1; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0;
  v15 = 0;
  NodeType = CConstraintModelXMLParser::GetNodeType(this, a2, (enum XmlNodeType *)&v15);
  if ( NodeType < 0 )
    return (unsigned int)NodeType;
  if ( v15 != 1 )
    return (unsigned int)-2147024809;
  lpVtbl = a2->lpVtbl;
  String1 = 0LL;
  NodeType = ((__int64 (__fastcall *)(struct IXmlReader *, wchar_t **, _QWORD))lpVtbl->GetLocalName)(a2, &String1, 0LL);
  if ( NodeType )
    goto LABEL_14;
  if ( !wcscmp_0(String1, L"PhoneCall") )
  {
    v11 = CConstraintModelXMLParser::ParsePhoneCallInfo((CConstraintModelXMLParser *)this, a2, v10);
LABEL_8:
    NodeType = v11;
    goto LABEL_14;
  }
  if ( !wcscmp_0(String1, L"Stream") )
  {
    *a4 = 1;
    v11 = CConstraintModelXMLParser::ParseStreamIDInfo(
            (CConstraintModelXMLParser *)this,
            a2,
            (struct ResourceConsumer **)a3);
    goto LABEL_8;
  }
  if ( wcscmp_0(String1, L"KeywordDetector") )
  {
    NodeType = -2147024809;
    LogError((size_t *)L"Invalid resource consumer type %s", String1);
LABEL_14:
    if ( NodeType >= 0 )
      return (unsigned int)CConstraintModelXMLParser::FindEndElement(
                             (CConstraintModelXMLParser *)this,
                             a2,
                             L"ConsumerInfo");
    return (unsigned int)NodeType;
  }
  v12 = (wchar_t *)operator new(0x10uLL);
  String1 = v12;
  if ( v12 )
  {
    *((_DWORD *)v12 + 2) = 1;
    *(_QWORD *)v12 = &KeywordDetectorResourceConsumer::`vftable';
    *a3 = v12;
    return (unsigned int)CConstraintModelXMLParser::FindEndElement(
                           (CConstraintModelXMLParser *)this,
                           a2,
                           L"ConsumerInfo");
  }
  *a3 = 0LL;
  return (unsigned int)-2147024882;
}
