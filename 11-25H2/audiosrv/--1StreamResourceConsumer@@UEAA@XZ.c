/*
 * XREFs of ??1StreamResourceConsumer@@UEAA@XZ @ 0x18015731C
 * Callers:
 *     ??_EStreamResourceConsumer@@UEAAPEAXI@Z @ 0x180157550 (--_EStreamResourceConsumer@@UEAAPEAXI@Z.c)
 *     ?GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJAEAVEndpointInfo@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x1801586C4 (-GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJAEAVEndpointInfo@@U_GUID@@W4__MIDL__.c)
 *     _CConstraintModel::GetStreamResourceConsumptionFromMap_::_1_::dtor$0 @ 0x180169173 (_CConstraintModel--GetStreamResourceConsumptionFromMap_--_1_--dtor$0.c)
 * Callees:
 *     ??1EndpointInfo@@QEAA@XZ @ 0x1800E6708 (--1EndpointInfo@@QEAA@XZ.c)
 */

void __fastcall StreamResourceConsumer::~StreamResourceConsumer(StreamResourceConsumer *this)
{
  EndpointInfo::~EndpointInfo((StreamResourceConsumer *)((char *)this + 16));
  *(_QWORD *)this = &KeywordDetectorResourceConsumer::`vftable';
}
