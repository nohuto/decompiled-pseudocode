/*
 * XREFs of ?PowerDown@FxDmaEnabler@@QEAAJXZ @ 0x14006B4CC
 * Callers:
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x14003317C (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qld @ 0x140087C50 (WPP_IFR_SF_qld.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDmaEnabler::PowerDown(FxDmaEnabler *this, unsigned __int8 a2, unsigned int a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  const void *v5; // rbp
  int level; // ebx
  WDFDMAENABLER__ *_a1; // r14
  int globals; // esi
  int (__fastcall *m_Method)(WDFDMAENABLER__ *); // rax
  int (__fastcall *v10)(WDFDMAENABLER__ *); // rax
  int v11; // eax
  int (__fastcall *v12)(WDFDMAENABLER__ *); // rax
  int v14; // eax
  int v15; // eax

  m_Globals = this->m_Globals;
  v5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  level = 0;
  _a1 = (WDFDMAENABLER__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  globals = 0;
  if ( !this->m_ObjectSize )
    _a1 = 0LL;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x1Bu, WPP_FxDmaEnabler_cpp_Traceguids, _a1);
  m_Method = this->m_EvtDmaEnablerSelfManagedIoStop.m_Method;
  if ( m_Method )
  {
    v14 = m_Method(_a1);
    this->m_EvtDmaEnablerSelfManagedIoStop.m_Status = v14;
    if ( v14 < 0 )
    {
      globals = 6;
      level = v14;
    }
  }
  v10 = this->m_EvtDmaEnablerDisable.m_Method;
  if ( v10 )
  {
    if ( !this->m_DmaEnablerFillFailed )
    {
      v11 = v10(_a1);
      this->m_EvtDmaEnablerDisable.m_Status = v11;
      if ( v11 < 0 )
      {
        globals = 4;
        if ( level >= 0 )
          level = v11;
      }
    }
  }
  v12 = this->m_EvtDmaEnablerFlush.m_Method;
  if ( !v12
    || this->m_DmaEnablerFillFailed
    || this->m_DmaEnablerEnableFailed
    || (v15 = v12(_a1), this->m_EvtDmaEnablerFlush.m_Status = v15, v15 >= 0) )
  {
    if ( level >= 0 )
      return (unsigned int)level;
  }
  else
  {
    globals = 2;
    if ( level >= 0 )
      level = v15;
  }
  if ( !this->m_ObjectSize )
    v5 = 0LL;
  WPP_IFR_SF_qld(m_Globals, a2, a3, 0x1Cu, WPP_FxDmaEnabler_cpp_Traceguids, v5, globals, level);
  return (unsigned int)level;
}
