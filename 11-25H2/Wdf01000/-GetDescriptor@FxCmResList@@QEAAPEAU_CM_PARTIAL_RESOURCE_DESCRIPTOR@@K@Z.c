/*
 * XREFs of ?GetDescriptor@FxCmResList@@QEAAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@K@Z @ 0x140063930
 * Callers:
 *     imp_WdfCmResourceListGetDescriptor @ 0x1400638F0 (imp_WdfCmResourceListGetDescriptor.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?GetItem@FxCollectionInternal@@QEAAPEAVFxObject@@K@Z @ 0x1400639C0 (-GetItem@FxCollectionInternal@@QEAAPEAVFxObject@@K@Z.c)
 */

_CM_PARTIAL_RESOURCE_DESCRIPTOR *__fastcall FxCmResList::GetDescriptor(
        FxCmResList *this,
        unsigned int Index,
        unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  FxObject *Item; // rdi
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // r9
  int m_Globals; // ecx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *result; // rax
  FxVerifierLock *m_Lock; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  irql = 0;
  if ( m_ObjectFlags < 0 && (m_Lock = (FxVerifierLock *)this[-1].m_NPLock.m_Lock) != 0LL )
    FxVerifierLock::Lock(m_Lock, &irql, a3);
  else
    KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  Item = FxCollectionInternal::GetItem(&this->FxCollectionInternal, Index);
  FxNonPagedObject::Unlock(this, v8, v7);
  if ( !Item )
    return 0LL;
  m_Globals = (int)Item[1].m_Globals;
  result = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)&Item[1].m_Globals + 4);
  *(_OWORD *)((char *)&Item[1].m_Globals + 4) = *(_OWORD *)&Item[1].__vftable;
  HIDWORD(Item[1].m_ChildListHead.Flink) = m_Globals;
  return result;
}
