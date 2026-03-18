/*
 * XREFs of ?PnpEventFailedPowerPolicyRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x140073580
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14003CB50 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x140073638 (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1400AA13C (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventFailedPowerPolicyRemoved(FxPkgPnp *This, unsigned __int8 a2)
{
  unsigned int v3; // edx
  FxCompanionTarget *m_CompanionTarget; // rcx
  unsigned __int8 m_FailedAction; // al

  FxPkgPnp::PnpFinishProcessingIrp(This, a2);
  m_CompanionTarget = This->m_CompanionTarget;
  if ( m_CompanionTarget )
    m_CompanionTarget->m_RdDeviceCompanion->SendSurpriseRemove(m_CompanionTarget->m_RdDeviceCompanion);
  m_FailedAction = This->m_FailedAction;
  if ( m_FailedAction == 1 )
  {
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(This->m_Globals, v3, 0x17u) )
      goto LABEL_6;
  }
  else if ( m_FailedAction || !This->m_InternalFailure )
  {
    goto LABEL_6;
  }
  if ( FxPkgPnp::PnpCheckAndIncrementRestartCount(This) )
    This->AskParentToRemoveAndReenumerate(This);
LABEL_6:
  if ( This->m_FailedAction || This->m_InternalFailure )
    IoInvalidateDeviceState(This->m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
  return 302LL;
}
