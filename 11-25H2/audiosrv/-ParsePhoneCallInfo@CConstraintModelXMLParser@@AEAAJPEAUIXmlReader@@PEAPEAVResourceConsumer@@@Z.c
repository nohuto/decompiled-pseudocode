/*
 * XREFs of ?ParsePhoneCallInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18015B810
 * Callers:
 *     ?ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@PEAH@Z @ 0x18015AD2C (-ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@PEAH.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x18015A660 (-FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x18015C268 (-ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParsePhoneCallInfo(
        CConstraintModelXMLParser *this,
        struct IXmlReader *a2,
        struct ResourceConsumer **a3)
{
  unsigned __int16 v6; // [rsp+30h] [rbp-228h] BYREF
  _BYTE v7[526]; // [rsp+32h] [rbp-226h] BYREF

  v6 = 0;
  memset_0(v7, 0, 0x208uLL);
  if ( (int)CConstraintModelXMLParser::ParseSimpleElement(this, a2, L"CallState", &v6, 0x105u) >= 0 )
    CConstraintModelXMLParser::FindEndElement(this, a2, L"PhoneCall");
  return 0LL;
}
