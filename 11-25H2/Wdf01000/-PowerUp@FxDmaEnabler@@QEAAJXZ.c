/*
 * XREFs of ?PowerUp@FxDmaEnabler@@QEAAJXZ @ 0x14006F3A0
 * Callers:
 *     ?PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ @ 0x14001A548 (-PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qld @ 0x140087C60 (WPP_IFR_SF_qld.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDmaEnabler::PowerUp(FxDmaEnabler *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  const void *v3; // rbp
  unsigned int level; // edi
  WDFDMAENABLER__ *_a1; // rsi
  int (__fastcall *m_Method)(WDFDMAENABLER__ *); // rax
  int (__fastcall *v7)(WDFDMAENABLER__ *); // rax
  int (__fastcall *v8)(WDFDMAENABLER__ *); // rax
  int v10; // eax
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  int globals; // eax
  int v14; // eax
  int v15; // eax

  m_Globals = this->m_Globals;
  v3 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  level = 0;
  _a1 = (WDFDMAENABLER__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    _a1 = 0LL;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x19u, WPP_FxDmaEnabler_cpp_Traceguids, _a1);
  m_Method = this->m_EvtDmaEnablerFill.m_Method;
  if ( m_Method && (v14 = m_Method(_a1), this->m_EvtDmaEnablerFill.m_Status = v14, level = v14, v14 < 0) )
  {
    globals = 1;
    this->m_DmaEnablerFillFailed = 1;
  }
  else
  {
    v7 = this->m_EvtDmaEnablerEnable.m_Method;
    if ( v7 && (v10 = v7(_a1), this->m_EvtDmaEnablerEnable.m_Status = v10, level = v10, v10 < 0) )
    {
      this->m_DmaEnablerEnableFailed = 1;
      globals = 3;
    }
    else
    {
      v8 = this->m_EvtDmaEnablerSelfManagedIoStart.m_Method;
      if ( !v8 )
        return level;
      v15 = v8(_a1);
      this->m_EvtDmaEnablerSelfManagedIoStart.m_Status = v15;
      level = v15;
      if ( v15 >= 0 )
        return level;
      this->m_DmaEnablerSelfManagedIoStartFailed = 1;
      globals = 5;
    }
  }
  if ( !this->m_ObjectSize )
    v3 = 0LL;
  WPP_IFR_SF_qld(m_Globals, v11, v12, 0x1Au, WPP_FxDmaEnabler_cpp_Traceguids, v3, globals, level);
  return level;
}
