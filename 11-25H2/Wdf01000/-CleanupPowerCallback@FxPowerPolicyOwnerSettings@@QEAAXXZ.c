/*
 * XREFs of ?CleanupPowerCallback@FxPowerPolicyOwnerSettings@@QEAAXXZ @ 0x14004A570
 * Callers:
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x14004A9B8 (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x14004ADB0 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPowerPolicyOwnerSettings::CleanupPowerCallback(FxPowerPolicyOwnerSettings *this)
{
  void *m_PowerCallbackRegistration; // rcx
  struct _CALLBACK_OBJECT *m_PowerCallbackObject; // rcx

  m_PowerCallbackRegistration = this->m_PowerCallbackRegistration;
  if ( m_PowerCallbackRegistration )
  {
    ExUnregisterCallback(m_PowerCallbackRegistration);
    this->m_PowerCallbackRegistration = 0LL;
  }
  m_PowerCallbackObject = this->m_PowerCallbackObject;
  if ( m_PowerCallbackObject )
  {
    ObfDereferenceObject(m_PowerCallbackObject);
    this->m_PowerCallbackObject = 0LL;
  }
}
