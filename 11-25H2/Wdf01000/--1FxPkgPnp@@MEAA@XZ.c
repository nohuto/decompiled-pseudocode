/*
 * XREFs of ??1FxPkgPnp@@MEAA@XZ @ 0x14004BB3C
 * Callers:
 *     ??1FxPkgFdo@@MEAA@XZ @ 0x14004B820 (--1FxPkgFdo@@MEAA@XZ.c)
 *     ??1FxPkgPdo@@UEAA@XZ @ 0x14004B938 (--1FxPkgPdo@@UEAA@XZ.c)
 *     ??_EFxPkgPnp@@MEAAPEAXI@Z @ 0x1400A5A70 (--_EFxPkgPnp@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x140008FB4 (--3FxStump@@SAXPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x14004A608 (--_GFxDeviceInterface@@QEAAPEAXI@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14004C320 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ??1FxPowerPolicyMachine@@QEAA@XZ @ 0x14004C63C (--1FxPowerPolicyMachine@@QEAA@XZ.c)
 *     ??1FxThreadedEventQueue@@QEAA@XZ @ 0x14004C68C (--1FxThreadedEventQueue@@QEAA@XZ.c)
 *     ?SleepStudyStop@FxPkgPnp@@QEAAXXZ @ 0x14004C6B0 (-SleepStudyStop@FxPkgPnp@@QEAAXXZ.c)
 *     ??1FxTransactionedList@@QEAA@XZ @ 0x14004D84C (--1FxTransactionedList@@QEAA@XZ.c)
 *     ??_GFxEnumerationInfo@@QEAAPEAXI@Z @ 0x14007DB80 (--_GFxEnumerationInfo@@QEAAPEAXI@Z.c)
 *     ??_GFxRelatedDeviceList@@QEAAPEAXI@Z @ 0x1400A2820 (--_GFxRelatedDeviceList@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxPkgPnp::~FxPkgPnp(FxPkgPnp *this)
{
  unsigned int v2; // edx
  FxCompanionTarget *m_CompanionTarget; // rcx
  _SINGLE_LIST_ENTRY *Next; // rdi
  FxSpinLockTransactionedList *m_DmaEnablerList; // rdi
  FxRelatedDeviceList *m_RemovalDeviceList; // rcx
  FxRelatedDeviceList *m_UsageDependentDeviceList; // rcx
  FxPnpStateCallback *m_PnpStateCallbacks; // rcx
  FxPowerStateCallback *m_PowerStateCallbacks; // rcx
  FxPowerPolicyStateCallback *m_PowerPolicyStateCallbacks; // rcx
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxStateMachineBreak *m_StateMachineBreak; // rcx
  FxCmResList *m_Resources; // rcx
  FxCmResList *m_ResourcesRaw; // rcx
  FxDeviceInterface *v16; // rcx
  _SINGLE_LIST_ENTRY *v17; // rax

  this->__vftable = (FxPkgPnp_vtbl *)FxPkgPnp::`vftable';
  KeGetCurrentIrql();
  FxPkgPnp::SleepStudyStop(this);
  m_CompanionTarget = this->m_CompanionTarget;
  if ( m_CompanionTarget )
    m_CompanionTarget->Release(
      m_CompanionTarget,
      this,
      319,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
  Next = this->m_DeviceInterfaceHead.Next;
  while ( Next )
  {
    v16 = (FxDeviceInterface *)&Next[-6];
    v17 = Next;
    Next = Next->Next;
    v17->Next = 0LL;
    if ( v16 )
      FxDeviceInterface::`scalar deleting destructor'(v16);
  }
  m_DmaEnablerList = this->m_DmaEnablerList;
  this->m_DeviceInterfaceHead.Next = 0LL;
  if ( m_DmaEnablerList )
  {
    m_DmaEnablerList->m_ListLock.m_DbgFlagIsInitialized = 0;
    FxTransactionedList::~FxTransactionedList(m_DmaEnablerList);
    FxStump::operator delete(m_DmaEnablerList);
    this->m_DmaEnablerList = 0LL;
  }
  m_RemovalDeviceList = this->m_RemovalDeviceList;
  if ( m_RemovalDeviceList )
  {
    FxRelatedDeviceList::`scalar deleting destructor'(m_RemovalDeviceList, v2);
    this->m_RemovalDeviceList = 0LL;
  }
  m_UsageDependentDeviceList = this->m_UsageDependentDeviceList;
  if ( m_UsageDependentDeviceList )
  {
    FxRelatedDeviceList::`scalar deleting destructor'(m_UsageDependentDeviceList, v2);
    this->m_UsageDependentDeviceList = 0LL;
  }
  m_PnpStateCallbacks = this->m_PnpStateCallbacks;
  if ( m_PnpStateCallbacks )
    FxPoolFree(m_PnpStateCallbacks);
  m_PowerStateCallbacks = this->m_PowerStateCallbacks;
  if ( m_PowerStateCallbacks )
    FxPoolFree(m_PowerStateCallbacks);
  m_PowerPolicyStateCallbacks = this->m_PowerPolicyStateCallbacks;
  if ( m_PowerPolicyStateCallbacks )
    FxPoolFree(m_PowerPolicyStateCallbacks);
  m_SelfManagedIoMachine = this->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
  {
    FxStump::operator delete(m_SelfManagedIoMachine);
    this->m_SelfManagedIoMachine = 0LL;
  }
  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    FxEnumerationInfo::`scalar deleting destructor'(m_EnumInfo, v2);
    this->m_EnumInfo = 0LL;
  }
  m_StateMachineBreak = this->m_StateMachineBreak;
  if ( m_StateMachineBreak )
  {
    FxStump::operator delete(m_StateMachineBreak);
    this->m_StateMachineBreak = 0LL;
  }
  m_Resources = this->m_Resources;
  if ( m_Resources )
  {
    m_Resources->Release(m_Resources, this, 394, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
    this->m_Resources = 0LL;
  }
  m_ResourcesRaw = this->m_ResourcesRaw;
  if ( m_ResourcesRaw )
  {
    m_ResourcesRaw->Release(
      m_ResourcesRaw,
      this,
      399,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
    this->m_ResourcesRaw = 0LL;
  }
  FxPowerPolicyMachine::~FxPowerPolicyMachine(&this->m_PowerPolicyMachine);
  this->m_PowerMachine.m_WaitWakeLock.m_DbgFlagIsInitialized = 0;
  FxThreadedEventQueue::~FxThreadedEventQueue((FxWorkItemEventQueue *)&this->m_PowerMachine);
  FxThreadedEventQueue::~FxThreadedEventQueue(&this->m_PnpMachine);
  FxNonPagedObject::~FxNonPagedObject(this);
}
