/*
 * XREFs of ?Dispose@FxChildList@@MEAAEXZ @ 0x140077C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxChildList::Dispose(FxChildList *this)
{
  if ( this->m_IsAdded )
    this->m_DeviceBase->RemoveChildList(this->m_DeviceBase, this);
  return 1;
}
