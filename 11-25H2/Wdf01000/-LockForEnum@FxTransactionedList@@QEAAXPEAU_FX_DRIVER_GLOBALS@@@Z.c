/*
 * XREFs of ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001A5C8
 * Callers:
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140018E30 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ @ 0x140019DB4 (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ @ 0x14001A548 (-PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x14001B85C (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x14003FDE0 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x14004161C (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x14006418C (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x14006E98C (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?ChildListNotifyRemove@FxPkgPnp@@QEAAXPEAJ@Z @ 0x140072AC8 (-ChildListNotifyRemove@FxPkgPnp@@QEAAXPEAJ@Z.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x140074714 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140077D68 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfPdoClearEjectionRelationsDevices @ 0x14008B7A0 (imp_WdfPdoClearEjectionRelationsDevices.c)
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x140092380 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
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
