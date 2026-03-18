/*
 * XREFs of ?CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z @ 0x1400827CC
 * Callers:
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x14006A3C0 (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z @ 0x14009F178 (-PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxUsbInterface::CleanUpAndDelete(FxUsbInterface *this, unsigned __int8 Failure, unsigned __int8 a3)
{
  FxUsbDevice *m_UsbDevice; // rcx
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // al
  FxUsbPipe **m_ConfiguredPipes; // rdi
  unsigned int m_NumberOfConfiguredPipes; // ebp
  FxUsbDevice *v9; // rcx
  unsigned int v10; // esi
  FxUsbPipe **v11; // rbx
  unsigned __int8 irql; // [rsp+38h] [rbp+10h] BYREF

  irql = 0;
  m_UsbDevice = this->m_UsbDevice;
  if ( SLOBYTE(m_UsbDevice->m_ObjectFlags) < 0
    && m_UsbDevice[-1].m_InterfaceIterationLock.m_Event.m_Event.Header.WaitListHead.Blink )
  {
    FxVerifierLock::Lock(
      (FxVerifierLock *)m_UsbDevice[-1].m_InterfaceIterationLock.m_Event.m_Event.Header.WaitListHead.Blink,
      &irql,
      a3);
    v6 = irql;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&m_UsbDevice->m_NPLock.m_Lock);
  }
  m_ConfiguredPipes = this->m_ConfiguredPipes;
  m_NumberOfConfiguredPipes = this->m_NumberOfConfiguredPipes;
  v9 = this->m_UsbDevice;
  this->m_ConfiguredPipes = 0LL;
  this->m_NumberOfConfiguredPipes = 0;
  FxNonPagedObject::Unlock(v9, v6, v5);
  if ( m_ConfiguredPipes )
  {
    v10 = 0;
    if ( m_NumberOfConfiguredPipes )
    {
      v11 = m_ConfiguredPipes;
      do
      {
        if ( !*v11 )
          break;
        (*v11)->DeleteObject(*v11);
        ++v10;
        ++v11;
      }
      while ( v10 < m_NumberOfConfiguredPipes );
    }
    FxPoolFree(m_ConfiguredPipes);
  }
}
