/*
 * XREFs of ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800E3094
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18006084C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x18008CDF0 (-Shutdown@PnpDeviceWatcher@@QEAAXXZ.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800E2D90 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800E3094 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 * Callees:
 *     ?CloseInterface@PnpDevice@@QEAAXXZ @ 0x1800726C8 (-CloseInterface@PnpDevice@@QEAAXXZ.c)
 *     ?load@?$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA?AW4GestureOperationState@@W4memory_order@2@@Z @ 0x1800957FC (-load@-$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA-AW4GestureOperationState@@W4memor.c)
 *     ?OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z @ 0x1800E0DBC (-OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800E3094 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 */

void __fastcall PnpDeviceWatcher::StopDeviceObject(
        PnpDeviceWatcher *this,
        struct PnpDeviceWatcher::DeviceListEntry *a2)
{
  volatile __int32 *v4; // rcx
  struct PnpDeviceWatcher::DeviceListEntry *i; // rbx

  if ( (unsigned int)std::_Atomic_storage<enum GestureOperationState,4>::load((unsigned int *)(*((_QWORD *)a2 + 2)
                                                                                             + 124LL)) != 3 )
  {
    v4 = (volatile __int32 *)*((_QWORD *)a2 + 2);
    _InterlockedExchange(v4 + 31, 3);
    PnpDevice::CloseInterface((PnpDevice *)v4);
    for ( i = (struct PnpDeviceWatcher::DeviceListEntry *)*((_QWORD *)this + 8);
          i != (PnpDeviceWatcher *)((char *)this + 64);
          i = *(struct PnpDeviceWatcher::DeviceListEntry **)i )
    {
      if ( *(_QWORD *)(*((_QWORD *)i + 2) + 16LL) == *((_QWORD *)a2 + 2) )
        PnpDeviceWatcher::StopDeviceObject(this, i);
    }
    if ( *(_QWORD *)this && *((_BYTE *)a2 + 24) )
      LampArrayRawInputProvider::OnLampArrayRemoved(*(LampArrayRawInputProvider **)this, *((struct PnpDevice **)a2 + 2));
  }
}
