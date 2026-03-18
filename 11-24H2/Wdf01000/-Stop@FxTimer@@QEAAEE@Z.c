/*
 * XREFs of ?Stop@FxTimer@@QEAAEE@Z @ 0x14002D490
 * Callers:
 *     ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x14002D390 (-FlushAndRundown@FxTimer@@AEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x14002CCC0 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x14002DF5C (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?Stop@MxTimer@@QEAAEXZ @ 0x140037354 (-Stop@MxTimer@@QEAAEXZ.c)
 *     WPP_IFR_SF_qqq @ 0x140041538 (WPP_IFR_SF_qqq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

BOOLEAN __fastcall FxTimer::Stop(FxTimer *this, unsigned __int8 Wait, unsigned __int8 a3)
{
  $34CEB068B178B89BBE26EB8268AB5784 *v4; // rcx
  unsigned __int8 v5; // di
  struct _EX_TIMER *m_KernelExTimer; // rcx
  _FX_DRIVER_GLOBALS **p_m_Globals; // rdi
  unsigned int v10; // edx
  FxVerifierDownlevelOption v11; // r9d
  _FX_DRIVER_GLOBALS *v12; // rcx
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // al
  unsigned __int8 v15; // r8
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  KIRQL CurrentIrql; // al
  const void *_a1; // rbx
  void (__fastcall *v19)(WDFTIMER__ *); // rcx
  void (__fastcall *m_Callback)(WDFTIMER__ *); // rcx
  _KTHREAD *_a2; // r10
  const void *v22; // r8
  struct _KTHREAD *_a3; // [rsp+38h] [rbp-10h]
  unsigned __int8 irql; // [rsp+58h] [rbp+10h] BYREF

  irql = 0;
  if ( !Wait )
  {
    v4 = &this->m_Timer.m_Timer.16;
    v5 = 1;
    if ( !this->m_Timer.m_Timer.m_IsExtTimer )
      return KeCancelTimer(&v4->KernelTimer);
    m_KernelExTimer = v4->m_KernelExTimer;
    if ( !m_KernelExTimer )
      return v5;
    return ExCancelTimer(m_KernelExTimer, 0LL);
  }
  p_m_Globals = &this->m_Globals;
  if ( this->m_CallbackThread == KeGetCurrentThread() )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(*p_m_Globals, 2u, 0x12u, 0x11u, WPP_FxTimer_cpp_Traceguids, _a1, this->m_CallbackThread);
  }
  else
  {
    if ( !(*p_m_Globals)->FxVerifierOn || !KeGetCurrentIrql() )
    {
      if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_Callback = this[-1].m_Callback) != 0LL )
        FxVerifierLock::Lock((FxVerifierLock *)m_Callback, &irql, a3);
      else
        irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
      if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(*p_m_Globals, v10, 9u, v11) )
      {
        _a2 = this->m_StopThread;
        if ( _a2 )
        {
          _a3 = KeGetCurrentThread();
          v22 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v22 = 0LL;
          WPP_IFR_SF_qqq(v12, 2u, 0x12u, 0x13u, WPP_FxTimer_cpp_Traceguids, v22, _a2, _a3);
          FxVerifierDbgBreakPoint(this->m_Globals);
        }
      }
      this->m_StartAborted = 0;
      this->m_StopThread = KeGetCurrentThread();
      v14 = irql;
      do
      {
        this->m_StopAgain = 0;
        FxNonPagedObject::Unlock(this, v14, v13);
        v5 = MxTimer::Stop(&this->m_Timer);
        KeFlushQueuedDpcs();
        m_SystemWorkItem = this->m_SystemWorkItem;
        if ( m_SystemWorkItem )
          FxCREvent::EnterCRAndWaitAndLeave(&m_SystemWorkItem->m_WorkItemCompleted);
        if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v19 = this[-1].m_Callback) != 0LL )
        {
          FxVerifierLock::Lock((FxVerifierLock *)v19, &irql, v15);
          v14 = irql;
        }
        else
        {
          v14 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
          irql = v14;
        }
      }
      while ( !v5 && this->m_StopAgain );
      this->m_StopThread = 0LL;
      this->m_StopAgain = 0;
      if ( this->m_StartAborted )
      {
        v5 = 1;
        this->m_StartAborted = 0;
      }
      FxNonPagedObject::Unlock(this, v14, v13);
      return v5;
    }
    CurrentIrql = KeGetCurrentIrql();
    WPP_IFR_SF_D(*p_m_Globals, 2u, 0x12u, 0x12u, WPP_FxTimer_cpp_Traceguids, CurrentIrql);
  }
  FxVerifierDbgBreakPoint(*p_m_Globals);
  return 0;
}
