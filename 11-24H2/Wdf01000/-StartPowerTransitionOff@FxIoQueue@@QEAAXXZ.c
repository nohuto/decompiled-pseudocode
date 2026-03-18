/*
 * XREFs of ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x140033EB0
 * Callers:
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x140033988 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x140026780 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 */

void __fastcall FxIoQueue::StartPowerTransitionOff(FxIoQueue *this, __int64 a2, unsigned __int8 a3)
{
  MxEvent *p_m_PowerIdle; // rbp
  unsigned __int16 v5; // r9
  _FX_DRIVER_GLOBALS **p_m_Globals; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 *p_m_ObjectSize; // rsi
  const void *v9; // rbx
  _FX_DRIVER_GLOBALS *v10; // rdi
  FxVerifierLock *v11; // rcx
  const void *_a1; // rax
  __int64 irql; // [rsp+50h] [rbp+8h] BYREF

  LOBYTE(irql) = 0;
  if ( this->m_PowerManaged )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v11 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v11, (unsigned __int8 *)&irql, a3);
    }
    else
    {
      LOBYTE(irql) = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
    p_m_PowerIdle = &this->m_PowerIdle;
    this->m_PowerState = FxIoQueuePowerStartingTransition;
    KeClearEvent(&this->m_PowerIdle.m_Event);
    if ( FxIoQueue::DispatchEvents(this, irql, 0LL, v5) )
    {
      p_m_Globals = &this->m_Globals;
      m_Globals = this->m_Globals;
      p_m_ObjectSize = &this->m_ObjectSize;
      v9 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( m_Globals->FxVerboseOn )
      {
        _a1 = v9;
        if ( !*p_m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x66u, WPP_FxIoQueue_cpp_Traceguids, _a1);
      }
      v10 = *p_m_Globals;
      if ( !*p_m_ObjectSize )
        v9 = 0LL;
      irql = -10000000LL * v10->FxVerifierDbgWaitForSignalTimeoutInSec;
      while ( KeWaitForSingleObject(
                p_m_PowerIdle,
                Executive,
                0,
                0,
                (PLARGE_INTEGER)((unsigned __int64)&irql & -(__int64)(irql != 0))) == 258 )
      {
        DbgPrint(
          "Thread 0x%p is %s 0x%p\n",
          KeGetCurrentThread(),
          "waiting for all threads to stop dispatching requests so that queue can be powered off, WDFQUEUE",
          v9);
        if ( v10->FxVerifierDbgBreakOnError )
          DbgBreakPoint();
      }
    }
  }
}
