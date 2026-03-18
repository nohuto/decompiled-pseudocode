/*
 * XREFs of ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x14003A14C
 * Callers:
 *     ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x14003A52C (-_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x140039F84 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?InitializeEx@MxTimer@@QEAAJPEAXP6AXPEAU_EX_TIMER@@0@ZJKE@Z @ 0x14003A3F8 (-InitializeEx@MxTimer@@QEAAJPEAXP6AXPEAU_EX_TIMER@@0@ZJKE@Z.c)
 *     ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x14003A464 (-_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x140043DA8 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z @ 0x14005DCAC (-Initialize@MxTimer@@QEAAJPEAXP6AXPEAU_KDPC@@000@ZJ@Z.c)
 */

__int64 __fastcall FxTimer::Initialize(
        FxTimer *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_TIMER_CONFIG *Config,
        FxObject *ParentObject,
        WDFTIMER__ **Timer)
{
  unsigned int Period; // r9d
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  signed int v12; // eax
  unsigned int v13; // ebp
  unsigned int v14; // edx
  FxObject *m_CallbackLockObject; // rcx
  FxDeviceBase *v16; // rax
  _WDF_EXECUTION_LEVEL ExecutionLevel; // ebp
  int EffectiveLock; // esi
  signed int v19; // eax
  unsigned int v20; // edx
  FxTagTracker *m_Lock; // rcx
  void **v22; // r8
  IFxHasCallbacks *pCallbacks; // [rsp+60h] [rbp+8h] BYREF

  pCallbacks = 0LL;
  Period = Config->Period;
  m_Globals = this->m_Globals;
  this->m_Period = Period;
  if ( Config->Size > 0x18 )
    this->m_TolerableDelay = Config->TolerableDelay;
  if ( Config->Size > 0x20 )
    this->m_UseHighResolutionTimer = Config->UseHighResolutionTimer;
  this->m_Callback = Config->EvtTimerFunc;
  WdfBindInfo = m_Globals->WdfBindInfo;
  if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 0xD )
    v12 = MxTimer::InitializeEx(
            &this->m_Timer,
            this,
            (void (__fastcall *)(struct _EX_TIMER *, void *))Config,
            Period,
            this->m_TolerableDelay,
            this->m_UseHighResolutionTimer);
  else
    v12 = MxTimer::Initialize(&this->m_Timer, this, FxTimer::_FxTimerDpcThunk, Period);
  v13 = v12;
  if ( v12 < 0 )
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xBu, WPP_FxTimer_cpp_Traceguids, v12);
    return v13;
  }
  v14 = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_CallbackLockObject = this[-1].m_CallbackLockObject;
    if ( m_CallbackLockObject )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)m_CallbackLockObject,
        this,
        191,
        "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp",
        TagAddRef,
        v14);
  }
  v16 = FxDeviceBase::_SearchForDevice((unsigned __int64)ParentObject, &pCallbacks);
  this->m_DeviceBase = v16;
  if ( !v16 )
    return 3221225488LL;
  ExecutionLevel = Attributes->ExecutionLevel;
  EffectiveLock = FxObject::_GetEffectiveLock(
                    ParentObject,
                    pCallbacks,
                    Config->AutomaticSerialization,
                    ExecutionLevel == WdfExecutionLevelPassive,
                    &this->m_CallbackLock,
                    &this->m_CallbackLockObject);
  if ( EffectiveLock < 0 )
  {
    if ( EffectiveLock == -1071644148 )
      WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0xCu, WPP_FxTimer_cpp_Traceguids, Attributes->ParentObject, -1071644148);
    return (unsigned int)EffectiveLock;
  }
  if ( ExecutionLevel == WdfExecutionLevelPassive )
  {
    v19 = FxSystemWorkItem::_Create(
            m_Globals,
            this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
            &this->m_SystemWorkItem);
    EffectiveLock = v19;
    if ( v19 < 0 )
    {
      WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xDu, WPP_FxTimer_cpp_Traceguids, v19);
      return (unsigned int)EffectiveLock;
    }
  }
  v20 = _InterlockedIncrement(&ParentObject->m_Refcnt);
  if ( SLOBYTE(ParentObject->m_ObjectFlags) < 0 )
  {
    m_Lock = (FxTagTracker *)ParentObject[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
      FxTagTracker::UpdateTagHistory(
        m_Lock,
        this,
        299,
        "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp",
        TagAddRef,
        v20);
  }
  v22 = (void **)Timer;
  this->m_Object = ParentObject;
  return FxObject::Commit(this, Attributes, v22, ParentObject, 1u);
}
