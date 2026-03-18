/*
 * XREFs of ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x140033988
 * Callers:
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x14003414C (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x14004C23C (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x14006B690 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x14006DC20 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PowerInitialSelfManagedIoFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A5340 (-PowerInitialSelfManagedIoFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A5560 (-PowerStartSelfManagedIoFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A5590 (-PowerStartSelfManagedIoFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     GetIoQueueList_ProcessQueueListEntry @ 0x140032964 (GetIoQueueList_ProcessQueueListEntry.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x140033BE0 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x140033EB0 (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     WPP_IFR_SF_Lq @ 0x140034048 (WPP_IFR_SF_Lq.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgIo::StopProcessingForPower(
        FxPkgIo *this,
        unsigned __int32 Action,
        __int64 a3,
        unsigned __int16 a4)
{
  FxDeviceBase *m_DeviceBase; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v9; // r8
  unsigned __int8 v10; // r8
  char m_ObjectFlags; // al
  _SINGLE_LIST_ENTRY *Next; // rsi
  unsigned __int8 v13; // bp
  void *v14; // r8
  _LIST_ENTRY *p_m_IoQueueListHead; // r14
  _LIST_ENTRY *Blink; // rdi
  _SINGLE_LIST_ENTRY *v17; // rbx
  _SINGLE_LIST_ENTRY *v18; // rdi
  _SINGLE_LIST_ENTRY *v19; // rbp
  unsigned int RefCount; // edx
  FxTagTracker *v21; // rcx
  _LIST_ENTRY *Flink; // rdi
  FxVerifierLock *v23; // rcx
  FxVerifierLock *v24; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-48h]
  _SINGLE_LIST_ENTRY queueList; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+78h] [rbp+10h] BYREF

  irql = 0;
  m_DeviceBase = this->m_DeviceBase;
  m_Globals = this->m_Globals;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v9 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v9 = 0LL;
  WPP_IFR_SF_Lq(m_Globals, Action, (unsigned int)v9, a4, RefType, Action, v9);
  m_ObjectFlags = this->m_ObjectFlags;
  Next = 0LL;
  queueList.Next = 0LL;
  if ( m_ObjectFlags < 0 && (v23 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
  {
    FxVerifierLock::Lock(v23, &irql, v10);
    v13 = irql;
  }
  else
  {
    v13 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v13;
  }
  this->m_PowerStateOn = 0;
  if ( Action == 2 || Action == 3 )
    this->m_QueuesAreShuttingDown = 1;
  p_m_IoQueueListHead = &this->m_IoQueueListHead;
  if ( *(FxDeviceBase **)&this->m_DeviceBase[1].m_ExecutionLevel == (FxDeviceBase *)&this->m_DeviceBase[1].m_ExecutionLevel )
  {
    Blink = this->m_IoQueueListHead.Blink;
    if ( Blink != p_m_IoQueueListHead )
    {
      do
      {
        if ( LODWORD(Blink[1].Flink) == 1 )
        {
          Blink[1].Blink = (_LIST_ENTRY *)Next;
          queueList.Next = (_SINGLE_LIST_ENTRY *)&Blink[1].Blink;
          RefCount = _InterlockedIncrement((volatile signed __int32 *)&Blink[-56].Flink + 1);
          if ( SLOBYTE(Blink[-55].Flink) < 0 )
          {
            v21 = (FxTagTracker *)Blink[-60].Blink;
            if ( v21 )
              FxTagTracker::UpdateTagHistory(
                v21,
                (void *)0x65776F70,
                1479,
                "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                TagAddRef,
                RefCount);
          }
          Next = queueList.Next;
        }
        Blink = Blink->Blink;
      }
      while ( Blink != p_m_IoQueueListHead );
      v13 = irql;
    }
  }
  else
  {
    Flink = p_m_IoQueueListHead->Flink;
    if ( p_m_IoQueueListHead->Flink != p_m_IoQueueListHead )
    {
      do
      {
        GetIoQueueList_ProcessQueueListEntry(Flink, &queueList, v14);
        Flink = Flink->Flink;
      }
      while ( Flink != p_m_IoQueueListHead );
      Next = queueList.Next;
    }
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v24 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
    FxVerifierLock::Unlock(v24, v13, (unsigned __int8)v14);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v13);
  if ( Action == 1 )
  {
    v17 = Next;
    if ( !Next )
      return 0LL;
    do
    {
      FxIoQueue::StartPowerTransitionOff((FxIoQueue *)&v17[-116]);
      v17 = v17->Next;
    }
    while ( v17 );
  }
  if ( Next )
  {
    v18 = Next->Next;
    while ( 1 )
    {
      v19 = v18;
      FxIoQueue::StopProcessingForPower((FxIoQueue *)&Next[-116], (FxIoStopProcessingForPowerAction)Action);
      Next->Next = 0LL;
      ((void (__fastcall *)(_SINGLE_LIST_ENTRY *, __int64, __int64, const char *))Next[-116].Next[2].Next)(
        &Next[-116],
        1702326128LL,
        1249LL,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
      if ( !v18 )
        break;
      v18 = v18->Next;
      Next = v19;
    }
  }
  return 0LL;
}
