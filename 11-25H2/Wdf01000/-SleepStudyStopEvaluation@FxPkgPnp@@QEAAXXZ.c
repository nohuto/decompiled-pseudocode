/*
 * XREFs of ?SleepStudyStopEvaluation@FxPkgPnp@@QEAAXXZ @ 0x140081A88
 * Callers:
 *     ?PowerPolStoppedRemoving@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400819E0 (-PowerPolStoppedRemoving@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

void __fastcall FxPkgPnp::SleepStudyStopEvaluation(FxPkgPnp *this, __int64 a2, unsigned __int8 a3)
{
  bool v3; // zf
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rax
  unsigned __int8 v6; // dl
  _MX_WNF_SUBSCRIPTION_CONTEXT *WnfContext; // rbx
  unsigned __int8 v8; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  v3 = this->m_SleepStudy == 0LL;
  irql = 0;
  if ( !v3 )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    m_SleepStudy = this->m_SleepStudy;
    v6 = irql;
    WnfContext = m_SleepStudy->WnfContext;
    m_SleepStudy->WnfContext = 0LL;
    FxNonPagedObject::Unlock(this, v6, v8);
    ExUnsubscribeWnfStateChange(WnfContext->Handle);
    ExFreePoolWithTag(WnfContext, 0);
  }
}
