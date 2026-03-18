/*
 * XREFs of ?Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x14006A540
 * Callers:
 *     <none>
 * Callees:
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140006B70 (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?ReleaseInterfaceIterationLock@FxUsbDevice@@IEAAXXZ @ 0x14006A6F8 (-ReleaseInterfaceIterationLock@FxUsbDevice@@IEAAXXZ.c)
 *     ?Stop@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x14006A720 (-Stop@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 *     ?AcquireInterfaceIterationLock@FxUsbDevice@@IEAAXXZ @ 0x14006A820 (-AcquireInterfaceIterationLock@FxUsbDevice@@IEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxUsbDevice::Stop(FxUsbDevice *this, _WDF_IO_TARGET_SENT_IO_ACTION Action)
{
  unsigned __int8 v4; // r8
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r12
  __int64 v7; // rdi
  unsigned __int8 *p_m_NumInterfaces; // rsi
  unsigned __int8 *v9; // r14
  __int64 v10; // rdi
  FxUsbInterface *v11; // rbp
  __int64 j; // rsi
  FxUsbPipe *v13; // rcx
  FxUsbInterface *v14; // r14
  __int64 i; // rbp
  FxUsbPipe *v16; // rcx
  _LIST_ENTRY *Blink; // rcx
  int v18; // [rsp+20h] [rbp-38h]
  _SINGLE_LIST_ENTRY head; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 wait; // [rsp+68h] [rbp+10h] BYREF

  head.Next = 0LL;
  wait = 0;
  FxIoTarget::Stop(this, Action);
  if ( Action != WdfIoTargetLeaveSentIoPending )
    FxUsbDevice::AcquireInterfaceIterationLock(this);
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (Blink = this[-1].m_InterfaceIterationLock.m_Event.m_Event.Header.WaitListHead.Blink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Blink, &wait, v4);
    v6 = wait;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  v7 = 0LL;
  p_m_NumInterfaces = &this->m_NumInterfaces;
  if ( this->m_NumInterfaces )
  {
    do
    {
      v14 = this->m_Interfaces[v7];
      if ( v14->m_ConfiguredPipes )
      {
        for ( i = 0LL; (unsigned int)i < v14->m_NumberOfConfiguredPipes; i = (unsigned int)(i + 1) )
        {
          v16 = v14->m_ConfiguredPipes[i];
          if ( v16 )
          {
            wait = 0;
            LOBYTE(v18) = 1;
            v16->GotoStopState(v16, Action, &head, &wait, v18);
          }
        }
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < *p_m_NumInterfaces );
    v9 = &this->m_NumInterfaces;
  }
  else
  {
    v9 = &this->m_NumInterfaces;
  }
  FxNonPagedObject::Unlock(this, v6, v5);
  if ( head.Next )
    FxIoTarget::_CancelSentRequests(&head);
  v10 = 0LL;
  if ( *p_m_NumInterfaces )
  {
    do
    {
      v11 = this->m_Interfaces[v10];
      if ( v11->m_ConfiguredPipes )
      {
        for ( j = 0LL; (unsigned int)j < v11->m_NumberOfConfiguredPipes; j = (unsigned int)(j + 1) )
        {
          v13 = v11->m_ConfiguredPipes[j];
          if ( v13 )
            v13->WaitForSentIoToComplete(v13);
        }
      }
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < *v9 );
  }
  if ( Action != WdfIoTargetLeaveSentIoPending )
    FxUsbDevice::ReleaseInterfaceIterationLock(this);
}
