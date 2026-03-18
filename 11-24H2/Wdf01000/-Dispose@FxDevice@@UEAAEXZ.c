/*
 * XREFs of ?Dispose@FxDevice@@UEAAEXZ @ 0x14004C790
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x140026330 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x140041418 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ?CallCleanup@FxObject@@QEAAXXZ @ 0x14004B0F8 (-CallCleanup@FxObject@@QEAAXXZ.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x14004C30C (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x14006DDA8 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
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
