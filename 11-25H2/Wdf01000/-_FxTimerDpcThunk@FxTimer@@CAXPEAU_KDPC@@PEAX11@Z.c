/*
 * XREFs of ?_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1400464D0
 * Callers:
 *     <none>
 * Callees:
 *     ?TimerHandler@FxTimer@@QEAAXXZ @ 0x1400465E4 (-TimerHandler@FxTimer@@QEAAXXZ.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1400466C8 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxTimer::_FxTimerDpcThunk(
        _KDPC *TimerDpc,
        FxTimer *DeferredContext,
        void *SystemArgument1,
        void *SystemArgument2)
{
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  void (__fastcall *DpcNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax

  m_SystemWorkItem = DeferredContext->m_SystemWorkItem;
  if ( m_SystemWorkItem )
  {
    FxSystemWorkItem::EnqueueWorker(m_SystemWorkItem, FxTimer::_FxTimerWorkItemCallback, DeferredContext, 0);
  }
  else
  {
    DpcNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->DpcNotifyRoutine;
    if ( DpcNotifyRoutine )
      DpcNotifyRoutine(&DeferredContext->m_Callback, 8u, 2164260864u, 3938u, 2u);
    FxTimer::TimerHandler(DeferredContext);
  }
}
