/*
 * XREFs of ?GetNextSpectrumId@MPCInputInfoHelper@@SAIXZ @ 0x1800CC138
 * Callers:
 *     ?AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z @ 0x1800D00E0 (-AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z.c)
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x1800D2D0C (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     ?GetNewInputSourceId@SpatialRimDeviceCollection@@UEAAKXZ @ 0x1800D35D0 (-GetNewInputSourceId@SpatialRimDeviceCollection@@UEAAKXZ.c)
 * Callees:
 *     ?load@?$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA?AW4GestureOperationState@@W4memory_order@2@@Z @ 0x1800957FC (-load@-$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA-AW4GestureOperationState@@W4memor.c)
 */

__int64 MPCInputInfoHelper::GetNextSpectrumId(void)
{
  unsigned int *v0; // rcx

  _InterlockedExchange(
    &MPCInputInfoHelper::m_nextSpectrumId,
    ((unsigned int)std::_Atomic_storage<enum GestureOperationState,4>::load((unsigned int *)&MPCInputInfoHelper::m_nextSpectrumId)
   - 2000000000)
  % 0x3B9AC9FF
  + 2000000001);
  return std::_Atomic_storage<enum GestureOperationState,4>::load(v0);
}
