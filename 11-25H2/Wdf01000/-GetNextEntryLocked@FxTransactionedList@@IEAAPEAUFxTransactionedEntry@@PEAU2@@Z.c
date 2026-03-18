/*
 * XREFs of ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x140019B9C
 * Callers:
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140018E30 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ @ 0x14001A548 (-PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x14001B85C (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x14003FDE0 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x14004161C (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x14006418C (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?ChildListNotifyRemove@FxPkgPnp@@QEAAXPEAJ@Z @ 0x140072AC8 (-ChildListNotifyRemove@FxPkgPnp@@QEAAXPEAJ@Z.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x140074714 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140077D68 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfPdoClearEjectionRelationsDevices @ 0x14008B7A0 (imp_WdfPdoClearEjectionRelationsDevices.c)
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x140092380 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14009AAE4 (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ProcessAdd@FxRelatedDeviceList@@MEAAJPEAUFxTransactionedEntry@@@Z @ 0x1400AC060 (-ProcessAdd@FxRelatedDeviceList@@MEAAJPEAUFxTransactionedEntry@@@Z.c)
 * Callees:
 *     <none>
 */

FxTransactionedEntry *__fastcall FxTransactionedList::GetNextEntryLocked(
        FxTransactionedList *this,
        FxTransactionedEntry *Entry)
{
  FxTransactionedEntry *p_m_ListHead; // rcx
  FxTransactionedEntry *result; // rax

  p_m_ListHead = (FxTransactionedEntry *)&this->m_ListHead;
  if ( Entry )
    result = (FxTransactionedEntry *)Entry->m_ListLink.Flink;
  else
    result = (FxTransactionedEntry *)p_m_ListHead->m_ListLink.Flink;
  while ( result != p_m_ListHead )
  {
    if ( result->m_Transaction == FxTransactionActionNothing )
      return result;
    result = (FxTransactionedEntry *)result->m_ListLink.Flink;
  }
  return 0LL;
}
