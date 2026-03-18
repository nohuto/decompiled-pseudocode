/*
 * XREFs of StopIdleWorker @ 0x140014800
 * Callers:
 *     imp_WdfDeviceStopIdleNoTrack @ 0x14007CFA0 (imp_WdfDeviceStopIdleNoTrack.c)
 * Callees:
 *     WPP_IFR_SF_dd @ 0x1400076CC (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x140025000 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1400251E0 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x14002DF5C (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qdd @ 0x14005F07C (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     SleepstudyHelper_ComponentActive @ 0x1400AB2F8 (SleepstudyHelper_ComponentActive.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StopIdleWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        unsigned __int8 WaitForD0,
        void *Tag,
        int Line,
        char *File)
{
  int v6; // r14d
  void *v7; // rbp
  FxDevice *v9; // rbx
  __int64 v10; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  unsigned int v13; // r13d
  FxPowerPolicyOwnerSettings *v14; // rsi
  KIRQL v15; // al
  unsigned __int8 m_Flags; // dl
  __int64 m_EventHistoryIndex; // rax
  FxPkgPnp *m_PkgPnp; // r11
  __int64 i; // rax
  const FxPowerIdleTargetState *v20; // r8
  LONG StateEvent; // eax
  unsigned __int64 *p_m_Lock; // rcx
  int _a3; // ebx
  FxTagTracker *m_TagTracker; // rcx
  FxPkgPnp *v25; // rcx
  unsigned int PowerIdleState; // ebx
  FxDeviceBase *m_DeviceBase; // rdx
  const void *v29; // rcx
  char v30; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  FxPowerIdleStates v32; // eax
  _FX_DRIVER_GLOBALS *v33; // rcx
  $921581151E63D277366488A82A7AB3A8 *v34; // r13
  KIRQL v35; // al
  unsigned __int8 v36; // dl
  KIRQL v37; // r12
  KIRQL CurrentIrql; // al
  FxDevice_vtbl *v39; // rax
  unsigned __int8 v40; // dl
  unsigned int v41; // r8d
  unsigned __int16 v42; // r9
  const void *v43; // r8
  _FX_DRIVER_GLOBALS *v44; // r11
  unsigned __int8 FxVerboseOn; // al
  const void *v46; // r10
  const void *v47; // rdx
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rax
  SS_COMPONENT__ *ComponentPowerRef; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-98h]
  struct _KTHREAD *_a2; // [rsp+30h] [rbp-88h]
  struct _KTHREAD *_a2a; // [rsp+30h] [rbp-88h]
  struct _KTHREAD *_a2b; // [rsp+30h] [rbp-88h]
  unsigned int v54; // [rsp+50h] [rbp-68h]
  FxDevice *pDevice; // [rsp+58h] [rbp-60h] BYREF
  FxPkgPnp *v56; // [rsp+60h] [rbp-58h]
  FxDevice **p_pDevice; // [rsp+68h] [rbp-50h] BYREF
  __int16 v58; // [rsp+70h] [rbp-48h]
  __int16 v59; // [rsp+72h] [rbp-46h]
  int v60; // [rsp+74h] [rbp-44h]
  KIRQL v61; // [rsp+C8h] [rbp+10h]
  FxPkgPnp *v62; // [rsp+C8h] [rbp+10h]

  v6 = WaitForD0;
  v7 = Tag;
  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  v9 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v10) = 0;
  if ( (Device & 1) != 0 )
  {
    v10 = LOWORD(v9->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v9 = (FxDevice *)((char *)v9 - v10);
  }
  if ( v9->m_Type == 4098 )
  {
    pDevice = v9;
  }
  else
  {
    pDevice = 0LL;
    p_pDevice = &pDevice;
    v59 = v10;
    v60 = 0;
    v39 = v9->FxDeviceBase::FxNonPagedObject::FxObject::__vftable;
    v58 = 4098;
    if ( v39->QueryInterface(v9, (FxQueryInterfaceParams *)&p_pDevice) < 0 )
    {
      WPP_IFR_SF_qDqD(v9->m_Globals, v40, v41, v42, traceGuid, (const void *)Device, 0x1002u, v9, v9->m_Type);
      FxVerifierBugCheckWorker(v9->m_Globals, WDF_INVALID_HANDLE, Device, 0x1002uLL);
    }
    v9 = pDevice;
  }
  m_Globals = v9->m_Globals;
  if ( (_BYTE)v6 && m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      return 3221225488LL;
    }
    v9 = pDevice;
  }
  m_Owner = v9->m_PkgPnp->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    _InterlockedCompareExchange((volatile signed __int32 *)&m_Owner->m_DevicePowerIrpTracker.m_D0IrpReasonHint, 12, 5);
    v13 = 0;
    v14 = pDevice->m_PkgPnp->m_PowerPolicyMachine.m_Owner;
    v15 = KeAcquireSpinLockRaiseToDpc(&v14->m_PowerIdleMachine.m_Lock.m_Lock);
    m_Flags = v14->m_PowerIdleMachine.m_Flags;
    v61 = v15;
    if ( (m_Flags & 0x10) != 0 || (m_Flags & 0x20) == 0 )
    {
      KeReleaseSpinLock(&v14->m_PowerIdleMachine.m_Lock.m_Lock, v15);
      _a3 = -1073741101;
    }
    else
    {
      m_EventHistoryIndex = v14->m_PowerIdleMachine.m_EventHistoryIndex;
      v13 = ++v14->m_PowerIdleMachine.m_IoCount;
      m_PkgPnp = v14->m_PkgPnp;
      v14->m_PowerIdleMachine.m_EventHistory[m_EventHistoryIndex] = PowerIdleEventIoIncrement;
      LOBYTE(m_EventHistoryIndex) = v14->m_PowerIdleMachine.m_EventHistoryIndex + 1;
      v54 = v13;
      v56 = m_PkgPnp;
      v14->m_PowerIdleMachine.m_EventHistoryIndex = m_EventHistoryIndex & 7;
      for ( i = 0LL;
            (unsigned int)i < FxPowerIdleMachine::m_StateTable[v14->m_PowerIdleMachine.m_CurrentIdleState - 1].TargetStatesCount;
            i = (unsigned int)(i + 1) )
      {
        v20 = &FxPowerIdleMachine::m_StateTable[v14->m_PowerIdleMachine.m_CurrentIdleState - 1].TargetStates[i];
        if ( v20->PowerIdleEvent == PowerIdleEventIoIncrement )
        {
          PowerIdleState = v20->PowerIdleState;
          if ( PowerIdleState != 35 )
          {
            do
            {
              m_DeviceBase = m_PkgPnp->m_DeviceBase;
              v29 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !m_DeviceBase->m_ObjectSize )
                v29 = 0LL;
              WPP_IFR_SF_qqLL(
                m_PkgPnp->m_Globals,
                4u,
                0x15u,
                0x11u,
                WPP_PowerIdleStateMachine_cpp_Traceguids,
                v29,
                m_DeviceBase->m_DeviceObject.m_DeviceObject,
                PowerIdleState,
                v14->m_PowerIdleMachine.m_CurrentIdleState);
              v14->m_PowerIdleMachine.m_StateHistory[v14->m_PowerIdleMachine.m_StateHistoryIndex] = PowerIdleState;
              v30 = v14->m_PowerIdleMachine.m_StateHistoryIndex + 1;
              v14->m_PowerIdleMachine.m_CurrentIdleState = PowerIdleState;
              v14->m_PowerIdleMachine.m_StateHistoryIndex = v30 & 7;
              StateFunc = FxPowerIdleMachine::m_StateTable[(int)PowerIdleState - 1].StateFunc;
              if ( !StateFunc )
                break;
              v32 = StateFunc(&v14->m_PowerIdleMachine);
              m_PkgPnp = v56;
              PowerIdleState = v32;
            }
            while ( v32 != FxIdleMax );
          }
          break;
        }
      }
      StateEvent = KeReadStateEvent(&v14->m_PowerIdleMachine.m_D0NotificationEvent.m_Event.m_Event);
      p_m_Lock = &v14->m_PowerIdleMachine.m_Lock.m_Lock;
      if ( StateEvent )
      {
        KeReleaseSpinLock(p_m_Lock, v61);
        v7 = Tag;
        _a3 = 0;
      }
      else
      {
        KeReleaseSpinLock(p_m_Lock, v61);
        _a3 = 259;
        if ( (_BYTE)v6 )
        {
          v62 = v14->m_PkgPnp;
          v33 = v62->m_Globals;
          v34 = &v62->96;
          if ( v33->FxVerboseOn )
          {
            _a3 = 0;
            _a2 = KeGetCurrentThread();
            v43 = (const void *)((unsigned __int64)v34->m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v34->m_DeviceBase->m_ObjectSize )
              v43 = 0LL;
            WPP_IFR_SF_qq(v33, 5u, 0xCu, 0xCu, WPP_PowerIdleStateMachine_cpp_Traceguids, v43, _a2);
          }
          else
          {
            _a3 = 0;
          }
          FxCREvent::EnterCRAndWaitAndLeave(&v14->m_PowerIdleMachine.m_D0NotificationEvent);
          v35 = KeAcquireSpinLockRaiseToDpc(&v14->m_PowerIdleMachine.m_Lock.m_Lock);
          v36 = v14->m_PowerIdleMachine.m_Flags;
          v37 = v35;
          if ( (v36 & 0x30) != 0x20 )
          {
            _a3 = -1073741101;
            v44 = v62->m_Globals;
            FxVerboseOn = v44->FxVerboseOn;
            if ( (v36 & 0x10) != 0 )
            {
              if ( FxVerboseOn )
              {
                _a2a = KeGetCurrentThread();
                v46 = (const void *)((unsigned __int64)v34->m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !v34->m_DeviceBase->m_ObjectSize )
                  v46 = 0LL;
                WPP_IFR_SF_qqd(v44, 5u, 0xCu, 0xDu, WPP_PowerIdleStateMachine_cpp_Traceguids, v46, _a2a, 0xC00002D3);
              }
            }
            else if ( FxVerboseOn )
            {
              _a2b = KeGetCurrentThread();
              v47 = (const void *)((unsigned __int64)v34->m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v34->m_DeviceBase->m_ObjectSize )
                v47 = 0LL;
              WPP_IFR_SF_qqd(v44, 5u, 0xCu, 0xEu, WPP_PowerIdleStateMachine_cpp_Traceguids, v47, _a2b, 0xC00002D3);
            }
            --v14->m_PowerIdleMachine.m_IoCount;
            FxPowerIdleMachine::ProcessEventLocked(&v14->m_PowerIdleMachine, PowerIdleEventIoDecrement);
          }
          KeReleaseSpinLock(&v14->m_PowerIdleMachine.m_Lock.m_Lock, v37);
          v13 = v54;
        }
        v7 = Tag;
      }
    }
    m_TagTracker = v14->m_PowerIdleMachine.m_TagTracker;
    if ( m_TagTracker && (!_a3 || _a3 == 259) )
      FxTagTracker::UpdateTagHistory(m_TagTracker, v7, Line, File, TagAddRef, v13);
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qdd(m_Globals, 5u, 0x12u, 0x26u, WPP_FxDeviceApi_cpp_Traceguids, (const void *)Device, v6, _a3);
    if ( _a3 >= 0 )
    {
      v25 = pDevice->m_PkgPnp;
      if ( v25->m_SleepStudyTrackReferences == 1 && _InterlockedIncrement(&v25->m_SleepStudyPowerRefIoCount) == 1 )
      {
        m_SleepStudy = v25->m_SleepStudy;
        if ( m_SleepStudy )
        {
          ComponentPowerRef = m_SleepStudy->ComponentPowerRef;
          if ( ComponentPowerRef )
            SleepstudyHelper_ComponentActive(ComponentPowerRef);
        }
      }
    }
    return (unsigned int)_a3;
  }
  else
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x25u, WPP_FxDeviceApi_cpp_Traceguids, (const void *)Device, -1073741436);
    return 3221225860LL;
  }
}
