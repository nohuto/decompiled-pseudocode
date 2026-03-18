/*
 * XREFs of ?Dispose@FxDevice@@UEAAEXZ @ 0x140046EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x14000DC00 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?CallCleanup@FxObject@@QEAAXXZ @ 0x140045858 (-CallCleanup@FxObject@@QEAAXXZ.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x140046A6C (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x14004D238 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x14006EA28 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxDevice::Dispose(FxDevice *this)
{
  FxWmiIrpHandler *m_PkgWmi; // rcx
  __int64 v4; // rdx
  unsigned __int8 v5; // r8
  FxDisposeList *m_DisposeList; // rcx

  if ( !this->m_Legacy )
    return 1;
  m_PkgWmi = this->m_PkgWmi;
  if ( m_PkgWmi )
    FxWmiIrpHandler::Deregister(m_PkgWmi);
  FxObject::CallCleanup(this);
  FxObject::DestroyChildren(this);
  m_DisposeList = this->m_DisposeList;
  if ( m_DisposeList )
    FxDisposeList::WaitForEmpty(m_DisposeList, v4, v5);
  FxDevice::Destroy(this);
  return 0;
}
