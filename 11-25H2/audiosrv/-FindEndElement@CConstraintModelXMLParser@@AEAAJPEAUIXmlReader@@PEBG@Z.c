/*
 * XREFs of ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x18015A660
 * Callers:
 *     ?ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@PEAH@Z @ 0x18015AD2C (-ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@PEAH.c)
 *     ?ParseExclusiveEndpoint@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVEndpointInfo@@@Z @ 0x18015AE84 (-ParseExclusiveEndpoint@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVEndpointInfo@@@Z.c)
 *     ?ParseHardwareIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI1I@Z @ 0x18015B148 (-ParseHardwareIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI1I@Z.c)
 *     ?ParsePhoneCallInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18015B810 (-ParsePhoneCallInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 *     ?ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x18015C268 (-ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 *     ?ParseSingleResource@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGKPEAK@Z @ 0x18015C2D4 (-ParseSingleResource@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGKPEAK@Z.c)
 *     ?ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18015C3C8 (-ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 * Callees:
 *     ?LogError@@YAXPEBGZZ @ 0x1800E9510 (-LogError@@YAXPEBGZZ.c)
 *     ?GetNodeType@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4XmlNodeType@@@Z @ 0x18015AA20 (-GetNodeType@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAW4XmlNodeType@@@Z.c)
 *     ?IsElement@CConstraintModelXMLParser@@AEAA_NPEAUIXmlReader@@PEBG@Z @ 0x18015AAB0 (-IsElement@CConstraintModelXMLParser@@AEAA_NPEAUIXmlReader@@PEBG@Z.c)
 */

__int64 __fastcall CConstraintModelXMLParser::FindEndElement(
        CConstraintModelXMLParser *this,
        struct IXmlReader *a2,
        const unsigned __int16 *a3)
{
  CConstraintModelXMLParser *v6; // rcx
  int NodeType; // ebx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  NodeType = CConstraintModelXMLParser::GetNodeType(this, a2, (enum XmlNodeType *)&v9);
  if ( NodeType >= 0 && (v9 != 15 || !CConstraintModelXMLParser::IsElement(v6, a2, a3)) )
  {
    NodeType = -2147024809;
    LogError((size_t *)L"Did not find end element for %s", a3);
  }
  *(_DWORD *)this = (unsigned int)NodeType >> 31;
  return (unsigned int)NodeType;
}
