/*
 * XREFs of ?AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z @ 0x140083894
 * Callers:
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x140054F34 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     ?AddProvider@FxWmiIrpHandler@@QEAAJPEAVFxWmiProvider@@PEAE@Z @ 0x140055CEC (-AddProvider@FxWmiIrpHandler@@QEAAJPEAVFxWmiProvider@@PEAE@Z.c)
 * Callees:
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x14008DEA8 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 */

__int64 __fastcall FxWmiIrpHandler::AddProviderLocked(
        FxWmiIrpHandler *this,
        FxWmiProvider *Provider,
        unsigned __int8 OldIrql,
        unsigned __int8 *Update)
{
  bool v6; // r11
  _LIST_ENTRY *p_m_ListEntry; // rax
  _LIST_ENTRY *Blink; // r8
  unsigned __int8 updated; // al

  v6 = 0;
  if ( this->m_RegisteredState == WmiRegistered )
  {
    v6 = (Provider->m_Flags & 4) != 0;
  }
  else if ( this->m_RegisteredState == WmiDeregistered )
  {
    return 3221225860LL;
  }
  ++this->m_NumProviders;
  p_m_ListEntry = &Provider->m_ListEntry;
  Blink = this->m_ProvidersListHead.Blink;
  if ( Blink->Flink != &this->m_ProvidersListHead )
    __fastfail(3u);
  p_m_ListEntry->Flink = &this->m_ProvidersListHead;
  Provider->m_ListEntry.Blink = Blink;
  Blink->Flink = p_m_ListEntry;
  this->m_ProvidersListHead.Blink = p_m_ListEntry;
  if ( v6 )
  {
    updated = FxWmiIrpHandler::DeferUpdateLocked(this, OldIrql);
    if ( Update )
      *Update = updated;
  }
  return 0LL;
}
