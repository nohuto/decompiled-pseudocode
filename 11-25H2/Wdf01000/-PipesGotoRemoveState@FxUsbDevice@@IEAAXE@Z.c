/*
 * XREFs of ?PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z @ 0x14009F0A8
 * Callers:
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x14009EEC0 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?ReleaseInterfaceIterationLock@FxUsbDevice@@IEAAXXZ @ 0x140066058 (-ReleaseInterfaceIterationLock@FxUsbDevice@@IEAAXXZ.c)
 *     ?AcquireInterfaceIterationLock@FxUsbDevice@@IEAAXXZ @ 0x140066180 (-AcquireInterfaceIterationLock@FxUsbDevice@@IEAAXXZ.c)
 *     ?CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z @ 0x1400827DC (-CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z.c)
 *     ?_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140083A0C (-_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxUsbDevice::PipesGotoRemoveState(FxUsbDevice *this, _FX_DRIVER_GLOBALS *ForceRemovePipes)
{
  unsigned __int8 v3; // r8
  unsigned __int8 v4; // r8
  unsigned __int8 *p_m_NumInterfaces; // r15
  unsigned int v6; // edi
  FxUsbInterface ***p_m_Interfaces; // r12
  FxUsbInterface *v8; // rsi
  unsigned int i; // ebx
  FxUsbPipe **m_ConfiguredPipes; // rax
  FxUsbPipe *v11; // rcx
  unsigned __int8 *v12; // r13
  _FX_DRIVER_GLOBALS *v13; // rdx
  unsigned __int8 v14; // r8
  __int64 v15; // rdi
  FxUsbInterface *v16; // rbx
  __int64 j; // rsi
  FxUsbPipe *v18; // rcx
  int v19; // [rsp+20h] [rbp-40h]
  _LIST_ENTRY pendHead; // [rsp+40h] [rbp-20h] BYREF
  _LIST_ENTRY interfaceHead; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int8 wait; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int8 irql; // [rsp+A8h] [rbp+48h] BYREF
  _SINGLE_LIST_ENTRY sentHead; // [rsp+B0h] [rbp+50h] BYREF

  pendHead.Blink = &pendHead;
  irql = 0;
  pendHead.Flink = &pendHead;
  interfaceHead.Blink = &interfaceHead;
  interfaceHead.Flink = &interfaceHead;
  sentHead.Next = 0LL;
  FxUsbDevice::AcquireInterfaceIterationLock(this, ForceRemovePipes);
  FxNonPagedObject::Lock(this, &irql, v3);
  p_m_NumInterfaces = &this->m_NumInterfaces;
  v6 = 0;
  p_m_Interfaces = &this->m_Interfaces;
  if ( this->m_NumInterfaces )
  {
    do
    {
      v8 = (*p_m_Interfaces)[v6];
      if ( v8->m_ConfiguredPipes )
      {
        for ( i = 0; i < v8->m_NumberOfConfiguredPipes; ++i )
        {
          m_ConfiguredPipes = v8->m_ConfiguredPipes;
          wait = 0;
          v11 = m_ConfiguredPipes[i];
          if ( v11 )
          {
            LOBYTE(v19) = 1;
            v11->GotoRemoveState(v11, WdfIoTargetDeleted, &pendHead, &sentHead, v19, &wait);
          }
        }
      }
      ++v6;
    }
    while ( v6 < *p_m_NumInterfaces );
    v12 = &this->m_NumInterfaces;
  }
  else
  {
    v12 = &this->m_NumInterfaces;
  }
  FxNonPagedObject::Unlock(this, irql, v4);
  FxUsbDevice::_CleanupPipesRequests(&pendHead, &sentHead);
  v15 = 0LL;
  if ( *p_m_NumInterfaces )
  {
    do
    {
      v16 = (*p_m_Interfaces)[v15];
      if ( v16->m_ConfiguredPipes )
      {
        for ( j = 0LL; (unsigned int)j < v16->m_NumberOfConfiguredPipes; j = (unsigned int)(j + 1) )
        {
          v18 = v16->m_ConfiguredPipes[j];
          if ( v18 )
            v18->WaitForSentIoToComplete(v18);
        }
      }
      FxUsbInterface::CleanUpAndDelete(v16, (unsigned __int8)v13, v14);
      v15 = (unsigned int)(v15 + 1);
    }
    while ( (unsigned int)v15 < *v12 );
  }
  FxUsbDevice::ReleaseInterfaceIterationLock(this, v13);
}
