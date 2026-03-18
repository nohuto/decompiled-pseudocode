/*
 * XREFs of ?AddProvider@FxWmiIrpHandler@@QEAAJPEAVFxWmiProvider@@PEAE@Z @ 0x14003F0F0
 * Callers:
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x14003E36C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z @ 0x14003F920 (-FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z.c)
 *     ?AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z @ 0x1400838A4 (-AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z.c)
 */

__int64 __fastcall FxWmiIrpHandler::AddProvider(
        FxWmiIrpHandler *this,
        FxWmiProvider *Provider,
        unsigned __int8 *Update)
{
  _LIST_ENTRY *Flink; // rcx
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // si
  unsigned int v9; // edi
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (Flink = this[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, (unsigned __int8)Update);
    v8 = irql;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  if ( Provider->m_ListEntry.Flink != &Provider->m_ListEntry
    || FxWmiIrpHandler::FindProviderLocked(this, &Provider->m_Guid) )
  {
    v9 = 0x40000000;
  }
  else
  {
    v9 = FxWmiIrpHandler::AddProviderLocked(this, Provider, v8, Update);
  }
  FxNonPagedObject::Unlock(this, v8, v7);
  return v9;
}
