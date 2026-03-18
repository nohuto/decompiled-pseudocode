/*
 * XREFs of ?RemoveIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z @ 0x14003BD6C
 * Callers:
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x14003BB80 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 */

void __fastcall FxPkgIo::RemoveIoQueue(FxPkgIo *this, FxIoQueue *IoQueue, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  unsigned __int8 v6; // al
  FxIoQueueNode *p_m_IoPkgListNode; // rcx
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rdx
  FxVerifierLock *v10; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  irql = 0;
  if ( m_ObjectFlags < 0 && (v10 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
  {
    FxVerifierLock::Lock(v10, &irql, a3);
    v6 = irql;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  p_m_IoPkgListNode = &IoQueue->m_IoPkgListNode;
  Flink = IoQueue->m_IoPkgListNode.m_ListEntry.Flink;
  if ( (FxIoQueueNode *)Flink->Blink != &IoQueue->m_IoPkgListNode
    || (Blink = IoQueue->m_IoPkgListNode.m_ListEntry.Blink, (FxIoQueueNode *)Blink->Flink != p_m_IoPkgListNode) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  IoQueue->m_IoPkgListNode.m_ListEntry.Blink = &IoQueue->m_IoPkgListNode.m_ListEntry;
  p_m_IoPkgListNode->m_ListEntry.Flink = &p_m_IoPkgListNode->m_ListEntry;
  FxNonPagedObject::Unlock(this, v6, (unsigned __int8)Flink);
}
