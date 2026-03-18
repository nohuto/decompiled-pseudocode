/*
 * XREFs of ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x140015C70
 * Callers:
 *     ?AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z @ 0x14001445C (-AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z.c)
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1400148E4 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14001577C (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x14001C2C0 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?ResetStateForRestart@FxPkgIo@@QEAAXXZ @ 0x1400A0CD0 (-ResetStateForRestart@FxPkgIo@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxIoQueue::SetState(FxIoQueue *this, _FX_IO_QUEUE_SET_STATE NewStatus)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  char v3; // di
  _FX_IO_QUEUE_STATE *p_m_QueueState; // rcx
  _FX_IO_QUEUE_STATE *v6; // rbx
  _FX_IO_QUEUE_STATE *v7; // rax
  const void *_a1; // rsi
  bool v9; // zf
  _FX_DRIVER_GLOBALS *v10; // rcx
  const void *v11; // rcx

  m_Globals = this->m_Globals;
  v3 = NewStatus;
  if ( (NewStatus & 0x7FFCFFF0) != 0 )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v9 = this->m_ObjectSize == 0;
    v10 = this->m_Globals;
    if ( v9 )
      _a1 = 0LL;
    WPP_IFR_SF_q(v10, 2u, 0xDu, 0x16u, WPP_FxIoQueue_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    p_m_QueueState = &this->m_QueueState;
    if ( (NewStatus & 0x20000) != 0 )
      *p_m_QueueState &= ~0x10000u;
    if ( (NewStatus & 0x10000) != 0 )
    {
      *p_m_QueueState |= 0x10000u;
      v6 = &this->m_QueueState;
    }
    else
    {
      v6 = p_m_QueueState;
    }
    v7 = v6;
    if ( (NewStatus & 1) != 0 )
    {
      if ( (*p_m_QueueState & 0x10000) != 0 )
      {
        v11 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v11 = 0LL;
        WPP_IFR_SF_q(m_Globals, 4u, 0xDu, 0x17u, WPP_FxIoQueue_cpp_Traceguids, v11);
        v7 = &this->m_QueueState;
      }
      else
      {
        *p_m_QueueState |= 1u;
        v7 = v6;
      }
    }
    if ( (v3 & 2) != 0 )
    {
      *v6 &= ~1u;
      v6 = v7;
    }
    if ( (v3 & 4) != 0 )
    {
      *v6 |= 2u;
      this->m_CancelDispatchedRequests = 0;
    }
    if ( (v3 & 8) != 0 )
      *v6 &= ~2u;
  }
}
