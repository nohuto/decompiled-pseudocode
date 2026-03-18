/*
 * XREFs of ?InsertInDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x1400488B0
 * Callers:
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14004861C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIoQueue::InsertInDriverOwnedList(FxIoQueue *this, FxRequest *Request)
{
  _LIST_ENTRY *p_m_DriverOwned; // rcx
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *Blink; // rdx

  ++this->m_DriverIoCount;
  p_m_DriverOwned = &this->m_DriverOwned;
  p_m_OwnerListEntry2 = &Request->m_OwnerListEntry2;
  Blink = p_m_DriverOwned->Blink;
  if ( Blink->Flink != p_m_DriverOwned )
    __fastfail(3u);
  p_m_OwnerListEntry2->Flink = p_m_DriverOwned;
  p_m_OwnerListEntry2->Blink = Blink;
  Blink->Flink = p_m_OwnerListEntry2;
  p_m_DriverOwned->Blink = p_m_OwnerListEntry2;
}
