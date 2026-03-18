/*
 * XREFs of ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x14001C2C0
 * Callers:
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x14001C068 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14001577C (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x140015C70 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 */

void __fastcall FxIoQueue::StopProcessingForPower(
        FxIoQueue *this,
        FxIoStopProcessingForPowerAction Action,
        unsigned __int8 a3)
{
  int v4; // edx
  unsigned __int8 v5; // di
  MxEvent *p_m_PowerIdle; // r14
  unsigned __int16 v7; // r9
  _FX_DRIVER_GLOBALS **p_m_Globals; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 *p_m_ObjectSize; // rsi
  const void *v11; // rbx
  _FX_DRIVER_GLOBALS *v12; // rdi
  int v13; // edx
  FxVerifierLock **p_m_DbgFlagIsInitialized; // rdi
  unsigned __int64 *p_m_Lock; // rsi
  unsigned __int8 v16; // r14
  unsigned __int8 v17; // r8
  unsigned __int8 v18; // r8
  FxVerifierLock *v19; // rcx
  unsigned __int8 v20; // r8
  const void *_a1; // rax
  unsigned __int8 irql; // [rsp+68h] [rbp+38h] BYREF
  __int64 v23; // [rsp+70h] [rbp+40h] BYREF

  irql = 0;
  v4 = Action - 1;
  if ( v4 )
  {
    v13 = v4 - 1;
    if ( v13 )
    {
      if ( v13 != 1 || this->m_PowerManaged == 1 )
        return;
      p_m_DbgFlagIsInitialized = (FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized;
      if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
      {
        FxVerifierLock::Lock(*p_m_DbgFlagIsInitialized, &irql, a3);
        v16 = irql;
        p_m_Lock = &this->m_NPLock.m_Lock;
      }
      else
      {
        p_m_Lock = &this->m_NPLock.m_Lock;
        v16 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
        irql = v16;
      }
      FxIoQueue::SetState(this, FxIoQueueSetShutdown|0x2);
      FxNonPagedObject::Unlock(this, v16, v17);
      FxIoQueue::QueuePurge(this, 1u, 1u, 0LL, 0LL);
      if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
      {
        FxVerifierLock::Lock(*p_m_DbgFlagIsInitialized, &irql, v18);
        v5 = irql;
      }
      else
      {
        v5 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
      }
      this->m_PowerState = FxIoQueuePowerPurge;
    }
    else
    {
      if ( !this->m_PowerManaged )
        return;
      FxNonPagedObject::Lock(this, &irql);
      FxIoQueue::SetState(this, FxIoQueueSetShutdown|0x2);
      FxNonPagedObject::Unlock(this, irql, v20);
      FxIoQueue::QueuePurge(this, 1u, 1u, 0LL, 0LL);
      FxNonPagedObject::Lock(this, &irql);
      v5 = irql;
      this->m_PowerState = FxIoQueuePowerPurge;
    }
  }
  else
  {
    if ( !this->m_PowerManaged )
      return;
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v19 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v19, &irql, a3);
      v5 = irql;
    }
    else
    {
      v5 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
    this->m_PowerState = FxIoQueuePowerStopping;
  }
  p_m_PowerIdle = &this->m_PowerIdle;
  KeClearEvent(&this->m_PowerIdle.m_Event);
  if ( FxIoQueue::DispatchEvents(this, v5, 0LL, v7) )
  {
    p_m_Globals = &this->m_Globals;
    m_Globals = this->m_Globals;
    p_m_ObjectSize = &this->m_ObjectSize;
    v11 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( m_Globals->FxVerboseOn )
    {
      _a1 = v11;
      if ( !*p_m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x67u, WPP_FxIoQueue_cpp_Traceguids, _a1);
    }
    v12 = *p_m_Globals;
    if ( !*p_m_ObjectSize )
      v11 = 0LL;
    v23 = -10000000LL * v12->FxVerifierDbgWaitForSignalTimeoutInSec;
    while ( KeWaitForSingleObject(
              p_m_PowerIdle,
              Executive,
              0,
              0,
              (PLARGE_INTEGER)((unsigned __int64)&v23 & -(__int64)(v23 != 0))) == 258 )
    {
      DbgPrint(
        "Thread 0x%p is %s 0x%p\n",
        KeGetCurrentThread(),
        "waiting for all inflight requests to be acknowledged on WDFQUEUE",
        v11);
      if ( v12->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
    }
  }
}
