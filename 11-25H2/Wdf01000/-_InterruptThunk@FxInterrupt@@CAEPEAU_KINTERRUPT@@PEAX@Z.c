/*
 * XREFs of ?_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z @ 0x14003D810
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x14003D9A0 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x14003DAC0 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     ?WakeInterruptIsr@FxInterrupt@@QEAAEXZ @ 0x14003DB84 (-WakeInterruptIsr@FxInterrupt@@QEAAEXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxInterrupt::_InterruptThunk(struct _KINTERRUPT *Interrupt, FxInterrupt *ServiceContext)
{
  unsigned __int8 (__fastcall **p_m_EvtInterruptIsr)(WDFINTERRUPT__ *, unsigned int); // rdi
  void (__fastcall *v4)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  unsigned __int16 m_ObjectSize; // cx
  __int64 MessageNumber; // rdx
  unsigned __int64 v7; // rbx
  void (__fastcall *v9)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  unsigned __int64 v10; // rcx
  unsigned __int8 v11; // di
  void (__fastcall *InterruptNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax

  if ( ServiceContext->m_IsEdgeTriggeredNonMsiInterrupt != 1 )
  {
    if ( ServiceContext->m_Interrupt )
      goto LABEL_3;
    return 0;
  }
  if ( ServiceContext->m_Disconnecting == 1 )
    return 0;
  ServiceContext->m_InterruptCaptured = Interrupt;
LABEL_3:
  if ( ServiceContext->m_WakeInterruptMachine )
  {
    InterruptNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->InterruptNotifyRoutine;
    if ( InterruptNotifyRoutine )
      InterruptNotifyRoutine(&ServiceContext->m_EvtInterruptIsr, 8u, 2181038080u, 3937u, 2u);
    return FxInterrupt::WakeInterruptIsr(ServiceContext);
  }
  else if ( ServiceContext->m_PassiveHandling )
  {
    FxInterrupt::AcquireLock(ServiceContext);
    v9 = FxLibraryGlobals.PerfTraceRoutines->InterruptNotifyRoutine;
    if ( v9 )
      v9(&ServiceContext->m_EvtInterruptIsr, 8u, 2181038080u, 3937u, 2u);
    v10 = (unsigned __int64)ServiceContext ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !ServiceContext->m_ObjectSize )
      v10 = 0LL;
    v11 = ServiceContext->m_EvtInterruptIsr((WDFINTERRUPT__ *)v10, ServiceContext->m_InterruptInfo.MessageNumber);
    FxInterrupt::ReleaseLock(ServiceContext);
    return v11;
  }
  else
  {
    p_m_EvtInterruptIsr = &ServiceContext->m_EvtInterruptIsr;
    v4 = FxLibraryGlobals.PerfTraceRoutines->InterruptNotifyRoutine;
    if ( v4 )
      v4(p_m_EvtInterruptIsr, 8u, 2181038080u, 3936u, 2u);
    m_ObjectSize = ServiceContext->m_ObjectSize;
    MessageNumber = ServiceContext->m_InterruptInfo.MessageNumber;
    v7 = (unsigned __int64)ServiceContext ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v7 = 0LL;
    return (*p_m_EvtInterruptIsr)((WDFINTERRUPT__ *)v7, MessageNumber);
  }
}
