/*
 * XREFs of ?AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z @ 0x14003AC7C
 * Callers:
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x14003A924 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x14003C2F0 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 */

void __fastcall FxPkgIo::AddIoQueue(FxPkgIo *this, FxIoQueue *IoQueue, unsigned __int8 a3)
{
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  _LIST_ENTRY *p_m_IoQueueListHead; // rbp
  char Index; // si
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // r14
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v12; // rdx
  FxIoQueueNode *p_m_IoPkgListNode; // rax
  FxVerifierLock *v14; // rcx
  unsigned __int8 m_PowerManaged; // al
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  m_CxDeviceInfo = IoQueue->m_CxDeviceInfo;
  p_m_IoQueueListHead = &this->m_IoQueueListHead;
  irql = 0;
  if ( m_CxDeviceInfo )
    Index = m_CxDeviceInfo->Index;
  else
    Index = 0;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v14 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
  {
    FxVerifierLock::Lock(v14, &irql, a3);
    v9 = irql;
  }
  else
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  for ( i = p_m_IoQueueListHead->Blink; i != p_m_IoQueueListHead; i = i->Blink )
  {
    if ( LODWORD(i[1].Flink) == 1 )
    {
      Flink = i[-34].Flink;
      if ( Flink )
        LOBYTE(Flink) = Flink[5].Blink;
      if ( (char)Flink <= Index )
        break;
    }
  }
  v12 = i->Flink;
  p_m_IoPkgListNode = &IoQueue->m_IoPkgListNode;
  if ( i->Flink->Blink != i )
    __fastfail(3u);
  p_m_IoPkgListNode->m_ListEntry.Flink = v12;
  IoQueue->m_IoPkgListNode.m_ListEntry.Blink = i;
  v12->Blink = &p_m_IoPkgListNode->m_ListEntry;
  i->Flink = &p_m_IoPkgListNode->m_ListEntry;
  m_PowerManaged = IoQueue->m_PowerManaged;
  if ( this->m_PowerStateOn )
  {
    if ( m_PowerManaged )
      IoQueue->m_PowerState = FxIoQueuePowerOn;
  }
  else
  {
    if ( m_PowerManaged )
      IoQueue->m_PowerState = FxIoQueuePowerOff;
    if ( this->m_QueuesAreShuttingDown )
      FxIoQueue::SetState(IoQueue, FxIoQueueSetShutdown|0x2);
  }
  FxNonPagedObject::Unlock(this, v9, v8);
}
