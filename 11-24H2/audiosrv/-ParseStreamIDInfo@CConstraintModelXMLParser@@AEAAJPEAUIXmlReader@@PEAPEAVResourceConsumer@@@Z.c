/*
 * XREFs of ?ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x180165178
 * Callers:
 *     ?ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@PEAH@Z @ 0x180163ADC (-ParseConsumerInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@PEAH.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015ED0 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ??1EndpointInfo@@QEAA@XZ @ 0x1800EAB54 (--1EndpointInfo@@QEAA@XZ.c)
 *     ?LogError@@YAXPEBGZZ @ 0x1800EE200 (-LogError@@YAXPEBGZZ.c)
 *     ??0StreamResourceConsumer@@QEAA@AEAVEndpointInfo@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18015FEB8 (--0StreamResourceConsumer@@QEAA@AEAVEndpointInfo@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ??0EndpointInfo@@QEAA@PEBG00K@Z @ 0x180163378 (--0EndpointInfo@@QEAA@PEBG00K@Z.c)
 *     ?FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z @ 0x180163410 (-FindEndElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBG@Z.c)
 *     ?ParseHardwareIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI1I@Z @ 0x180163EF8 (-ParseHardwareIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI1I@Z.c)
 *     ?ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x180165018 (-ParseSimpleElement@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 *     wcscmp_0 @ 0x180167F24 (wcscmp_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CConstraintModelXMLParser::ParseStreamIDInfo(
        enum XmlNodeType *this,
        struct IXmlReader *a2,
        struct ResourceConsumer **a3)
{
  __int64 v6; // r9
  int EndElement; // ebx
  unsigned int v8; // r15d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v9; // edi
  wchar_t *v10; // rax
  __int64 v11; // rdx
  struct ResourceConsumer *v12; // rax
  wchar_t *EndPtr; // [rsp+30h] [rbp-D0h] BYREF
  GUID pclsid; // [rsp+40h] [rbp-C0h] BYREF
  OLECHAR sz[64]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t String1[8]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t String[16]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 v19; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v20[414]; // [rsp+112h] [rbp+12h] BYREF
  unsigned __int16 v21; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v22[414]; // [rsp+2B2h] [rbp+1B2h] BYREF
  unsigned __int16 v23; // [rsp+450h] [rbp+350h] BYREF
  _BYTE v24[526]; // [rsp+452h] [rbp+352h] BYREF

  v21 = 0;
  memset_0(v22, 0, 0x190uLL);
  v19 = 0;
  memset_0(v20, 0, 0x190uLL);
  v23 = 0;
  memset_0(v24, 0, 0x208uLL);
  pclsid = GUID_00000000_0000_0000_0000_000000000000;
  EndElement = CConstraintModelXMLParser::ParseHardwareIDInfo(this, a2, &v21, v6, &v19);
  if ( EndElement >= 0 )
  {
    EndElement = CConstraintModelXMLParser::ParseSimpleElement(
                   (CConstraintModelXMLParser *)this,
                   a2,
                   L"TopologyName",
                   &v23,
                   0x105u);
    if ( EndElement >= 0 )
    {
      EndElement = CConstraintModelXMLParser::ParseSimpleElement(
                     (CConstraintModelXMLParser *)this,
                     a2,
                     L"PinId",
                     String,
                     0xBu);
      if ( EndElement >= 0 )
      {
        EndPtr = 0LL;
        v8 = wcstoul(String, &EndPtr, 10);
        if ( *EndPtr || EndPtr == String )
          EndElement = -2147024809;
        if ( EndElement >= 0 )
        {
          EndElement = CConstraintModelXMLParser::ParseSimpleElement(
                         (CConstraintModelXMLParser *)this,
                         a2,
                         L"Mode",
                         sz,
                         0x28u);
          if ( EndElement >= 0 )
          {
            EndElement = CLSIDFromString(sz, &pclsid);
            if ( EndElement >= 0 )
            {
              EndElement = CConstraintModelXMLParser::ParseSimpleElement(
                             (CConstraintModelXMLParser *)this,
                             a2,
                             L"ConnectorType",
                             String1,
                             9u);
              if ( EndElement >= 0 )
              {
                if ( !wcscmp_0(String1, L"Host") )
                {
                  v9 = eHostProcessConnector;
                }
                else if ( !wcscmp_0(String1, L"Offload") )
                {
                  v9 = eOffloadConnector;
                }
                else if ( !wcscmp_0(String1, L"Loopback") )
                {
                  v9 = eLoopbackConnector;
                }
                else
                {
                  if ( wcscmp_0(String1, L"LoopbackPostVolume") )
                  {
                    EndElement = -2147024809;
                    LogError((size_t *)L"Invalid connector type %s", String1);
                    return (unsigned int)EndElement;
                  }
                  v9 = eConnectorCount;
                }
                EndElement = CConstraintModelXMLParser::FindEndElement((CConstraintModelXMLParser *)this, a2, L"Stream");
                if ( EndElement >= 0 )
                {
                  EndpointInfo::EndpointInfo((EndpointInfo *)sz, &v21, &v19, &v23, v8);
                  v10 = (wchar_t *)operator new(0xA8uLL);
                  EndPtr = v10;
                  if ( v10 )
                  {
                    *(GUID *)String1 = pclsid;
                    v12 = StreamResourceConsumer::StreamResourceConsumer(
                            (StreamResourceConsumer *)v10,
                            (struct EndpointInfo *)sz,
                            (struct _GUID *)String1,
                            v9);
                  }
                  else
                  {
                    v12 = 0LL;
                  }
                  *a3 = v12;
                  if ( !v12 )
                    EndElement = -2147024882;
                  EndpointInfo::~EndpointInfo((EndpointInfo *)sz, v11);
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)EndElement;
}
