/*
 * XREFs of ?SleepStudyStop@FxPkgPnp@@QEAAXXZ @ 0x14004C6B0
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x14004BB3C (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     SleepstudyHelper_UnregisterComponent @ 0x1400AB514 (SleepstudyHelper_UnregisterComponent.c)
 *     SleepstudyHelper_Uninitialize @ 0x1400DB1B8 (SleepstudyHelper_Uninitialize.c)
 */

void __fastcall FxPkgPnp::SleepStudyStop(FxPkgPnp *this)
{
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rcx
  SS_COMPONENT__ *ComponentPowerRef; // rcx
  SS_LIBRARY__ *SleepStudyLibContext; // rcx

  m_SleepStudy = this->m_SleepStudy;
  if ( m_SleepStudy )
  {
    ComponentPowerRef = m_SleepStudy->ComponentPowerRef;
    if ( ComponentPowerRef )
    {
      SleepstudyHelper_UnregisterComponent(ComponentPowerRef);
      this->m_SleepStudy->ComponentPowerRef = 0LL;
    }
    SleepStudyLibContext = this->m_SleepStudy->SleepStudyLibContext;
    if ( SleepStudyLibContext )
    {
      SleepstudyHelper_Uninitialize(SleepStudyLibContext);
      this->m_SleepStudy->SleepStudyLibContext = 0LL;
    }
    ExFreePoolWithTag(this->m_SleepStudy, 0);
    this->m_SleepStudy = 0LL;
  }
}
