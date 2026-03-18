/*
 * XREFs of ?SleepStudyResetBlockersForD0@FxPkgPnp@@QEAAXXZ @ 0x1400738CC
 * Callers:
 *     ?PowerWaking@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400341E0 (-PowerWaking@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerD0Starting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x140073840 (-PowerD0Starting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     SleepstudyHelper_ResetComponentsStartTime @ 0x1400AB55C (SleepstudyHelper_ResetComponentsStartTime.c)
 */

void __fastcall FxPkgPnp::SleepStudyResetBlockersForD0(FxPkgPnp *this)
{
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rcx
  SS_COMPONENT__ *ComponentPowerRef; // rcx

  m_SleepStudy = this->m_SleepStudy;
  if ( m_SleepStudy )
  {
    ComponentPowerRef = m_SleepStudy->ComponentPowerRef;
    if ( ComponentPowerRef )
      SleepstudyHelper_ResetComponentsStartTime(ComponentPowerRef);
  }
}
