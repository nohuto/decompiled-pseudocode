/*
 * XREFs of ?WorkItemHandler@FxWorkItem@@AEAAXXZ @ 0x140057E0C
 * Callers:
 *     ?WorkItemThunk@FxWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x140057D80 (-WorkItemThunk@FxWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxWorkItem::WorkItemHandler(FxWorkItem *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxVerifierLock **p_m_WorkItemCompleted; // rdi
  unsigned __int64 *p_m_Lock; // rsi
  unsigned __int8 v7; // al
  unsigned __int8 v8; // r8
  char m_ObjectFlags; // cl
  FxCallbackLock *m_CallbackLock; // rcx
  void (__fastcall *v11)(void (__fastcall **)(WDFWORKITEM__ *), __int64, __int64, __int64, char); // rax
  WDFWORKITEM__ *v12; // rcx
  unsigned __int8 v13; // r8
  FxVerifierLock **v14; // rdi
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // r8
  bool v17; // zf
  void (__fastcall *v18)(void (__fastcall **)(WDFWORKITEM__ *), __int64, __int64, __int64, char); // rax
  WDFWORKITEM__ *v19; // rcx
  __int64 v20; // rdx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_QWORD *)((unsigned int)(unk_1400C8080 * HIDWORD(KeGetPcr()[1].LockArray)) + unk_1400C8070) = m_Globals;
  p_m_WorkItemCompleted = (FxVerifierLock **)&this[-1].m_WorkItemCompleted;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_WorkItemCompleted )
  {
    FxVerifierLock::Lock(*p_m_WorkItemCompleted, &irql, a3);
    v7 = irql;
    p_m_Lock = &this->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &this->m_NPLock.m_Lock;
    v7 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v7;
  }
  ++this->m_WorkItemRunningCount;
  m_ObjectFlags = this->m_ObjectFlags;
  this->m_Enqueued = 0;
  if ( m_ObjectFlags < 0 && *p_m_WorkItemCompleted )
    FxVerifierLock::Unlock(*p_m_WorkItemCompleted, v7, v8);
  else
    KeReleaseSpinLock(p_m_Lock, v7);
  m_CallbackLock = this->m_CallbackLock;
  if ( m_CallbackLock )
  {
    m_CallbackLock->Lock(m_CallbackLock, &irql);
    v18 = *(void (__fastcall **)(void (__fastcall **)(WDFWORKITEM__ *), __int64, __int64, __int64, char))(unk_1400C80A8 + 24LL);
    if ( v18 )
      v18(&this->m_Callback, 8LL, 1207959552LL, 3943LL, 2);
    v19 = (WDFWORKITEM__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v19 = 0LL;
    this->m_Callback(v19);
    LOBYTE(v20) = irql;
    this->m_CallbackLock->Unlock(this->m_CallbackLock, v20);
  }
  else
  {
    v11 = *(void (__fastcall **)(void (__fastcall **)(WDFWORKITEM__ *), __int64, __int64, __int64, char))(unk_1400C80A8 + 24LL);
    if ( v11 )
      v11(&this->m_Callback, 8LL, 1207959552LL, 3943LL, 2);
    v12 = (WDFWORKITEM__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v12 = 0LL;
    this->m_Callback(v12);
  }
  v14 = (FxVerifierLock **)&this[-1].m_WorkItemCompleted;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && *v14 )
  {
    FxVerifierLock::Lock(*v14, &irql, v13);
    v15 = irql;
  }
  else
  {
    v15 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v15;
  }
  v17 = this->m_WorkItemRunningCount-- == 1;
  if ( v17 && !this->m_Enqueued )
  {
    KeSetEvent(&this->m_WorkItemCompleted.m_Event.m_Event, 0, 0);
    v15 = irql;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && *v14 )
    FxVerifierLock::Unlock(*v14, v15, v16);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v15);
}
