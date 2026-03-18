/*
 * XREFs of ?TimerHandler@FxTimer@@QEAAXXZ @ 0x14004BE84
 * Callers:
 *     ?_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z @ 0x14004BD70 (-_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?_FxTimerWorkItemCallback@FxTimer@@CAXPEAX@Z @ 0x14004BDF0 (-_FxTimerWorkItemCallback@FxTimer@@CAXPEAX@Z.c)
 *     ?_FxTimerExtCallbackThunk@FxTimer@@CAXPEAU_EX_TIMER@@PEAX@Z @ 0x14004BE10 (-_FxTimerExtCallbackThunk@FxTimer@@CAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxTimer::TimerHandler(FxTimer *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxCallbackLock *m_CallbackLock; // rcx
  WDFTIMER__ *v4; // rdi
  __int64 v5; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_QWORD *)((unsigned int)(unk_1400C8080 * HIDWORD(KeGetPcr()[1].LockArray)) + unk_1400C8070) = m_Globals;
  if ( this->m_Callback )
  {
    m_CallbackLock = this->m_CallbackLock;
    v4 = (WDFTIMER__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    this->m_CallbackThread = KeGetCurrentThread();
    if ( m_CallbackLock )
    {
      irql = 0;
      m_CallbackLock->Lock(m_CallbackLock, &irql);
      if ( !this->m_ObjectSize )
        v4 = 0LL;
      this->m_Callback(v4);
      LOBYTE(v5) = irql;
      this->m_CallbackLock->Unlock(this->m_CallbackLock, v5);
    }
    else
    {
      if ( !this->m_ObjectSize )
        v4 = 0LL;
      this->m_Callback(v4);
    }
    this->m_CallbackThread = 0LL;
  }
}
