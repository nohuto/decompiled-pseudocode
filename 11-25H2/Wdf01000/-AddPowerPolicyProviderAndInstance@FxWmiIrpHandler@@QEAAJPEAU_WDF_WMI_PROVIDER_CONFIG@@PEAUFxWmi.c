/*
 * XREFs of ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x14003FAC8
 * Callers:
 *     ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x14003FA14 (-RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PE.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     FxIsEqualGuid @ 0x140019D5C (FxIsEqualGuid.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x14002C940 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x140037570 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     ?AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z @ 0x14003C348 (-AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z.c)
 *     ??0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z @ 0x14003E624 (--0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z.c)
 *     ?FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z @ 0x14003F920 (-FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x14006E7C4 (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 *     ?RemoveProviderLocked@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x140079CA8 (-RemoveProviderLocked@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z.c)
 *     ?AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z @ 0x1400838A4 (-AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z.c)
 *     ??0FxWmiInstanceInternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxWmiInstanceInternalCallbacks@@PEAVFxWmiProvider@@@Z @ 0x14008D924 (--0FxWmiInstanceInternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxWmiInstanceInternalCallbacks@@PEAVF.c)
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x14008DE48 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxWmiIrpHandler::AddPowerPolicyProviderAndInstance(
        FxWmiIrpHandler *this,
        _WDF_WMI_PROVIDER_CONFIG *ProviderConfig,
        FxWmiInstanceInternalCallbacks *InstanceCallbacks,
        FxWmiInstanceInternal **Instance)
{
  char m_ObjectFlags; // al
  FxWmiInstanceInternalCallbacks *v5; // r12
  char v8; // r15
  unsigned __int8 updated; // r14
  unsigned __int64 v10; // rsi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY **ProviderLocked; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  FxWmiProvider *v15; // rbx
  FX_POOL **v16; // rax
  unsigned __int8 v17; // r8
  FxWmiProvider *v18; // rax
  int v19; // edi
  FX_POOL **v20; // rax
  FxObject *v21; // rax
  const _GUID *v22; // rdi
  char v23; // al
  unsigned __int8 irql; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int8 update; // [rsp+A8h] [rbp+10h] BYREF
  FxWmiInstanceInternalCallbacks *Callbacks; // [rsp+B0h] [rbp+18h]
  volatile signed __int64 *v28; // [rsp+B8h] [rbp+20h]

  v28 = (volatile signed __int64 *)Instance;
  Callbacks = InstanceCallbacks;
  m_ObjectFlags = this->m_ObjectFlags;
  irql = 0;
  v5 = InstanceCallbacks;
  update = 0;
  v8 = 0;
  updated = 0;
  v10 = 0LL;
  if ( m_ObjectFlags < 0 && (Flink = this[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, (unsigned __int8)InstanceCallbacks);
  else
    irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  ProviderLocked = FxWmiIrpHandler::FindProviderLocked(this, &ProviderConfig->Guid);
  v15 = (FxWmiProvider *)ProviderLocked;
  if ( ProviderLocked )
  {
    if ( *((_DWORD *)ProviderLocked + 38) )
    {
      v22 = (const _GUID *)(ProviderLocked + 21);
      if ( FxIsEqualGuid((const _GUID *)(ProviderLocked + 21), &GUID_POWER_DEVICE_ENABLE)
        || FxIsEqualGuid(v22, &GUID_POWER_DEVICE_WAKE_ENABLE) )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xDu, 0xDu, WPP_FxWmiIrpHandler_cpp_Traceguids);
        v19 = -1073741055;
        goto LABEL_29;
      }
    }
    goto LABEL_11;
  }
  v16 = FxObjectHandleAlloc2(this->m_Globals, v13, 0xD8uLL, v14, 0LL, 0, FxObjectTypeExternal);
  if ( !v16 )
  {
    v15 = 0LL;
    goto LABEL_17;
  }
  FxWmiProvider::FxWmiProvider((FxWmiProvider *)v16, this->m_Globals, ProviderConfig, this->m_Device);
  v15 = v18;
  if ( !v18 )
  {
LABEL_17:
    v19 = -1073741670;
    goto LABEL_29;
  }
  v8 = 1;
  v19 = FxWmiIrpHandler::AddProviderLocked(this, v18, irql, 0LL);
  if ( v19 < 0 )
    goto LABEL_29;
  v19 = FxObject::AssignParentObject(v15, this->m_DeviceBase);
  if ( v19 < 0 )
  {
LABEL_28:
    FxWmiIrpHandler::RemoveProviderLocked(this, v15);
    goto LABEL_29;
  }
  v5 = Callbacks;
LABEL_11:
  v20 = FxObjectHandleAlloc2(this->m_Globals, v13, 0xB0uLL, v14, 0LL, 0, FxObjectTypeExternal);
  if ( !v20
    || (FxWmiInstanceInternal::FxWmiInstanceInternal((FxWmiInstanceInternal *)v20, this->m_Globals, v5, v15),
        (v10 = (unsigned __int64)v21) == 0) )
  {
    v19 = -1073741670;
    goto LABEL_27;
  }
  v19 = FxObject::AssignParentObject(v21, v15);
  if ( v19 < 0 )
    goto LABEL_27;
  if ( _InterlockedCompareExchange64(v28, v10, 0LL) )
  {
    updated = update;
    v19 = -1073741771;
    goto LABEL_27;
  }
  v19 = FxWmiProvider::AddInstanceLocked(v15, v10, 0, &update, AddInstanceToHead);
  updated = update;
  v23 = v8;
  if ( v19 < 0 )
  {
LABEL_27:
    if ( !v8 )
      goto LABEL_29;
    goto LABEL_28;
  }
  if ( update )
  {
    updated = FxWmiIrpHandler::DeferUpdateLocked(this, irql);
    v23 = v8;
  }
  v8 = v23;
LABEL_29:
  FxNonPagedObject::Unlock(this, irql, v17);
  if ( v19 < 0 )
  {
    if ( v10 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v10 + 48LL))(v10);
    if ( v8 )
      v15->DeleteObject(v15);
  }
  else if ( updated )
  {
    FxWmiIrpHandler::UpdateGuids(this);
  }
  return (unsigned int)v19;
}
