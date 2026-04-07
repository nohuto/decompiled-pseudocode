/*
 * XREFs of ?s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180075E00
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_OnTimerTick@CTimer@@AEAAXXZ @ 0x180075E40 (-_OnTimerTick@CTimer@@AEAAXXZ.c)
 */

void __fastcall CTimer::s_TimerTickProc(
        PTP_CALLBACK_INSTANCE Instance,
        volatile signed __int64 *Context,
        PTP_TIMER Timer)
{
  CTimer *v4; // rcx

  if ( Context )
  {
    if ( Timer == (PTP_TIMER)_InterlockedCompareExchange64(Context + 7, (signed __int64)Timer, (signed __int64)Timer) )
    {
      CMILRefCountBase::AddRef((CMILRefCountBase *)Context);
      CTimer::_OnTimerTick(v4);
      CBaseObject::Release((CBaseObject *)Context);
    }
  }
}
