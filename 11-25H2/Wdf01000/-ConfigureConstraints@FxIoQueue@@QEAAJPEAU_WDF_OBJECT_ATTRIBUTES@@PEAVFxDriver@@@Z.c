/*
 * XREFs of ?ConfigureConstraints@FxIoQueue@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@@Z @ 0x140014D20
 * Callers:
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1400148E4 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDDd @ 0x14009283C (WPP_IFR_SF_qDDd.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxIoQueue::ConfigureConstraints(
        FxIoQueue *this,
        _WDF_OBJECT_ATTRIBUTES *ObjectAttributes,
        FxDriver *Caller)
{
  FxCallbackSpinLock *p_m_CallbackSpinLock; // r12
  FxCallbackMutexLock *p_m_CallbackMutexLock; // r15
  unsigned int *p_m_ExecutionLevel; // r14
  _WDF_SYNCHRONIZATION_SCOPE *p_m_SynchronizationScope; // rsi
  unsigned __int32 v10; // ecx
  char v11; // di
  _WDF_EXECUTION_LEVEL v12; // edx
  FxCallbackMutexLock *v13; // rcx
  FxCallbackLock *v14; // rax
  _FX_DRIVER_GLOBALS **p_m_Globals; // rcx
  unsigned __int16 v17; // ax
  const void *_a1; // rbx
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS *v20; // rcx
  const void *v21; // rbx
  int v22; // [rsp+40h] [rbp-48h]
  _WDF_EXECUTION_LEVEL ParentLevel; // [rsp+90h] [rbp+8h] BYREF
  _WDF_SYNCHRONIZATION_SCOPE ParentScope; // [rsp+98h] [rbp+10h] BYREF

  p_m_CallbackSpinLock = &this->m_CallbackSpinLock;
  ParentLevel = WdfExecutionLevelInvalid;
  ParentScope = WdfSynchronizationScopeInvalid;
  this->m_CallbackSpinLock.Initialize(&this->m_CallbackSpinLock, this);
  p_m_CallbackMutexLock = &this->m_CallbackMutexLock;
  this->m_CallbackMutexLock.Initialize(&this->m_CallbackMutexLock, this);
  p_m_ExecutionLevel = (unsigned int *)&this->m_ExecutionLevel;
  p_m_SynchronizationScope = &this->m_SynchronizationScope;
  if ( ObjectAttributes )
  {
    *p_m_ExecutionLevel = ObjectAttributes->ExecutionLevel;
    *p_m_SynchronizationScope = ObjectAttributes->SynchronizationScope;
  }
  this->m_DeviceBase->GetConstraints(&this->m_DeviceBase->IFxHasCallbacks, &ParentLevel, &ParentScope);
  v10 = *p_m_ExecutionLevel;
  v11 = 1;
  v12 = ParentLevel;
  if ( *p_m_ExecutionLevel == 1 )
  {
    *p_m_ExecutionLevel = ParentLevel;
    v10 = v12;
  }
  if ( *p_m_SynchronizationScope == WdfSynchronizationScopeInheritFromParent )
    *p_m_SynchronizationScope = ParentScope;
  if ( v10 == 2 )
  {
    this->m_ObjectFlags |= 0x11u;
    this->m_PassiveLevel = 1;
  }
  else
  {
    p_m_CallbackMutexLock = (FxCallbackMutexLock *)p_m_CallbackSpinLock;
  }
  this->m_CallbackLockPtr = p_m_CallbackMutexLock;
  this->m_CallbackLockObjectPtr = this;
  if ( *p_m_SynchronizationScope != WdfSynchronizationScopeDevice )
  {
    v13 = p_m_CallbackMutexLock;
    if ( *p_m_SynchronizationScope != WdfSynchronizationScopeQueue )
      v11 = 0;
    goto LABEL_12;
  }
  p_m_Globals = &this->m_Globals;
  if ( !Caller || Caller == (*p_m_Globals)->Driver )
  {
    if ( v12 == *p_m_ExecutionLevel )
    {
      v13 = (FxCallbackMutexLock *)this->m_DeviceBase->GetCallbackLockPtr(
                                     &this->m_DeviceBase->IFxHasCallbacks,
                                     &this->m_CallbackLockObjectPtr);
      this->m_CallbackLockPtr = v13;
LABEL_12:
      v14 = (FxCallbackLock *)((unsigned __int64)v13 & -(__int64)(v11 != 0));
      this->m_IoDefault.m_CallbackLock = v14;
      this->m_IoStop.m_CallbackLock = v14;
      this->m_IoResume.m_CallbackLock = v14;
      this->m_IoRead.m_CallbackLock = v14;
      this->m_IoWrite.m_CallbackLock = v14;
      this->m_IoDeviceControl.m_CallbackLock = v14;
      this->m_IoInternalDeviceControl.m_CallbackLock = v14;
      this->m_PurgeComplete.m_CallbackLock = v14;
      this->m_ReadyNotify.m_CallbackLock = v14;
      this->m_IoCanceledOnQueue.m_CallbackLock = v14;
      this->m_IoCancelCallbackLockPtr = v14;
      return 0LL;
    }
    m_ObjectSize = this->m_ObjectSize;
    v20 = *p_m_Globals;
    v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v21 = 0LL;
    WPP_IFR_SF_qDDd(v20, v12, 0xDu, 0x15u, WPP_FxIoQueue_cpp_Traceguids, v21, v12, *p_m_ExecutionLevel, v22);
  }
  else
  {
    v17 = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v17 )
      _a1 = 0LL;
    WPP_IFR_SF_qd(*p_m_Globals, 2u, 0xDu, 0x14u, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741811);
  }
  return 3221225485LL;
}
