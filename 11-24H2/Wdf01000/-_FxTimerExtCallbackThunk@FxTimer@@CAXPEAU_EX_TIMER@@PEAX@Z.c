/*
 * XREFs of ?_FxTimerExtCallbackThunk@FxTimer@@CAXPEAU_EX_TIMER@@PEAX@Z @ 0x14004BE10
 * Callers:
 *     <none>
 * Callees:
 *     ?TimerHandler@FxTimer@@QEAAXXZ @ 0x14004BE84 (-TimerHandler@FxTimer@@QEAAXXZ.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x14004BF68 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxTimer::_FxTimerExtCallbackThunk(struct _EX_TIMER *Timer, FxTimer *Context)
{
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  void (__fastcall *v4)(void (__fastcall **)(WDFTIMER__ *), __int64, __int64, __int64, char); // rax

  m_SystemWorkItem = Context->m_SystemWorkItem;
  if ( m_SystemWorkItem )
  {
    FxSystemWorkItem::EnqueueWorker(
      m_SystemWorkItem,
      (void (__fastcall *)(void *))FxTimer::_FxTimerWorkItemCallback,
      Context,
      0);
  }
  else
  {
    v4 = *(void (__fastcall **)(void (__fastcall **)(WDFTIMER__ *), __int64, __int64, __int64, char))(unk_1400C80A8 + 8LL);
    if ( v4 )
      v4(&Context->m_Callback, 8LL, 2164260864LL, 3938LL, 2);
    FxTimer::TimerHandler(Context);
  }
}
