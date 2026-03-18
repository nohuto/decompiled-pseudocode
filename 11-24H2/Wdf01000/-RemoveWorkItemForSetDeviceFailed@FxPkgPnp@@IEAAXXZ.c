/*
 * XREFs of ?RemoveWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAXXZ @ 0x1400766D8
 * Callers:
 *     ?ReleaseReenumerationInterface@FxPkgFdo@@EEAAXXZ @ 0x140076680 (-ReleaseReenumerationInterface@FxPkgFdo@@EEAAXXZ.c)
 *     ?ReleaseReenumerationInterface@FxPkgPdo@@EEAAXXZ @ 0x1400766C0 (-ReleaseReenumerationInterface@FxPkgPdo@@EEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxPkgPnp::RemoveWorkItemForSetDeviceFailed(FxPkgPnp *this)
{
  FxSystemWorkItem *m_SetDeviceFailedAttemptRestartWorkItem; // rcx

  m_SetDeviceFailedAttemptRestartWorkItem = this->m_SetDeviceFailedAttemptRestartWorkItem;
  if ( m_SetDeviceFailedAttemptRestartWorkItem )
  {
    m_SetDeviceFailedAttemptRestartWorkItem->DeleteObject(m_SetDeviceFailedAttemptRestartWorkItem);
    this->m_SetDeviceFailedAttemptRestartWorkItem = 0LL;
  }
}
