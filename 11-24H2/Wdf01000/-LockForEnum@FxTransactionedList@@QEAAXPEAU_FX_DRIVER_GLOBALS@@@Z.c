/*
 * XREFs of ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140031EE8
 * Callers:
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140030750 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ @ 0x1400316D4 (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ @ 0x140031E68 (-PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x14003317C (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x14006203C (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x140062AEC (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x14006DD0C (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x140070F90 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 *     ?ChildListNotifyRemove@FxPkgPnp@@QEAAXPEAJ@Z @ 0x140071E88 (-ChildListNotifyRemove@FxPkgPnp@@QEAAXPEAJ@Z.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1400741B4 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1400775E8 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfPdoClearEjectionRelationsDevices @ 0x14008B800 (imp_WdfPdoClearEjectionRelationsDevices.c)
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1400923E0 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxTransactionedList::LockForEnum(FxTransactionedList *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxTransactionedList_vtbl *v2; // rax
  FxTransactionedList_vtbl *v5; // rax
  __int64 v6; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  v2 = this->__vftable;
  irql = 0;
  v2->AcquireLock(this, FxDriverGlobals, &irql);
  v5 = this->__vftable;
  ++this->m_ListLockedRecursionCount;
  LOBYTE(v6) = irql;
  v5->ReleaseLock(this, FxDriverGlobals, v6);
}
