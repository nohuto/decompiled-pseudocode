/*
 * XREFs of ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1400440D4
 * Callers:
 *     ??0FxPkgPdo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1400482CC (--0FxPkgPdo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 *     ??0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x14007AEF8 (--0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x14002CCC0 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140039854 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxPowerPolicyMachine@@QEAA@XZ @ 0x140043F98 (--0FxPowerPolicyMachine@@QEAA@XZ.c)
 *     ??0FxPnpMachine@@QEAA@XZ @ 0x140043FFC (--0FxPnpMachine@@QEAA@XZ.c)
 *     ??0FxPowerMachine@@QEAA@XZ @ 0x14004405C (--0FxPowerMachine@@QEAA@XZ.c)
 *     ??0FxWaitLockInternal@@QEAA@XZ @ 0x140045FD4 (--0FxWaitLockInternal@@QEAA@XZ.c)
 *     memset @ 0x1400AC800 (memset.c)
 */

void __fastcall FxPkgPnp::FxPkgPnp(
        FxPkgPnp *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *Device,
        unsigned __int16 Type)
{
  unsigned __int8 v7; // dl
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // dl
  unsigned int v10; // r8d
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // edx
  unsigned int v14; // edx
  FxVerifierDownlevelOption v15; // r9d
  ULONG Tag; // ecx
  void *v17; // rax
  FX_POOL **v18; // rax
  __m128i v19; // [rsp+30h] [rbp-28h]
  __m128i v20; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  FxNonPagedObject::FxNonPagedObject(this, (_FX_DRIVER_GLOBALS *)Type, 0, FxDriverGlobals);
  this->m_DeviceBase = Device;
  this->__vftable = (FxPkgPnp_vtbl *)FxPkgPnp::`vftable';
  FxWaitLockInternal::FxWaitLockInternal(&this->m_QueryInterfaceLock);
  FxWaitLockInternal::FxWaitLockInternal(&this->m_DeviceInterfaceLock);
  FxPnpMachine::FxPnpMachine(&this->m_PnpMachine, v7);
  FxPowerMachine::FxPowerMachine(&this->m_PowerMachine, v8);
  FxPowerPolicyMachine::FxPowerPolicyMachine(&this->m_PowerPolicyMachine, v9);
  this->m_DeviceUsageNotification.m_Method = 0LL;
  this->m_DeviceUsageNotificationEx.m_Method = 0LL;
  v10 = 0;
  this->m_DeviceRelationsQuery.m_Method = 0LL;
  this->m_DeviceD0Entry.__vftable = (FxPnpDeviceD0Entry_vtbl *)FxPnpDeviceD0Entry::`vftable';
  this->m_DeviceD0Entry.m_Method = 0LL;
  this->m_DeviceD0EntryPostInterruptsEnabled.m_Method = 0LL;
  this->m_DeviceD0ExitPreInterruptsDisabled.m_Method = 0LL;
  this->m_DeviceD0Exit.__vftable = (FxPnpDeviceD0Exit_vtbl *)FxPnpDeviceD0Exit::`vftable';
  this->m_DeviceD0Exit.m_Method = 0LL;
  this->m_DeviceD0EntryPostHardwareEnabled.__vftable = (FxPnpDeviceD0EntryPostHwEnabled_vtbl *)FxPnpDeviceD0EntryPostHwEnabled::`vftable';
  this->m_DeviceD0ExitPreHardwareDisabled.__vftable = (FxPnpDeviceD0ExitPreHwDisabled_vtbl *)FxPnpDeviceD0ExitPreHwDisabled::`vftable';
  this->m_DevicePrepareHardware.__vftable = (FxPnpDevicePrepareHardware_vtbl *)FxPnpDevicePrepareHardware::`vftable';
  this->m_DevicePrepareHardware.m_Method = 0LL;
  this->m_DeviceReleaseHardware.__vftable = (FxPnpDeviceReleaseHardware_vtbl *)FxPnpDeviceReleaseHardware::`vftable';
  this->m_DeviceReleaseHardware.m_Method = 0LL;
  this->m_DeviceQueryStop.m_Method = 0LL;
  this->m_DeviceQueryRemove.m_Method = 0LL;
  this->m_DeviceSurpriseRemoval.__vftable = (FxPnpDeviceSurpriseRemoval_vtbl *)FxPnpDeviceSurpriseRemoval::`vftable';
  this->m_DeviceSurpriseRemoval.m_Method = 0LL;
  this->m_PnpCapsAddress = -1;
  this->m_PnpCapsUINumber = -1;
  this->m_PowerCaps.D1Latency = -1;
  this->m_PowerCaps.D2Latency = -1;
  this->m_PowerCaps.D3Latency = -1;
  v11 = 0;
  this->m_DmaEnablerList = 0LL;
  this->m_RemovalDeviceList = 0LL;
  this->m_UsageDependentDeviceList = 0LL;
  this->m_PnpState.Value = 10922;
  this->m_PnpCaps.Value = 174762;
  *(_DWORD *)&this->m_PowerCaps.Caps = 117770922;
  do
  {
    v12 = 5 << v11;
    v13 = ~(15 << v11);
    v11 += 4;
    v10 = v12 | v13 & v10;
    this->m_PowerCaps.States = v10;
  }
  while ( v11 < 0x1C );
  memset(&this->m_D3ColdInterface, 0, sizeof(this->m_D3ColdInterface));
  *(_DWORD *)this->m_SpecialSupport = 0;
  *(_WORD *)&this->m_SpecialSupport[4] = 0;
  this->m_SpecialSupport[6] = 0;
  *(_OWORD *)this->m_SpecialFileCount = 0LL;
  *(_QWORD *)&this->m_SpecialFileCount[4] = 0LL;
  *(_QWORD *)&this->m_SpecialFileCount[6] = 0LL;
  *(_DWORD *)&this->m_PowerThreadInterface.Interface.Size = 65576;
  this->m_PowerThreadInterface.Interface.InterfaceReference = FxPkgPnp::_PowerThreadInterfaceReference;
  this->m_PowerThreadInterface.Interface.InterfaceDereference = FxPkgPnp::_PowerThreadInterfaceDereference;
  this->m_PowerThreadInterface.PowerThreadEnqueue = FxPkgPnp::_PowerThreadEnqueue;
  this->m_PowerThreadInterface.Interface.Context = this;
  this->m_PowerThread = 0LL;
  *(_DWORD *)&this->m_SystemPowerAction = 0;
  this->m_PowerThreadInterfaceReferenceCount = 1;
  this->m_PowerThreadEvent = 0LL;
  *(_WORD *)&this->m_FailedAction = 0;
  this->m_PendingChildCount = 0;
  this->m_QueryInterfaceHead.Next = 0LL;
  this->m_DeviceInterfaceHead.Next = 0LL;
  this->m_DeviceInterfacesCanBeEnabled = 0;
  *(_DWORD *)&this->m_Failed = 84214016;
  this->m_PendingPnPIrp = 0LL;
  this->m_PendingSystemPowerIrp = 0LL;
  this->m_PendingDevicePowerIrp = 0LL;
  this->m_PnpStateCallbacks = 0LL;
  this->m_PowerStateCallbacks = 0LL;
  this->m_PowerPolicyStateCallbacks = 0LL;
  this->m_SelfManagedIoMachine = 0LL;
  this->m_StateMachineBreak = 0LL;
  if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(FxDriverGlobals, v14, 0xBu, v15) )
  {
    Tag = FxDriverGlobals->Tag;
    v17 = retaddr;
    v19.m128i_i64[0] = 0LL;
    v19.m128i_i64[1] = 64LL;
    if ( !FxDriverGlobals->FxPoolTrackingOn )
      v17 = 0LL;
    v20 = v19;
    v18 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v20, 0x1CuLL, Tag, v17);
    if ( v18 )
    {
      *(_OWORD *)v18 = 0LL;
      v18[2] = 0LL;
      *((_DWORD *)v18 + 6) = 0;
    }
    else
    {
      v18 = 0LL;
    }
    this->m_StateMachineBreak = (FxStateMachineBreak *)v18;
  }
  this->m_EnumInfo = 0LL;
  this->m_BusEnumRetries = 0;
  this->m_BusInformation.BusTypeGuid = 0LL;
  *(_QWORD *)&this->m_BusInformation.LegacyBusType = 0LL;
  this->m_Resources = 0LL;
  this->m_ResourcesRaw = 0LL;
  this->m_InterruptListHead.Blink = &this->m_InterruptListHead;
  this->m_InterruptListHead.Flink = &this->m_InterruptListHead;
  this->m_InterruptObjectCount = 0;
  *(_QWORD *)&this->m_WakeInterruptCount = 0LL;
  *(_DWORD *)&this->m_SystemWokenByWakeInterrupt = 0;
  this->m_SharedPower.m_WaitWakeIrp = 0LL;
  *(_WORD *)&this->m_SharedPower.m_WaitWakeOwner = 0;
  this->m_DeviceRemoveProcessed = 0LL;
  this->m_IoConnectInterruptEx = (int (__fastcall *)(_IO_CONNECT_INTERRUPT_PARAMETERS *))unk_1400C7EC0;
  this->m_IoDisconnectInterruptEx = (int (__fastcall *)(_IO_DISCONNECT_INTERRUPT_PARAMETERS *))unk_1400C7EC8;
  this->m_IoReportInterruptActive = (void (__fastcall *)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *))unk_1400C7ED0;
  this->m_IoReportInterruptInactive = (void (__fastcall *)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *))unk_1400C7ED8;
  this->m_ObjectFlags |= 0x800u;
  this->m_ReleaseHardwareAfterDescendantsOnFailure = 0;
  this->m_SleepStudy = 0LL;
  this->m_SleepStudyPowerRefIoCount = 0;
  this->m_SleepStudyTrackReferences = 1;
  this->m_CompanionTarget = 0LL;
  this->m_SetDeviceFailedAttemptRestartWorkItem = 0LL;
  this->m_CompanionTargetStatus = -1073741275;
}
