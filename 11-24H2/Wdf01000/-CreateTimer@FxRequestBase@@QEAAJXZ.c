/*
 * XREFs of ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x140011D40
 * Callers:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x14000B350 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     imp_WdfRequestAllocateTimer @ 0x140012650 (imp_WdfRequestAllocateTimer.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1400216BC (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     memset @ 0x1400AC800 (memset.c)
 */

__int64 __fastcall FxRequestBase::CreateTimer(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  ULONG Tag; // r8d
  void *v4; // rax
  FX_POOL **v5; // rax
  FxRequestTimer *v6; // rbx
  unsigned int v7; // edx
  __m128i v9; // [rsp+30h] [rbp-28h]
  __m128i v10; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  m_Globals = this->m_Globals;
  if ( this->m_Timer )
    return 0LL;
  Tag = m_Globals->Tag;
  v9.m128i_i64[0] = 0LL;
  v9.m128i_i64[1] = 64LL;
  if ( m_Globals->FxPoolTrackingOn )
    v4 = retaddr;
  else
    v4 = 0LL;
  v10 = v9;
  v5 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v10, 0x98uLL, Tag, v4);
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
      FxRequestTimer::`scalar deleting destructor'(v6, v7);
    return 0LL;
  }
  return 3221225626LL;
}
