/*
 * XREFs of ??1?$ObjectTriageData@X@@UEAA@XZ @ 0x1400912D4
 * Callers:
 *     ??_G?$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@UEAAPEAXI@Z @ 0x1400913C0 (--_G-$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@QEAAXXZ @ 0x140092D7C (-reset@-$unique_any_array_ptr@U-$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@UTriageDataCollect.c)
 *     ??1TriageData@@UEAA@XZ @ 0x1400E4A3C (--1TriageData@@UEAA@XZ.c)
 *     ?Unregister@TriageData@@IEAAXXZ @ 0x1400E4C08 (-Unregister@TriageData@@IEAAXXZ.c)
 */

void __fastcall ObjectTriageData<void>::~ObjectTriageData<void>(TriageData *this)
{
  this->__vftable = (TriageData_vtbl *)&ObjectTriageData<_NDIS_PROTOCOL_BLOCK>::`vftable';
  TriageData::Unregister(this);
  wil::unique_any_array_ptr<TriageDataCollector<_NDIS_M_DRIVER_BLOCK>,ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::TriageDataCollectorArrayDeleter,wil::empty_deleter,unsigned __int64>::reset(&this[1]);
  TriageData::~TriageData(this);
}
