/*
 * XREFs of ?ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x180165018
 * Callers:
 *     ?ParseExclusiveEndpoint@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVEndpointInfo@@@Z @ 0x180163C34 (-ParseExclusiveEndpoint@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVEndpointInfo@@@Z.c)
 *     ?ParsePhoneCallInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x1801645C0 (-ParsePhoneCallInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 *     ?ParseResourceGroup@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@HPEAGKPEAK2@Z @ 0x180164D4C (-ParseResourceGroup@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@HPEAGKPEAK2@Z.c)
 *     ?ParseSingleResource@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGKPEAK@Z @ 0x180165084 (-ParseSingleResource@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGKPEAK@Z.c)
 *     ?ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x180165178 (-ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 * Callees:
 *     ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x180163410 (-FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?FindStartElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x180163490 (-FindStartElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?ParseText@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI@Z @ 0x180165474 (-ParseText@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI@Z.c)
 */

int __fastcall CConstraintModelXMLParser::ParseSimpleElement(
        CConstraintModelXMLParser *this,
        struct IXmlReader *a2,
        const unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  int result; // eax

  result = CConstraintModelXMLParser::FindStartElement(this, a2, a3);
  if ( result >= 0 )
  {
    result = CConstraintModelXMLParser::ParseText(this, a2, a4, a5);
    if ( result >= 0 )
      return CConstraintModelXMLParser::FindEndElement(this, a2, a3);
  }
  return result;
}
