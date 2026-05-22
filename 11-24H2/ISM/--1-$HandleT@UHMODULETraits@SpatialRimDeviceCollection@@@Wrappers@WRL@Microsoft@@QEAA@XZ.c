/*
 * XREFs of ??1?$HandleT@UHMODULETraits@SpatialRimDeviceCollection@@@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800D5264
 * Callers:
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$3 @ 0x1801D1CC6 (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Wrappers::HandleT<SpatialRimDeviceCollection::HMODULETraits>::~HandleT<SpatialRimDeviceCollection::HMODULETraits>(
        _QWORD *a1)
{
  *a1 = &Microsoft::WRL::Wrappers::HandleT<SpatialRimDeviceCollection::HMODULETraits>::`vftable';
  return Microsoft::WRL::Wrappers::HandleT<SpatialRimDeviceCollection::HMODULETraits>::Close();
}
