/*
 * XREFs of ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x140037A20
 * Callers:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x140032120 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     imp_WdfRequestAllocateTimer @ 0x140038330 (imp_WdfRequestAllocateTimer.c)
 * Callees:
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x140008F8C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     memset @ 0x1400AC740 (memset.c)
 */

__int64 __fastcall FxRequestBase::CreateTimer(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  ULONG Tag; // r8d
  void *v4; // rax
  FX_POOL **v5; // rax
  FxRequestTimer *v6; // rbx
  __m128i v8; // [rsp+30h] [rbp-28h]
  __m128i v9; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  m_Globals = this->m_Globals;
  if ( this->m_Timer )
    return 0LL;
  Tag = m_Globals->Tag;
  v8.m128i_i64[0] = 0LL;
  v8.m128i_i64[1] = 64LL;
  if ( m_Globals->FxPoolTrackingOn )
    v4 = retaddr;
  else
    v4 = 0LL;
  v9 = v8;
  v5 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v9, 0x98uLL, Tag, v4);
  v6 = (FxRequestTimer *)v5;
  if ( v5 )
  {
    memset(v5, 0, 0x98uLL);
    v6->Timer.m_Timer.m_Period = 0;
    v6->Timer.m_Timer.m_TimerCallback = FxRequestBase::_TimerDPC;
    v6->Timer.m_Timer.m_TimerContext = this;
    KeInitializeTimerEx(&v6->Timer.m_Timer.KernelTimer, NotificationTimer);
    KeInitializeDpc(&v6->Timer.m_Timer.TimerDpc, v6->Timer.m_Timer.m_TimerCallback, v6->Timer.m_Timer.m_TimerContext);
    v6->Timer.m_Timer.m_IsExtTimer = 0;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_Timer, (signed __int64)v6, 0LL) )
      FxRequestTimer::`scalar deleting destructor'(v6);
    return 0LL;
  }
  return 3221225626LL;
}
