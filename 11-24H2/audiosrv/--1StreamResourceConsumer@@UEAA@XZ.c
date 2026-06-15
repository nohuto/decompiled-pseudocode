/*
 * XREFs of ??1StreamResourceConsumer@@UEAA@XZ @ 0x1801600CC
 * Callers:
 *     ??_EStreamResourceConsumer@@UEAAPEAXI@Z @ 0x180160300 (--_EStreamResourceConsumer@@UEAAPEAXI@Z.c)
 *     ?GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJAEAVEndpointInfo@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x180161474 (-GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJAEAVEndpointInfo@@U_GUID@@W4__MIDL__.c)
 *     _CConstraintModel::GetStreamResourceConsumptionFromMap_::_1_::dtor$0 @ 0x180172A39 (_CConstraintModel--GetStreamResourceConsumptionFromMap_--_1_--dtor$0.c)
 * Callees:
 *     ??1EndpointInfo@@QEAA@XZ @ 0x1800EAB54 (--1EndpointInfo@@QEAA@XZ.c)
 */

void __fastcall StreamResourceConsumer::~StreamResourceConsumer(StreamResourceConsumer *this, __int64 a2)
{
  EndpointInfo::~EndpointInfo((StreamResourceConsumer *)((char *)this + 16), a2);
  *(_QWORD *)this = &KeywordDetectorResourceConsumer::`vftable';
}
