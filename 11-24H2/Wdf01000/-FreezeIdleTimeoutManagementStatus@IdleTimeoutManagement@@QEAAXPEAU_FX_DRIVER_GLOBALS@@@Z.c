/*
 * XREFs of ?FreezeIdleTimeoutManagementStatus@IdleTimeoutManagement@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140081E28
 * Callers:
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140081DD0 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall IdleTimeoutManagement::FreezeIdleTimeoutManagementStatus(
        IdleTimeoutManagement *this,
        _FX_DRIVER_GLOBALS *DriverGlobals)
{
  volatile int m_IdleTimeoutStatus; // r8d
  int v4; // edi
  void (__fastcall *ComponentIdleConditionCallback)(void *, unsigned int); // rbx
  _WORD *v6; // rsi
  const void **v7; // r14
  const void *v8; // rbx
  const void *_a1; // rcx

  m_IdleTimeoutStatus = this->m_IdleTimeoutStatus;
  v4 = this->m_IdleTimeoutStatus | 1;
  ComponentIdleConditionCallback = this[-2].m_PoxSettings[1].ComponentIdleConditionCallback;
  v6 = (_WORD *)((char *)ComponentIdleConditionCallback + 10);
  v7 = (const void **)((char *)ComponentIdleConditionCallback + 144);
  v8 = (const void *)((unsigned __int64)ComponentIdleConditionCallback ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( _InterlockedExchange(&this->m_IdleTimeoutStatus, v4) != m_IdleTimeoutStatus )
  {
    _a1 = v8;
    if ( !*v6 )
      _a1 = 0LL;
    WPP_IFR_SF_qq(DriverGlobals, 3u, 0xCu, 0xCu, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, *v7);
    FxVerifierDbgBreakPoint(DriverGlobals);
  }
  if ( (v4 & 4) != 0 && (v4 & 2) == 0 )
  {
    if ( !*v6 )
      v8 = 0LL;
    WPP_IFR_SF_qq(DriverGlobals, 3u, 0xCu, 0xDu, WPP_PowerPolicyStateMachine_cpp_Traceguids, v8, *v7);
    FxVerifierDbgBreakPoint(DriverGlobals);
  }
}
