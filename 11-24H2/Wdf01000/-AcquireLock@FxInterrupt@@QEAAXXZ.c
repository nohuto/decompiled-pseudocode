/*
 * XREFs of ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x140006910
 * Callers:
 *     ?_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z @ 0x140006780 (-_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z.c)
 *     ?_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z @ 0x140062F80 (-_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z.c)
 *     ?InterruptDisableInvokeCallback@FxInterrupt@@AEAAJXZ @ 0x1400713C4 (-InterruptDisableInvokeCallback@FxInterrupt@@AEAAJXZ.c)
 *     ?InterruptEnableInvokeCallback@FxInterrupt@@AEAAJXZ @ 0x140071494 (-InterruptEnableInvokeCallback@FxInterrupt@@AEAAJXZ.c)
 *     ?InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ @ 0x140079AF0 (-InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxInterrupt::AcquireLock(FxInterrupt *this)
{
  struct _KINTERRUPT *m_Interrupt; // rax
  unsigned __int8 *p_m_OldIrql; // rdi
  KIRQL CurrentIrql; // al
  FxWaitLock *m_WaitLock; // rbx
  __int64 m_ObjectSize; // rax
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  const void *_a1; // rcx

  if ( this->m_PassiveHandling )
  {
    m_WaitLock = this->m_WaitLock;
    KeEnterCriticalRegion();
    if ( KeWaitForSingleObject(&m_WaitLock->FxWaitLockInternal, Executive, 0, 0, 0LL) == 258 )
      KeLeaveCriticalRegion();
    else
      m_WaitLock->m_OwningThread = KeGetCurrentThread();
  }
  else
  {
    m_Interrupt = this->m_Interrupt;
    if ( !m_Interrupt )
      m_Interrupt = this->m_InterruptCaptured;
    p_m_OldIrql = &this->m_OldIrql;
    if ( m_Interrupt )
    {
      CurrentIrql = KeAcquireInterruptSpinLock(m_Interrupt);
    }
    else
    {
      m_ObjectSize = this->m_ObjectSize;
      p_m_Globals = &this->m_Globals;
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !(_WORD)m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_q(*p_m_Globals, 2u, 0xCu, 0x1Cu, WPP_InterruptObject_cpp_Traceguids, _a1);
      FxVerifierDbgBreakPoint(*p_m_Globals);
      CurrentIrql = KeGetCurrentIrql();
    }
    *p_m_OldIrql = CurrentIrql;
  }
}
