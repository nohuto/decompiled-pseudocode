/*
 * XREFs of ?SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z @ 0x1400A7390
 * Callers:
 *     ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x140081F28 (-SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ.c)
 *     ?_SleepStudyWnfCallback@FxPkgPnp@@SAJPEAU_MX_WNF_SUBSCRIPTION_CONTEXT@@PEAX@Z @ 0x1400A7940 (-_SleepStudyWnfCallback@FxPkgPnp@@SAJPEAU_MX_WNF_SUBSCRIPTION_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ @ 0x1400A7538 (-SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ.c)
 *     SleepstudyHelper_Initialize @ 0x1400DB020 (SleepstudyHelper_Initialize.c)
 */

void __fastcall FxPkgPnp::SleepStudyEvaluateDripsConstraint(FxPkgPnp *this, unsigned __int8 IgnoreWnfQueryFailure)
{
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rax
  int _a2; // eax
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // cx
  const void *_a1; // rdx
  FxDeviceBase *v9; // rax
  NTSTATUS v10; // edx
  int v11; // eax
  FxDeviceBase *v12; // rdx
  unsigned __int16 v13; // cx
  const void *v14; // rdx
  FxDeviceBase *v15; // rcx
  unsigned __int16 v16; // ax
  const void *v17; // rcx
  int initLib[10]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int8 constraintsRegistered; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 isDripsConstraint; // [rsp+80h] [rbp+18h] BYREF
  unsigned int bufferSize; // [rsp+88h] [rbp+20h] BYREF

  m_SleepStudy = this->m_SleepStudy;
  constraintsRegistered = 0;
  initLib[0] = 0;
  bufferSize = 1;
  _a2 = ExQueryWnfStateData(m_SleepStudy->WnfContext->Handle, initLib, &constraintsRegistered, &bufferSize);
  if ( _a2 < 0 )
  {
    if ( IgnoreWnfQueryFailure == 1 )
      return;
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x13u, WPP_FxPkgPnpKM_cpp_Traceguids, _a1, _a2);
    goto LABEL_22;
  }
  if ( !constraintsRegistered )
  {
    if ( IgnoreWnfQueryFailure == 1 )
      return;
    goto LABEL_22;
  }
  v9 = this->m_DeviceBase;
  isDripsConstraint = 0;
  v10 = ZwPowerInformation(
          QueryPotentialDripsConstraint,
          v9->m_PhysicalDevice.m_DeviceObject,
          0x150u,
          &isDripsConstraint,
          1u);
  if ( v10 < 0 )
  {
    v15 = this->m_DeviceBase;
    v16 = v15->m_ObjectSize;
    v17 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v16 )
      v17 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x14u, WPP_FxPkgPnpKM_cpp_Traceguids, v17, v10);
    goto LABEL_22;
  }
  if ( !isDripsConstraint )
    goto LABEL_22;
  if ( !_InterlockedCompareExchange(&this->m_SleepStudy->LibInitializing, 1, 0) )
  {
    v11 = SleepstudyHelper_Initialize(&this->m_SleepStudy->SleepStudyLibContext, this->m_DeviceBase);
    if ( v11 < 0 )
    {
      v12 = this->m_DeviceBase;
      v13 = v12->m_ObjectSize;
      v14 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v13 )
        v14 = 0LL;
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x15u, WPP_FxPkgPnpKM_cpp_Traceguids, v14, v11);
    }
    v10 = FxPkgPnp::SleepStudyRegisterBlockingComponents(this);
  }
  if ( v10 < 0 )
LABEL_22:
    this->m_SleepStudyTrackReferences = 0;
}
