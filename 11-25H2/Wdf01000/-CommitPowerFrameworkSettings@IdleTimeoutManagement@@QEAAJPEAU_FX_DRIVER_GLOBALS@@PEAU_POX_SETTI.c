/*
 * XREFs of ?CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTINGS@@@Z @ 0x1400A7988
 * Callers:
 *     ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1400A5EB4 (-AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA?AW4IdleTimeoutStatusUpdateResult@1@W4IdleTimeoutStatusFlag@1@@Z @ 0x140082EA8 (-UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA-AW4IdleTimeoutStatusUpdateResult@1@W4IdleTi.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall IdleTimeoutManagement::CommitPowerFrameworkSettings(
        IdleTimeoutManagement *this,
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _POX_SETTINGS *PoxSettings)
{
  char v5; // si
  void (__fastcall *ComponentIdleConditionCallback)(void *, unsigned int); // r10
  unsigned __int16 v7; // r9
  unsigned int v8; // ebx
  const void *_a1; // rcx
  int updated; // eax
  __int16 v11; // dx
  int v12; // eax
  int v13; // eax

  v5 = 0;
  ComponentIdleConditionCallback = this[-2].m_PoxSettings[1].ComponentIdleConditionCallback;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_PoxSettings, (signed __int64)PoxSettings, 0LL) )
  {
    v7 = 14;
LABEL_3:
    v8 = -1073741808;
    _a1 = (const void *)((unsigned __int64)ComponentIdleConditionCallback ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*((_WORD *)ComponentIdleConditionCallback + 5) )
      _a1 = 0LL;
    WPP_IFR_SF_qqd(
      DriverGlobals,
      2u,
      0xCu,
      v7,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      _a1,
      *((const void **)ComponentIdleConditionCallback + 18),
      0xC0000010);
    FxVerifierDbgBreakPoint(DriverGlobals);
    goto LABEL_13;
  }
  v5 = 1;
  updated = IdleTimeoutManagement::UpdateIdleTimeoutStatus(this, IdleTimeoutPoxSettingsSpecified);
  if ( !updated )
    return 0;
  v12 = updated - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( !v13 )
    {
      v7 = 15;
      goto LABEL_3;
    }
    if ( v13 == 1 )
    {
      v7 = v11 + 12;
      goto LABEL_3;
    }
  }
  v8 = -1073741595;
LABEL_13:
  if ( v5 )
    this->m_PoxSettings = 0LL;
  return v8;
}
