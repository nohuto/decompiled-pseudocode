/*
 * XREFs of ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x140065D1C
 * Callers:
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x14005A73C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x140074A30 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?ReleaseInterfaceIterationLock@FxUsbDevice@@IEAAXXZ @ 0x140066058 (-ReleaseInterfaceIterationLock@FxUsbDevice@@IEAAXXZ.c)
 *     ?AcquireInterfaceIterationLock@FxUsbDevice@@IEAAXXZ @ 0x140066180 (-AcquireInterfaceIterationLock@FxUsbDevice@@IEAAXXZ.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1400663A0 (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z @ 0x1400827DC (-CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z.c)
 *     ?FailPendedRequest@FxIoTarget@@IEAAXPEAVFxRequestBase@@J@Z @ 0x14009B6E4 (-FailPendedRequest@FxIoTarget@@IEAAXPEAVFxRequestBase@@J@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxUsbDevice::CleanupInterfacePipesAndDelete(FxUsbDevice *this, FxUsbInterface *UsbInterface)
{
  unsigned int v2; // ebx
  unsigned __int8 v5; // r8
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // r14
  unsigned int i; // r15d
  FxUsbPipe **m_ConfiguredPipes; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v12; // rax
  unsigned __int8 v13; // dl
  FxUsbPipe *v14; // rcx
  int v15; // [rsp+20h] [rbp-30h]
  _LIST_ENTRY pendHead; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 wait; // [rsp+80h] [rbp+30h] BYREF
  _SINGLE_LIST_ENTRY sentHead; // [rsp+88h] [rbp+38h] BYREF

  v2 = 0;
  pendHead.Blink = &pendHead;
  wait = 0;
  pendHead.Flink = &pendHead;
  sentHead.Next = 0LL;
  FxUsbDevice::AcquireInterfaceIterationLock(this);
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (Blink = this[-1].m_InterfaceIterationLock.m_Event.m_Event.Header.WaitListHead.Blink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Blink, &wait, v5);
    v8 = wait;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  for ( i = 0; i < UsbInterface->m_NumberOfConfiguredPipes; ++i )
  {
    m_ConfiguredPipes = UsbInterface->m_ConfiguredPipes;
    wait = 0;
    LOBYTE(v15) = 1;
    m_ConfiguredPipes[i]->GotoRemoveState(m_ConfiguredPipes[i], WdfIoTargetDeleted, &pendHead, &sentHead, v15, &wait);
  }
  FxNonPagedObject::Unlock(this, v8, v7);
  while ( 1 )
  {
    Flink = pendHead.Flink;
    if ( pendHead.Flink == &pendHead )
      break;
    if ( pendHead.Flink->Blink != &pendHead
      || (v12 = pendHead.Flink->Flink, pendHead.Flink->Flink->Blink != pendHead.Flink) )
    {
      __fastfail(3u);
    }
    pendHead.Flink = pendHead.Flink->Flink;
    v12->Blink = &pendHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    FxIoTarget::FailPendedRequest((FxIoTarget *)Flink[2].Blink, (FxRequestBase *)&Flink[-8].Blink, -1071644154);
  }
  FxIoTarget::_CancelSentRequests(&sentHead);
  if ( UsbInterface->m_NumberOfConfiguredPipes )
  {
    do
    {
      v14 = UsbInterface->m_ConfiguredPipes[v2];
      v14->WaitForSentIoToComplete(v14);
      ++v2;
    }
    while ( v2 < UsbInterface->m_NumberOfConfiguredPipes );
  }
  FxUsbInterface::CleanUpAndDelete(UsbInterface, v13);
  FxUsbDevice::ReleaseInterfaceIterationLock(this);
}
