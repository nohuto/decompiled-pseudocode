/*
 * XREFs of ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x140073C20
 * Callers:
 *     imp_WdfIoQueueReadyNotify @ 0x140073BD0 (imp_WdfIoQueueReadyNotify.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoQueue::ReadyNotify(
        FxIoQueue *this,
        void (__fastcall *QueueReady)(WDFQUEUE__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  bool v4; // zf
  void *v5; // rbp
  unsigned __int8 v8; // r8
  unsigned __int16 v9; // r9
  void (__fastcall *Method)(WDFQUEUE__ *, void *); // rax
  unsigned int v12; // edi
  FxVerifierLock *v13; // rcx
  const void *_a1; // rbx
  unsigned __int16 v15; // r9
  const void *v16; // rcx
  const void *v17; // rcx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v4 = this->m_Type == WdfIoQueueDispatchManual;
  v5 = Context;
  irql = 0;
  if ( !v4 )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v12 = -1073741808;
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x3Cu, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741808);
    FxVerifierDbgBreakPoint(m_Globals);
    return v12;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v13 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v13, &irql, (unsigned __int8)Context);
  }
  else
  {
    irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  if ( !this->m_Deleted )
  {
    Method = this->m_ReadyNotify.Method;
    if ( QueueReady )
    {
      if ( !Method )
      {
LABEL_7:
        this->m_ReadyNotify.Method = QueueReady;
        this->m_ReadyNotifyContext = v5;
        FxIoQueue::DispatchEvents(this, irql, 0LL, v9);
        return 0LL;
      }
      v15 = 61;
    }
    else
    {
      if ( !Method )
      {
        v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        v12 = -1073741808;
        if ( !this->m_ObjectSize )
          v16 = 0LL;
        WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x3Eu, WPP_FxIoQueue_cpp_Traceguids, v16, -1073741808);
        goto LABEL_26;
      }
      if ( (this->m_QueueState & 2) == 0 )
      {
        v5 = 0LL;
        QueueReady = 0LL;
        goto LABEL_7;
      }
      v15 = 63;
    }
    v12 = -1073741808;
    v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v17 = 0LL;
    WPP_IFR_SF_qqd(m_Globals, 2u, 0xDu, v15, WPP_FxIoQueue_cpp_Traceguids, v17, &this->m_ReadyNotify, 0xC0000010);
LABEL_26:
    FxVerifierDbgBreakPoint(m_Globals);
    goto LABEL_9;
  }
  v12 = -1073741738;
LABEL_9:
  FxNonPagedObject::Unlock(this, irql, v8);
  return v12;
}
