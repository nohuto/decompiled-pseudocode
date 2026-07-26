/*
 * XREFs of ?Initialize@NdisWdfIdle@@QEAAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B7A38
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x140181730 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?MakeAndInitialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@SAJAEBUSTATE_MACHINE_ENGINE_CONFIG@3@PEAPEAV123@@Z @ 0x1400ED90C (-MakeAndInitialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@SAJAEBUSTATE_MACHINE_ENGINE_C.c)
 */

__int64 __fastcall NdisWdfIdle::Initialize(NdisWdfIdle *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  int v4; // edx
  int v5; // edi
  struct SmFx::STATE_MACHINE_ENGINE_CONFIG v7; // [rsp+30h] [rbp-50h] BYREF

  v7.context = this;
  *(_QWORD *)&v7.poolTag = 1951622217LL;
  v7.machineSpec = (const SmFx::STATE_MACHINE_SPECIFICATION *)&IdleStateMachine<NdisWdfIdle>::c_specification;
  v7.deviceObject = a2->DeviceObject;
  *(_DWORD *)(&v7.stackSize + 1) = 0;
  v7.logTransitionCallback = (void (__fastcall *)(void *, SmFx::TransitionType, unsigned __int16, unsigned __int16, unsigned __int16))IdleStateMachine<NdisWdfIdle>::EvtLogTransitionThunk;
  *(_WORD *)(&v7.stackSize + 5) = 0;
  *(_WORD *)&v7.isWorkerRequired = 256;
  v7.logExceptionCallback = 0LL;
  v7.logEventEnqueueCallback = 0LL;
  v7.machineDestroyedCallback = 0LL;
  v5 = SmFx::StateMachineEngine::StateMachineEngineImpl::MakeAndInitialize(&v7, &this->m_engine.m_impl);
  if ( v5 >= 0 )
  {
    this->m_miniport = a2;
    KeInitializeTimer(&this->m_sleepTimer);
    KeInitializeDpc(&this->m_dpc, ndisWdfIdleTimerFired, this);
    return 0LL;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v4,
        13,
        10,
        (struct _GUID *)&WPP_dc0d0c0f10983dc717169f88e75f167f_Traceguids);
    }
    return (unsigned int)v5;
  }
}
