/*
 * XREFs of ?_CreateAndInit@FxSelfManagedIoMachine@@SAJPEAPEAV1@PEAVFxPkgPnp@@@Z @ 0x140051398
 * Callers:
 *     ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x140051064 (-RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ??0FxSelfManagedIoMachine@@QEAA@PEAVFxPkgPnp@@@Z @ 0x1400514A4 (--0FxSelfManagedIoMachine@@QEAA@PEAVFxPkgPnp@@@Z.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::_CreateAndInit(
        FxSelfManagedIoMachine **SelfManagedIoMachine,
        FxPkgPnp *PkgPnp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v5; // rax
  FX_POOL **v6; // rax
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rcx
  __int64 result; // rax
  FxSelfManagedIoMachine *v11; // rax
  FxSelfManagedIoMachine *v12; // rdi
  FxWaitLockInternal *p_m_StateMachineLock; // rbx
  __m128i v14; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  *SelfManagedIoMachine = 0LL;
  m_Globals = PkgPnp->m_Globals;
  v14.m128i_i64[0] = 0LL;
  v14.m128i_i64[1] = 64LL;
  v5 = retaddr;
  if ( !m_Globals->FxPoolTrackingOn )
    v5 = 0LL;
  v6 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v14, 0x118uLL, m_Globals->Tag, v5);
  if ( v6 && (FxSelfManagedIoMachine::FxSelfManagedIoMachine((FxSelfManagedIoMachine *)v6, PkgPnp), (v12 = v11) != 0LL) )
  {
    p_m_StateMachineLock = &v11->m_StateMachineLock;
    KeInitializeEvent(&v11->m_StateMachineLock.m_Event.m_Event, SynchronizationEvent, 1u);
    p_m_StateMachineLock->m_Event.m_DbgFlagIsInitialized = 1;
    result = 0LL;
    *SelfManagedIoMachine = v12;
  }
  else
  {
    m_DeviceBase = PkgPnp->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(PkgPnp->m_Globals, 2u, 0xCu, 0xAu, WPP_SelfManagedIoStateMachine_cpp_Traceguids, _a1);
    return 3221225626LL;
  }
  return result;
}
