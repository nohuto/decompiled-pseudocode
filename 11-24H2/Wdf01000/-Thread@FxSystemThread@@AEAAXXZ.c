/*
 * XREFs of ?Thread@FxSystemThread@@AEAAXXZ @ 0x140070210
 * Callers:
 *     ?StaticThreadThunk@FxSystemThread@@CAXPEAX@Z @ 0x1400ABFB0 (-StaticThreadThunk@FxSystemThread@@CAXPEAX@Z.c)
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxSystemThread::Thread(FxSystemThread *this)
{
  unsigned __int8 v2; // r8
  _LIST_ENTRY *p_m_WorkList; // r14
  unsigned __int8 v4; // r8
  unsigned __int8 v5; // si
  _LIST_ENTRY *v6; // rax
  unsigned __int8 v7; // r8
  _LIST_ENTRY *v8; // rcx
  _LIST_ENTRY *v9; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY head; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int8 irql; // [rsp+60h] [rbp+20h] BYREF

  head.Blink = &head;
  head.Flink = &head;
  this->m_PEThread = (_ETHREAD *)KeGetCurrentThread();
  KeSetEvent(&this->m_InitEvent.m_Event, 0, 0);
  p_m_WorkList = &this->m_WorkList;
  while ( 1 )
  {
    irql = 0;
    while ( 1 )
    {
      if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Flink = this[-1].m_Reaper.List.Flink) != 0LL )
      {
        FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, v2);
        v5 = irql;
      }
      else
      {
        irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
        v5 = irql;
      }
      v6 = p_m_WorkList->Flink;
      if ( p_m_WorkList->Flink == p_m_WorkList )
        break;
      head.Blink = this->m_WorkList.Blink;
      head.Flink = v6;
      v6->Blink = &head;
      this->m_WorkList.Blink->Flink = &head;
      this->m_WorkList.Blink = &this->m_WorkList;
      p_m_WorkList->Flink = p_m_WorkList;
      FxNonPagedObject::Unlock(this, v5, v4);
      while ( 1 )
      {
        v8 = head.Flink;
        if ( head.Flink == &head )
          break;
        if ( head.Flink->Blink != &head || (v9 = head.Flink->Flink, head.Flink->Flink->Blink != head.Flink) )
          __fastfail(3u);
        head.Flink = head.Flink->Flink;
        v9->Blink = &head;
        ((void (__fastcall *)(_LIST_ENTRY *))v8[1].Flink)(v8[1].Blink);
      }
    }
    if ( this->m_Exit )
      break;
    KeClearEvent(&this->m_WorkEvent.m_Event);
    FxNonPagedObject::Unlock(this, v5, v7);
    KeWaitForSingleObject(&this->m_WorkEvent, Executive, 0, 0, 0LL);
  }
  FxNonPagedObject::Unlock(this, v5, v4);
  this->Release(
    this,
    FxSystemThread::StaticThreadThunk,
    527,
    "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxsystemthread.cpp");
  PsTerminateSystemThread(0);
}
