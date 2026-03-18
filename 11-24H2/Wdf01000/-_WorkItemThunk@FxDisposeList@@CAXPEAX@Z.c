/*
 * XREFs of ?_WorkItemThunk@FxDisposeList@@CAXPEAX@Z @ 0x14004A650
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?DrainListLocked@FxDisposeList@@AEAAXPEAE@Z @ 0x14004A6B4 (-DrainListLocked@FxDisposeList@@AEAAXPEAE@Z.c)
 */

void __fastcall FxDisposeList::_WorkItemThunk(FxDisposeList *Parameter, __int64 a2, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  unsigned __int8 v5; // r8
  FxVerifierLock *Next; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_ObjectFlags = Parameter->m_ObjectFlags;
  irql = 0;
  if ( m_ObjectFlags < 0 && (Next = (FxVerifierLock *)Parameter[-1].m_List.Next) != 0LL )
    FxVerifierLock::Lock(Next, &irql, a3);
  else
    irql = KeAcquireSpinLockRaiseToDpc(&Parameter->m_NPLock.m_Lock);
  FxDisposeList::DrainListLocked(Parameter, &irql);
  FxNonPagedObject::Unlock(Parameter, irql, v5);
}
