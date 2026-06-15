/*
 * XREFs of ??0StreamResourceConsumer@@QEAA@AEAVEndpointInfo@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180157108
 * Callers:
 *     ?GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJAEAVEndpointInfo@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x1801586C4 (-GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJAEAVEndpointInfo@@U_GUID@@W4__MIDL__.c)
 *     ?ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z @ 0x18015C3C8 (-ParseStreamIDInfo@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAPEAVResourceConsumer@@@Z.c)
 * Callees:
 *     ??0EndpointInfo@@QEAA@AEBV0@@Z @ 0x1800E6208 (--0EndpointInfo@@QEAA@AEBV0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
StreamResourceConsumer *__fastcall StreamResourceConsumer::StreamResourceConsumer(
        StreamResourceConsumer *this,
        struct EndpointInfo *a2,
        struct _GUID *a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &StreamResourceConsumer::`vftable';
  EndpointInfo::EndpointInfo((StreamResourceConsumer *)((char *)this + 16), a2);
  *((struct _GUID *)this + 9) = *a3;
  *((_DWORD *)this + 40) = a4;
  return this;
}
