/*
 * XREFs of ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x140006A30
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

void __fastcall FxInterrupt::ReleaseLock(FxInterrupt *this)
{
  struct _KINTERRUPT *m_Interrupt; // rax
  FxWaitLockInternal *v2; // rcx
  __int64 m_ObjectSize; // rax
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  const void *_a1; // rcx

  if ( this->m_PassiveHandling )
  {
    v2 = &this->m_WaitLock->FxWaitLockInternal;
    v2->m_OwningThread = 0LL;
    KeSetEvent(&v2->m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
  }
  else
  {
    m_Interrupt = this->m_Interrupt;
    if ( m_Interrupt || (m_Interrupt = this->m_InterruptCaptured) != 0LL )
    {
      KeReleaseInterruptSpinLock(m_Interrupt, this->m_OldIrql);
    }
    else
    {
      m_ObjectSize = this->m_ObjectSize;
      p_m_Globals = &this->m_Globals;
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !(_WORD)m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_q(*p_m_Globals, 2u, 0xCu, 0x1Du, WPP_InterruptObject_cpp_Traceguids, _a1);
      FxVerifierDbgBreakPoint(*p_m_Globals);
    }
  }
}
