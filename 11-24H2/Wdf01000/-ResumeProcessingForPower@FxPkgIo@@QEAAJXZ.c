/*
 * XREFs of ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x140032ACC
 * Callers:
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400329D0 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400783C0 (-PowerStartSelfManagedIoNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400790F0 (-PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x140026780 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?StartPowerTransitionOn@FxIoQueue@@QEAAXXZ @ 0x140032D14 (-StartPowerTransitionOn@FxIoQueue@@QEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgIo::ResumeProcessingForPower(FxPkgIo *this)
{
  FxDeviceBase *m_DeviceBase; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v5; // rdx
  unsigned __int8 v6; // r8
  _LIST_ENTRY *v7; // rsi
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // r8
  _LIST_ENTRY *Blink; // rdi
  char m_ObjectFlags; // al
  unsigned __int8 v12; // r8
  _LIST_ENTRY *v13; // rdi
  _LIST_ENTRY *v14; // rbx
  unsigned __int8 v15; // al
  unsigned __int8 v16; // r8
  unsigned __int16 v17; // r9
  FxIoQueue *v18; // rcx
  _LIST_ENTRY *Flink; // rdi
  _LIST_ENTRY *v20; // rbp
  unsigned int RefCount; // edx
  FxTagTracker *v22; // rcx
  FxVerifierLock *v24; // rcx
  FxVerifierLock *v25; // rcx
  FxVerifierLock *v26; // rcx
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  irql = 0;
  m_DeviceBase = this->m_DeviceBase;
  m_Globals = this->m_Globals;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v5 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v5 = 0LL;
  WPP_IFR_SF_q(m_Globals, 4u, 0xDu, 0x1Fu, WPP_FxPkgIo_cpp_Traceguids, v5);
  v7 = 0LL;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v25 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
  {
    FxVerifierLock::Lock(v25, &irql, v6);
    v8 = irql;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v8;
  }
  Blink = this->m_IoQueueListHead.Blink;
  if ( Blink != &this->m_IoQueueListHead )
  {
    do
    {
      if ( LODWORD(Blink[1].Flink) == 1 )
      {
        Blink[1].Blink = v7;
        v7 = (_LIST_ENTRY *)((char *)Blink + 24);
        RefCount = _InterlockedIncrement((volatile signed __int32 *)&Blink[-56].Flink + 1);
        if ( SLOBYTE(Blink[-55].Flink) < 0 )
        {
          v22 = (FxTagTracker *)Blink[-60].Blink;
          if ( v22 )
            FxTagTracker::UpdateTagHistory(
              v22,
              (void *)0x65776F70,
              1479,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
              TagAddRef,
              RefCount);
        }
      }
      Blink = Blink->Blink;
    }
    while ( Blink != &this->m_IoQueueListHead );
    v8 = irql;
  }
  m_ObjectFlags = this->m_ObjectFlags;
  *(_WORD *)&this->m_PowerStateOn = 1;
  if ( m_ObjectFlags < 0 && (v26 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
    FxVerifierLock::Unlock(v26, v8, v9);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v8);
  v13 = v7;
  if ( v7 )
  {
    do
    {
      v14 = v13 - 58;
      irql = 0;
      if ( BYTE2(v13[-50].Blink) )
      {
        if ( SLOBYTE(v14[1].Blink) < 0 && (v24 = (FxVerifierLock *)v13[-61].Blink) != 0LL )
        {
          FxVerifierLock::Lock(v24, &irql, v12);
          v15 = irql;
        }
        else
        {
          v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v14[7]);
        }
        v18 = (FxIoQueue *)&v13[-58];
        if ( LODWORD(v14[11].Flink) == 1 )
        {
          FxNonPagedObject::Unlock(v18, v15, v16);
        }
        else
        {
          LODWORD(v14[11].Flink) = 10;
          FxIoQueue::DispatchEvents(v18, v15, 0LL, v17);
        }
      }
      v13 = v13->Flink;
    }
    while ( v13 );
    Flink = v7->Flink;
    while ( 1 )
    {
      v20 = Flink;
      FxIoQueue::StartPowerTransitionOn((FxIoQueue *)&v7[-58]);
      v7->Flink = 0LL;
      ((void (__fastcall *)(_LIST_ENTRY *, __int64, __int64, const char *))v7[-58].Flink[1].Flink)(
        &v7[-58],
        1702326128LL,
        1328LL,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
      if ( !Flink )
        break;
      Flink = Flink->Flink;
      v7 = v20;
    }
  }
  return 0LL;
}
