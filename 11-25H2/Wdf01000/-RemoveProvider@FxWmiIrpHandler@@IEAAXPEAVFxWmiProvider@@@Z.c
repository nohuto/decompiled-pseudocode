/*
 * XREFs of ?RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x140079C34
 * Callers:
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x14003E36C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?Dispose@FxWmiProvider@@UEAAEXZ @ 0x140079C10 (-Dispose@FxWmiProvider@@UEAAEXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?RemoveProviderLocked@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x140079CA8 (-RemoveProviderLocked@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z.c)
 */

void __fastcall FxWmiIrpHandler::RemoveProvider(FxWmiIrpHandler *this, FxWmiProvider *Provider, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  unsigned __int8 v6; // r8
  _LIST_ENTRY *Flink; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  irql = 0;
  if ( m_ObjectFlags < 0 && (Flink = this[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, a3);
  else
    KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  FxWmiIrpHandler::RemoveProviderLocked(this, Provider);
  FxNonPagedObject::Unlock(this, v6, v6);
}
