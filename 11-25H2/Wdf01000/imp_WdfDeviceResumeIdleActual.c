/*
 * XREFs of imp_WdfDeviceResumeIdleActual @ 0x140058120
 * Callers:
 *     imp_WdfDeviceResumeIdleNoTrack @ 0x1400580F0 (imp_WdfDeviceResumeIdleNoTrack.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x14000CAB0 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140013E20 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     SleepstudyHelper_ComponentInactive @ 0x1400AB338 (SleepstudyHelper_ComponentInactive.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfDeviceResumeIdleActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        void *Tag,
        int Line,
        char *File)
{
  int v5; // r15d
  void *v6; // r12
  __int64 v8; // rcx
  FxDevice *v9; // rbx
  FxPowerPolicyOwnerSettings *m_Owner; // rdi
  FxPkgPnp *m_PkgPnp; // rsi
  unsigned __int64 *p_m_Lock; // rbp
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  KIRQL v14; // r14
  __int64 m_EventHistoryIndex; // rax
  unsigned int v16; // esi
  FxPkgPnp *v17; // r13
  __int64 i; // rax
  const FxPowerIdleTargetState *TargetStates; // rcx
  unsigned int _a3; // ebx
  FxDeviceBase *v21; // rdx
  const void *_a1; // rcx
  char v23; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  FxTagTracker *m_TagTracker; // rcx
  FxPkgPnp *v26; // rcx
  FxDevice_vtbl *v27; // rax
  unsigned __int8 v28; // dl
  unsigned int v29; // r8d
  unsigned __int16 v30; // r9
  FxDeviceBase *m_DeviceBase; // rax
  const void *v32; // rdx
  bool v33; // zf
  _DEVICE_OBJECT *_a2; // rax
  unsigned int v35; // edx
  FxVerifierDownlevelOption v36; // r9d
  _FX_DRIVER_GLOBALS *v37; // rcx
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rcx
  SS_COMPONENT__ *ComponentPowerRef; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-88h]
  FxDevice *pDevice; // [rsp+50h] [rbp-58h] BYREF
  FxDevice **p_pDevice; // [rsp+58h] [rbp-50h] BYREF
  __int16 v43; // [rsp+60h] [rbp-48h]
  __int16 v44; // [rsp+62h] [rbp-46h]
  int v45; // [rsp+64h] [rbp-44h]

  v5 = Line;
  v6 = Tag;
  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(v8) = 0;
  v9 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    v8 = LOWORD(v9->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v9 = (FxDevice *)((char *)v9 - v8);
  }
  if ( v9->m_Type == 4098 )
  {
    pDevice = v9;
  }
  else
  {
    pDevice = 0LL;
    p_pDevice = &pDevice;
    v44 = v8;
    v45 = 0;
    v27 = v9->FxDeviceBase::FxNonPagedObject::FxObject::__vftable;
    v43 = 4098;
    if ( v27->QueryInterface(v9, (FxQueryInterfaceParams *)&p_pDevice) < 0 )
    {
      WPP_IFR_SF_qDqD(v9->m_Globals, v28, v29, v30, traceGuid, (const void *)Device, 0x1002u, v9, v9->m_Type);
      FxVerifierBugCheckWorker(v9->m_Globals, WDF_INVALID_HANDLE, Device, 0x1002uLL);
    }
    v9 = pDevice;
  }
  m_Owner = v9->m_PkgPnp->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    m_PkgPnp = m_Owner->m_PkgPnp;
    p_m_Lock = &m_Owner->m_PowerIdleMachine.m_Lock.m_Lock;
    m_Globals = m_PkgPnp->m_Globals;
    v14 = KeAcquireSpinLockRaiseToDpc(&m_Owner->m_PowerIdleMachine.m_Lock.m_Lock);
    if ( !m_Owner->m_PowerIdleMachine.m_IoCount )
    {
      m_DeviceBase = m_PkgPnp->m_DeviceBase;
      v32 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      v33 = m_DeviceBase->m_ObjectSize == 0;
      _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
      if ( v33 )
        v32 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 2u, 0xCu, 0xFu, WPP_PowerIdleStateMachine_cpp_Traceguids, v32, _a2);
      if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(m_Globals, v35, 0xBu, v36) )
        FxVerifierDbgBreakPoint(v37);
    }
    m_EventHistoryIndex = m_Owner->m_PowerIdleMachine.m_EventHistoryIndex;
    v16 = --m_Owner->m_PowerIdleMachine.m_IoCount;
    v17 = m_Owner->m_PkgPnp;
    m_Owner->m_PowerIdleMachine.m_EventHistory[m_EventHistoryIndex] = PowerIdleEventIoDecrement;
    m_Owner->m_PowerIdleMachine.m_EventHistoryIndex = (m_Owner->m_PowerIdleMachine.m_EventHistoryIndex + 1) & 7;
    for ( i = 0LL;
          (unsigned int)i < FxPowerIdleMachine::m_StateTable[m_Owner->m_PowerIdleMachine.m_CurrentIdleState - 1].TargetStatesCount;
          i = (unsigned int)(i + 1) )
    {
      TargetStates = FxPowerIdleMachine::m_StateTable[m_Owner->m_PowerIdleMachine.m_CurrentIdleState - 1].TargetStates;
      if ( TargetStates[i].PowerIdleEvent == PowerIdleEventIoDecrement )
      {
        _a3 = TargetStates[i].PowerIdleState;
        if ( _a3 != 35 )
        {
          do
          {
            v21 = v17->m_DeviceBase;
            _a1 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v21->m_ObjectSize )
              _a1 = 0LL;
            WPP_IFR_SF_qqLL(
              v17->m_Globals,
              4u,
              0x15u,
              0x11u,
              WPP_PowerIdleStateMachine_cpp_Traceguids,
              _a1,
              v21->m_DeviceObject.m_DeviceObject,
              _a3,
              m_Owner->m_PowerIdleMachine.m_CurrentIdleState);
            m_Owner->m_PowerIdleMachine.m_StateHistory[m_Owner->m_PowerIdleMachine.m_StateHistoryIndex] = _a3;
            v23 = m_Owner->m_PowerIdleMachine.m_StateHistoryIndex + 1;
            m_Owner->m_PowerIdleMachine.m_CurrentIdleState = _a3;
            m_Owner->m_PowerIdleMachine.m_StateHistoryIndex = v23 & 7;
            StateFunc = FxPowerIdleMachine::m_StateTable[(int)_a3 - 1].StateFunc;
            if ( !StateFunc )
              break;
            _a3 = StateFunc(&m_Owner->m_PowerIdleMachine);
          }
          while ( _a3 != 35 );
          v5 = Line;
          p_m_Lock = &m_Owner->m_PowerIdleMachine.m_Lock.m_Lock;
          v6 = Tag;
        }
        break;
      }
    }
    KeReleaseSpinLock(p_m_Lock, v14);
    m_TagTracker = m_Owner->m_PowerIdleMachine.m_TagTracker;
    if ( m_TagTracker )
      FxTagTracker::UpdateTagHistory(m_TagTracker, v6, v5, File, TagRelease, v16);
    v26 = pDevice->m_PkgPnp;
    if ( v26->m_SleepStudyTrackReferences == 1
      && _InterlockedExchangeAdd(&v26->m_SleepStudyPowerRefIoCount, 0xFFFFFFFF) == 1 )
    {
      m_SleepStudy = v26->m_SleepStudy;
      if ( m_SleepStudy )
      {
        ComponentPowerRef = m_SleepStudy->ComponentPowerRef;
        if ( ComponentPowerRef )
          SleepstudyHelper_ComponentInactive(ComponentPowerRef);
      }
    }
  }
  else
  {
    WPP_IFR_SF_(v9->m_Globals, 2u, 0x12u, 0x27u, WPP_FxDeviceApi_cpp_Traceguids);
  }
}
