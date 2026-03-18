/*
 * XREFs of ?ReportActive@FxInterrupt@@QEAAXE@Z @ 0x1400696D8
 * Callers:
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1400691CC (-Connect@FxInterrupt@@QEAAJK@Z.c)
 *     imp_WdfInterruptReportActive @ 0x1400A24C0 (imp_WdfInterruptReportActive.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxInterrupt::ReportActive(FxInterrupt *this, __int64 Internal)
{
  __int64 v3; // rcx
  _FX_DRIVER_GLOBALS *v4; // rcx
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // rdi
  _IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS parameters; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  if ( (_BYTE)Internal )
    goto LABEL_2;
  if ( !this->m_Connected || !this->m_Interrupt )
  {
    m_ObjectSize = this->m_ObjectSize;
    p_m_Globals = &this->m_Globals;
    m_Globals = this->m_Globals;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 3u, 0xCu, 0xAu, WPP_InterruptObjectKm_cpp_Traceguids, _a1);
    v4 = *p_m_Globals;
    goto LABEL_12;
  }
  if ( !*(_QWORD *)(v3 + 1168) )
  {
    WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0xBu, WPP_InterruptObjectKm_cpp_Traceguids);
    v4 = this->m_Globals;
LABEL_12:
    FxVerifierDbgBreakPoint(v4);
    return;
  }
LABEL_2:
  if ( !this->m_Active )
  {
    parameters.ConnectionContext.Generic = this->m_Interrupt;
    *(_QWORD *)&parameters.Version = 4LL;
    (*(void (__fastcall **)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *, __int64, _QWORD))(v3 + 1168))(
      &parameters,
      Internal,
      0LL);
    this->m_Active = 1;
  }
}
