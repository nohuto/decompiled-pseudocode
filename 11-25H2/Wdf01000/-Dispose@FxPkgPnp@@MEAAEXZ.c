/*
 * XREFs of ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x1400743C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x14001A750 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001C030 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x140074470 (--_GFxQueryInterface@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC740 (memset.c)
 */

unsigned __int8 __fastcall FxPkgPnp::Dispose(FxPkgPnp *this, _FX_DRIVER_GLOBALS *a2)
{
  FxWaitLockInternal *p_m_QueryInterfaceLock; // rbx
  _SINGLE_LIST_ENTRY *Next; // rdi
  _FX_DRIVER_GLOBALS *v5; // rdx
  unsigned int v6; // edx
  void (__fastcall *InterfaceDereference)(void *); // rax
  _SINGLE_LIST_ENTRY *v9; // rax
  FxQueryInterface *v10; // rcx

  p_m_QueryInterfaceLock = &this->m_QueryInterfaceLock;
  this->m_InterruptListHead.Blink = &this->m_InterruptListHead;
  this->m_InterruptListHead.Flink = &this->m_InterruptListHead;
  FxWaitLockInternal::AcquireLock(&this->m_QueryInterfaceLock, a2, 0LL);
  Next = this->m_QueryInterfaceHead.Next;
  this->m_QueryInterfaceHead.Next = 0LL;
  FxWaitLockInternal::ReleaseLock(p_m_QueryInterfaceLock, v5);
  while ( Next )
  {
    v9 = Next;
    v10 = (FxQueryInterface *)&Next[-5];
    Next = Next->Next;
    v9->Next = 0LL;
    if ( !v10->m_EmbeddedInterface )
      FxQueryInterface::`scalar deleting destructor'(v10, v6);
  }
  InterfaceDereference = this->m_D3ColdInterface.InterfaceDereference;
  if ( InterfaceDereference )
    InterfaceDereference(this->m_D3ColdInterface.Context);
  memset(&this->m_D3ColdInterface, 0, sizeof(this->m_D3ColdInterface));
  return 1;
}
