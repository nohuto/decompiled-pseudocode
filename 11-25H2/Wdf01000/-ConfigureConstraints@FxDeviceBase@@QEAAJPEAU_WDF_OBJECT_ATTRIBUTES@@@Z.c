/*
 * XREFs of ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x14004E8D4
 * Callers:
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x14004E398 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     imp_WdfDeviceMiniportCreate @ 0x14007F6B0 (imp_WdfDeviceMiniportCreate.c)
 * Callees:
 *     ??0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140014C88 (--0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDeviceBase::ConfigureConstraints(FxDeviceBase *this, _WDF_OBJECT_ATTRIBUTES *ObjectAttributes)
{
  _WDF_EXECUTION_LEVEL *p_m_ExecutionLevel; // rsi
  _WDF_SYNCHRONIZATION_SCOPE *p_m_SynchronizationScope; // rdi
  _WDF_EXECUTION_LEVEL v5; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v7; // rax
  ULONG Tag; // r8d
  FX_POOL **v9; // rax
  FxCallbackLock *v10; // rcx
  unsigned int v11; // edi
  FX_POOL **v13; // rax
  FxCallbackLock *v14; // rax
  const void *_a1; // rcx
  __m128i v16; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+68h] [rbp+18h]
  _WDF_EXECUTION_LEVEL driverLevel; // [rsp+70h] [rbp+20h] BYREF
  _WDF_SYNCHRONIZATION_SCOPE driverScope; // [rsp+78h] [rbp+28h] BYREF

  p_m_ExecutionLevel = &this->m_ExecutionLevel;
  driverLevel = WdfExecutionLevelInvalid;
  driverScope = WdfSynchronizationScopeInvalid;
  p_m_SynchronizationScope = &this->m_SynchronizationScope;
  if ( ObjectAttributes )
  {
    *p_m_ExecutionLevel = ObjectAttributes->ExecutionLevel;
    *p_m_SynchronizationScope = ObjectAttributes->SynchronizationScope;
  }
  this->m_Driver->GetConstraints(&this->m_Driver->IFxHasCallbacks, &driverLevel, &driverScope);
  v5 = *p_m_ExecutionLevel;
  if ( *p_m_ExecutionLevel == WdfExecutionLevelInheritFromParent )
  {
    v5 = driverLevel;
    *p_m_ExecutionLevel = driverLevel;
  }
  if ( *p_m_SynchronizationScope == WdfSynchronizationScopeInheritFromParent )
    *p_m_SynchronizationScope = driverScope;
  m_Globals = this->m_Globals;
  v7 = retaddr;
  v16.m128i_i64[0] = 0LL;
  v16.m128i_i64[1] = 64LL;
  Tag = m_Globals->Tag;
  if ( v5 != WdfExecutionLevelPassive )
  {
    if ( !m_Globals->FxPoolTrackingOn )
      v7 = 0LL;
    v9 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v16, 0x40uLL, Tag, v7);
    v10 = (FxCallbackLock *)v9;
    if ( v9 )
    {
      v9[1] = (FX_POOL *)this->m_Globals;
      *v9 = (FX_POOL *)FxCallbackSpinLock::`vftable';
      v9[2] = 0LL;
      *((_DWORD *)v9 + 6) = 0;
      v9[4] = 0LL;
      v9[7] = 0LL;
      *((_BYTE *)v9 + 48) = 1;
      goto LABEL_12;
    }
    goto LABEL_18;
  }
  if ( !m_Globals->FxPoolTrackingOn )
    v7 = 0LL;
  v13 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v16, 0x70uLL, Tag, v7);
  if ( !v13 )
  {
LABEL_18:
    v10 = 0LL;
    goto LABEL_12;
  }
  FxCallbackMutexLock::FxCallbackMutexLock((FxCallbackMutexLock *)v13, this->m_Globals);
  v10 = v14;
LABEL_12:
  this->m_CallbackLockPtr = v10;
  if ( v10 )
  {
    v10->Initialize(v10, this);
    this->m_CallbackLockObjectPtr = this;
    return 0;
  }
  else
  {
    v11 = -1073741670;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0x14u, 0xAu, WPP_FxDeviceBase_cpp_Traceguids, _a1, -1073741670);
  }
  return v11;
}
