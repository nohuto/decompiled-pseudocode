/*
 * XREFs of ??1?$ComPtr@VSpatialRimDeviceCollectionHeadEventHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1800CC864
 * Callers:
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$6 @ 0x1801CAE61 (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$6.c)
 *     _Microsoft::WRL::Details::Make_SpectrumListener_MPCRawInputProvider____::_1_::dtor$0 @ 0x1801CDE52 (_Microsoft--WRL--Details--Make_SpectrumListener_MPCRawInputProvider____--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Microsoft::WRL::ComPtr<SpatialRimDeviceCollectionHeadEventHandler>::~ComPtr<SpatialRimDeviceCollectionHeadEventHandler>()
{
  return Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease();
}
