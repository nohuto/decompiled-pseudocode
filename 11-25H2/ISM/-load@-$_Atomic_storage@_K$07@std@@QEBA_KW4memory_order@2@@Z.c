/*
 * XREFs of ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x18008CDE4
 * Callers:
 *     ?OnPnpNotification@PnpDeviceWatcher@@CAXW4DeviceEventId@PnpApiWrapper@@PEAUHSTRING__@@PEAX@Z @ 0x1800654A0 (-OnPnpNotification@PnpDeviceWatcher@@CAXW4DeviceEventId@PnpApiWrapper@@PEAUHSTRING__@@PEAX@Z.c)
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x18008CCFC (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 *     ?Initialize@ConsumerControlManager@@AEAAJXZ @ 0x1800E3588 (-Initialize@ConsumerControlManager@@AEAAJXZ.c)
 *     ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x1800E3940 (-QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z.c)
 *     ?CancelAsyncIo@PnpDevice@@QEAAJPEAU_OVERLAPPED@@@Z @ 0x1800E3D30 (-CancelAsyncIo@PnpDevice@@QEAAJPEAU_OVERLAPPED@@@Z.c)
 *     ?GetAsyncIoResult@PnpDevice@@QEAAJKPEAU_OVERLAPPED@@PEA_K@Z @ 0x1800E3E2C (-GetAsyncIoResult@PnpDevice@@QEAAJKPEAU_OVERLAPPED@@PEA_K@Z.c)
 *     ?OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z @ 0x1800E4554 (-OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z.c)
 *     ?ReadAsync@PnpDevice@@QEAAJ_KPEAXPEAU_OVERLAPPED@@P6AXKK2@Z@Z @ 0x1800E4670 (-ReadAsync@PnpDevice@@QEAAJ_KPEAXPEAU_OVERLAPPED@@P6AXKK2@Z@Z.c)
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E5B7C (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E8A00 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@@Z @ 0x1800E9944 (-ReceiveLampArrayAttributesReport@HidLampArrayDevice@@AEAAJPEAULampArrayAttributesDeviceReport@@.c)
 *     ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJHPEAULampAttributesResponseDeviceReport@@@Z @ 0x1800E9AF0 (-ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJHPEAULampAttributesResponseDeviceReport@@@.c)
 *     ?ReceiveVendorReport@HidLampArrayDevice@@QEAAJEPEAE0@Z @ 0x1800E9CC4 (-ReceiveVendorReport@HidLampArrayDevice@@QEAAJEPEAE0@Z.c)
 *     ?SendVendorReport@HidLampArrayDevice@@QEAAJEEPEBE@Z @ 0x1800EA0D4 (-SendVendorReport@HidLampArrayDevice@@QEAAJEEPEBE@Z.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800FC670 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Atomic_storage<unsigned __int64,8>::load(__int64 a1)
{
  return *(_QWORD *)a1;
}
