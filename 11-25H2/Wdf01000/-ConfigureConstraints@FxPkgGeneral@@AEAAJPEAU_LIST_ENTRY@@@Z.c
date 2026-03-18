/*
 * XREFs of ?ConfigureConstraints@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x14007B71C
 * Callers:
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1400434C0 (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14003CB50 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqLd @ 0x14009CA64 (WPP_IFR_SF_qqLd.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgGeneral::ConfigureConstraints(FxPkgGeneral *this, _LIST_ENTRY *FileObjInfoList)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  IFxHasCallbacks *v5; // rcx
  unsigned int v6; // edx
  bool IsVersionGreaterThanOrEqualTo; // al
  _LIST_ENTRY *i; // rdx
  _WDF_EXECUTION_LEVEL Flink; // eax
  _WDF_SYNCHRONIZATION_SCOPE _a4; // r8d
  unsigned int v11; // edi
  FxDeviceBase *m_DeviceBase; // r9
  _LIST_ENTRY *Blink; // rdx
  const void *_a3; // r10
  unsigned __int64 m_Driver; // rdx
  unsigned __int16 v16; // ax
  const void *_a2; // rdx
  _WDF_SYNCHRONIZATION_SCOPE m_SynchronizationScope; // eax
  FxDeviceBase *v19; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *v21; // rdx
  FxCallbackLock *v22; // rax
  _LIST_ENTRY *v23; // rcx
  _WDF_EXECUTION_LEVEL parentExecLevel; // [rsp+70h] [rbp+8h] BYREF
  _WDF_SYNCHRONIZATION_SCOPE parentSynchScope; // [rsp+78h] [rbp+10h] BYREF

  m_Globals = this->m_Globals;
  v5 = &this->m_DeviceBase->IFxHasCallbacks;
  parentExecLevel = WdfExecutionLevelInvalid;
  parentSynchScope = WdfSynchronizationScopeInvalid;
  v5->GetConstraints(v5, &parentExecLevel, &parentSynchScope);
  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v6, 0xBu);
  this->m_SynchronizationScope = WdfSynchronizationScopeNone;
  this->m_ExecutionLevel = 3 - IsVersionGreaterThanOrEqualTo;
  for ( i = FileObjInfoList->Blink; i != FileObjInfoList; i = i->Blink )
  {
    if ( LODWORD(i[5].Blink) )
    {
      Flink = (_WDF_EXECUTION_LEVEL)i[7].Flink;
      if ( Flink == WdfExecutionLevelInheritFromParent )
        Flink = parentExecLevel;
      if ( Flink == WdfExecutionLevelPassive )
        this->m_ExecutionLevel = WdfExecutionLevelPassive;
      _a4 = HIDWORD(i[7].Flink);
      if ( _a4 == WdfSynchronizationScopeInheritFromParent )
        _a4 = parentSynchScope;
      if ( BYTE4(i[9].Flink) )
      {
        if ( _a4 != WdfSynchronizationScopeNone )
        {
          v11 = -1073741808;
          m_DeviceBase = this->m_DeviceBase;
          Blink = i[9].Blink;
          _a3 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !m_DeviceBase->m_ObjectSize )
            _a3 = 0LL;
          if ( Blink )
            m_Driver = (unsigned __int64)Blink[1].Flink;
          else
            m_Driver = (unsigned __int64)m_DeviceBase->m_Driver;
          v16 = *(_WORD *)(m_Driver + 10);
          _a2 = (const void *)(m_Driver ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v16 )
            _a2 = 0LL;
          WPP_IFR_SF_qqLd(
            m_Globals,
            (unsigned __int8)_a2,
            0x12u,
            0xCu,
            WPP_FxPkgGeneral_cpp_Traceguids,
            _a2,
            _a3,
            _a4,
            -1073741808);
          FxVerifierDbgBreakPoint(m_Globals);
          return v11;
        }
      }
      else
      {
        this->m_SynchronizationScope = _a4;
      }
    }
  }
  m_SynchronizationScope = this->m_SynchronizationScope;
  if ( m_SynchronizationScope == WdfSynchronizationScopeQueue )
  {
    v11 = -1073741808;
    WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xDu, WPP_FxPkgGeneral_cpp_Traceguids, 0xC0000010);
    return v11;
  }
  if ( this->m_ExecutionLevel == WdfExecutionLevelPassive )
    this->m_ObjectFlags |= 0x11u;
  if ( m_SynchronizationScope != WdfSynchronizationScopeDevice )
    return 0;
  v19 = this->m_DeviceBase;
  if ( parentExecLevel == WdfExecutionLevelPassive )
  {
    v22 = v19->GetCallbackLockPtr(&v19->IFxHasCallbacks, &this->m_CallbackLockObjectPtr);
    this->m_CallbackLockPtr = v22;
    v23 = FileObjInfoList->Flink;
    if ( FileObjInfoList->Flink != FileObjInfoList && !BYTE4(v23[9].Flink) )
    {
      v23[1].Flink = (_LIST_ENTRY *)v22;
      v23[3].Flink = (_LIST_ENTRY *)this->m_CallbackLockPtr;
      v23[4].Flink = (_LIST_ENTRY *)this->m_CallbackLockPtr;
    }
    return 0;
  }
  v11 = -1073741808;
  m_ObjectSize = v19->m_ObjectSize;
  v21 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v21 = 0LL;
  WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0xEu, WPP_FxPkgGeneral_cpp_Traceguids, v21, -1073741808);
  return v11;
}
