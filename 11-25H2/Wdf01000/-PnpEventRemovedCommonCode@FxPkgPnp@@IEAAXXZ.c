/*
 * XREFs of ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x14004699C
 * Callers:
 *     ?PnpEventFdoRemovedOverload@FxPkgFdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x140046980 (-PnpEventFdoRemovedOverload@FxPkgFdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x140046E30 (-PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x14000DC00 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x14001AB4C (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x14001C068 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x140045980 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x140046A6C (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PnpEventRemovedCommonCode(FxPkgPnp *this, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  unsigned __int8 v5; // r8
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  FxObject *m_ParentObject; // rbx
  unsigned __int8 v9; // al
  unsigned __int8 v10; // r8
  FxDeviceBase *v11; // rcx
  FxVerifierLock *v12; // rcx
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF

  FxPkgIo::StopProcessingForPower((FxPkgIo *)this->m_DeviceBase[3].m_ChildListHead.Blink, 3u, a3, a4);
  m_SelfManagedIoMachine = this->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
    FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventCleanup, 0LL);
  m_DeviceBase = this->m_DeviceBase;
  PreviousIrql = 0;
  m_ParentObject = m_DeviceBase[3].m_ParentObject;
  if ( SLOBYTE(m_ParentObject->m_ObjectFlags) < 0 && (v12 = (FxVerifierLock *)m_ParentObject[-1].m_ParentObject) != 0LL )
  {
    FxVerifierLock::Lock(v12, &PreviousIrql, v5);
    v9 = PreviousIrql;
  }
  else
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&m_ParentObject[1].m_Type);
  }
  HIDWORD(m_ParentObject[1].m_ChildListHead.Flink) = 3;
  FxNonPagedObject::Unlock((FxNonPagedObject *)m_ParentObject, v9, v10);
  v11 = this->m_DeviceBase;
  this->m_PnpState.Value = this->m_PnpState.Value & 0xFFFFFCFF | 0x100;
  FxObject::EarlyDispose(v11);
  FxObject::DestroyChildren(this->m_DeviceBase);
  FxDisposeList::WaitForEmpty(this->m_DeviceBase->m_DisposeList);
}
