/*
 * XREFs of ?_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z @ 0x140070720
 * Callers:
 *     <none>
 * Callees:
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1400053DC (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 */

void __fastcall FxUsbPipeContinuousReader::_FxUsbPipeRequestWorkItemThunk(
        FxUsbPipeRepeatReader *Context,
        __int64 a2,
        unsigned __int8 a3)
{
  FxUsbPipeContinuousReader *Parent; // rdi
  FxUsbPipeRepeatReader *m_WorkItemRerunContext; // rsi
  FxUsbPipe *m_Pipe; // rbx
  unsigned __int8 v6; // al
  unsigned __int8 v7; // r8
  unsigned int m_WorkItemFlags; // ecx
  char v9; // bp
  int v10; // edx
  FxVerifierLock *PipeHandle; // rcx
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // al
  unsigned __int8 v14; // r8
  unsigned int v15; // ecx
  char v16; // bp
  int v17; // edx
  FxVerifierLock *v18; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  Parent = Context->Parent;
  m_WorkItemRerunContext = Context;
  irql = 0;
  m_Pipe = Parent->m_Pipe;
  if ( SLOBYTE(m_Pipe->m_ObjectFlags) < 0
    && (PipeHandle = (FxVerifierLock *)m_Pipe[-1].m_PipeInformation.PipeHandle) != 0LL )
  {
    FxVerifierLock::Lock(PipeHandle, &irql, a3);
    v6 = irql;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&m_Pipe->m_NPLock.m_Lock);
    irql = v6;
  }
  m_WorkItemFlags = Parent->m_WorkItemFlags;
  if ( (m_WorkItemFlags & 1) != 0 )
  {
    v9 = 1;
    Parent->m_WorkItemRerunContext = m_WorkItemRerunContext;
    v10 = 2;
  }
  else
  {
    v9 = 0;
    v10 = 1;
  }
  Parent->m_WorkItemFlags = v10 | m_WorkItemFlags;
  FxNonPagedObject::Unlock(m_Pipe, v6, v7);
  if ( !v9 )
  {
    do
    {
      FxUsbPipeContinuousReader::FxUsbPipeRequestWorkItemHandler(Parent, m_WorkItemRerunContext);
      if ( SLOBYTE(m_Pipe->m_ObjectFlags) < 0
        && (v18 = (FxVerifierLock *)m_Pipe[-1].m_PipeInformation.PipeHandle) != 0LL )
      {
        FxVerifierLock::Lock(v18, &irql, v12);
        v13 = irql;
      }
      else
      {
        v13 = KeAcquireSpinLockRaiseToDpc(&m_Pipe->m_NPLock.m_Lock);
        irql = v13;
      }
      v15 = Parent->m_WorkItemFlags;
      if ( (v15 & 2) != 0 )
      {
        m_WorkItemRerunContext = (FxUsbPipeRepeatReader *)Parent->m_WorkItemRerunContext;
        v16 = 1;
        Parent->m_WorkItemRerunContext = 0LL;
        v17 = -3;
      }
      else
      {
        v16 = 0;
        v17 = -2;
      }
      Parent->m_WorkItemFlags = v17 & v15;
      FxNonPagedObject::Unlock(m_Pipe, v13, v14);
    }
    while ( v16 );
  }
}
