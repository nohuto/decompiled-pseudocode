/*
 * XREFs of ?RestartSchedulerFromTDR@ADAPTER_RENDER@@QEAAJXZ @ 0x14019FBA4
 * Callers:
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1403F2C34 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ADAPTER_RENDER::RestartSchedulerFromTDR(ADAPTER_RENDER *this)
{
  if ( !*((_QWORD *)this + 93) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2840;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pVidSchGlobal", 2840LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*((_QWORD *)this + 92) + 8LL) + 760LL))(
           *((_QWORD *)this + 93),
           1LL);
}
