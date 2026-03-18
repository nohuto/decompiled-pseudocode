/*
 * XREFs of ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140031BCC
 * Callers:
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140030750 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ @ 0x1400316D4 (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x140031B18 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
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

void __fastcall FxTransactionedList::UnlockFromEnum(FxTransactionedList *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  MxEvent *m_DeletingDoneEvent; // r14
  __int64 v5; // r8
  _LIST_ENTRY *p_m_TransactionHead; // rsi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v9; // rcx
  _LIST_ENTRY *v10; // rdi
  int v11; // ecx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v13; // rax
  _LIST_ENTRY *v14; // rcx
  _LIST_ENTRY *v15; // rdi
  _LIST_ENTRY *v16; // rdx
  _LIST_ENTRY *v17; // rcx
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY releaseHead; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int8 irql; // [rsp+60h] [rbp+20h] BYREF

  irql = 0;
  releaseHead.Blink = &releaseHead;
  releaseHead.Flink = &releaseHead;
  m_DeletingDoneEvent = 0LL;
  this->AcquireLock(this, FxDriverGlobals, &irql);
  if ( this->m_ListLockedRecursionCount-- == 1 )
  {
    p_m_TransactionHead = &this->m_TransactionHead;
    while ( 1 )
    {
      Flink = p_m_TransactionHead->Flink;
      if ( p_m_TransactionHead->Flink == p_m_TransactionHead )
        break;
      if ( Flink->Blink != p_m_TransactionHead || (v9 = Flink->Flink, Flink->Flink->Blink != Flink) )
LABEL_21:
        __fastfail(3u);
      p_m_TransactionHead->Flink = v9;
      v10 = Flink - 1;
      v9->Blink = p_m_TransactionHead;
      Flink->Blink = Flink;
      Flink->Flink = Flink;
      v11 = (int)Flink[1].Flink;
      if ( v11 == 2 )
      {
        Blink = this->m_ListHead.Blink;
        if ( Blink->Flink != &this->m_ListHead )
          goto LABEL_21;
        v10->Flink = &this->m_ListHead;
        v10->Blink = Blink;
        Blink->Flink = v10;
        this->m_ListHead.Blink = v10;
        this->EntryAdded(this, (FxTransactionedEntry *)v10);
      }
      else if ( v11 == 3 )
      {
        v16 = v10->Flink;
        if ( v10->Flink->Blink != v10 )
          goto LABEL_21;
        v17 = v10->Blink;
        if ( v17->Flink != v10 )
          goto LABEL_21;
        v17->Flink = v16;
        v16->Blink = v17;
        v18 = releaseHead.Blink;
        if ( releaseHead.Blink->Flink != &releaseHead )
          goto LABEL_21;
        Flink->Blink = releaseHead.Blink;
        Flink->Flink = &releaseHead;
        v18->Flink = Flink;
        releaseHead.Blink = Flink;
        this->EntryRemoved(this, (FxTransactionedEntry *)v10);
      }
      LODWORD(v10[2].Flink) = 1;
    }
  }
  if ( !this->m_ListLockedRecursionCount && this->m_Deleting )
  {
    m_DeletingDoneEvent = this->m_DeletingDoneEvent;
    this->m_DeletingDoneEvent = 0LL;
  }
  LOBYTE(v5) = irql;
  this->ReleaseLock(this, FxDriverGlobals, v5);
  while ( 1 )
  {
    v13 = releaseHead.Flink;
    if ( releaseHead.Flink == &releaseHead )
      break;
    if ( releaseHead.Flink->Blink != &releaseHead )
      goto LABEL_21;
    v14 = releaseHead.Flink->Flink;
    if ( releaseHead.Flink->Flink->Blink != releaseHead.Flink )
      goto LABEL_21;
    releaseHead.Flink = releaseHead.Flink->Flink;
    v15 = v13 - 1;
    v14->Blink = &releaseHead;
    v13->Blink = v13;
    v13->Flink = v13;
    ((void (__fastcall *)(_LIST_ENTRY *, _LIST_ENTRY *, __int64, const char *))v13[1].Blink->Flink[1].Flink)(
      v13[1].Blink,
      &v13[-1],
      226LL,
      "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp");
    if ( this->m_DeleteOnRemove )
      ((void (__fastcall *)(_LIST_ENTRY *))v15[2].Blink->Flink[3].Flink)(v15[2].Blink);
  }
  if ( m_DeletingDoneEvent )
    KeSetEvent(&m_DeletingDoneEvent->m_Event, 0, 0);
}
