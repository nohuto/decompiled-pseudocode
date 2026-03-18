/*
 * XREFs of ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x14000C1E0
 * Callers:
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x140008AC8 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x140009330 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x140009AC0 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x14000A1A0 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x14000ABD0 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x14000AE30 (imp_WdfRequestForwardToIoQueue.c)
 *     ?CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x14000B750 (-CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?InsertNewRequest@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x140047420 (-InsertNewRequest@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x140047730 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x14000CAB0 (WPP_IFR_SF_qqLL.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoQueue::SetTransitionFromEmpty(FxIoQueue *this)
{
  bool v1; // zf
  __int64 v3; // rdx
  unsigned int v4; // r12d
  __int64 v5; // rsi
  unsigned __int64 *v6; // rbp
  KIRQL v7; // al
  char v8; // cl
  KIRQL v9; // r15
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned int i; // eax
  const FxPowerIdleTargetState *v13; // r8
  int v14; // edi
  FxTagTracker *v15; // rcx
  unsigned int _a3; // edi
  __int64 v17; // rdx
  const void *_a1; // rcx
  char v19; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  KIRQL v21; // [rsp+80h] [rbp+8h]

  v1 = this->m_IsDevicePowerPolicyOwner == 0;
  this->m_TransitionFromEmpty = 1;
  this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
  if ( !v1 && this->m_PowerManaged && !this->m_PowerReferenced )
  {
    v3 = *(_QWORD *)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
    if ( v3 )
      _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 748), 11, 5);
    v4 = 0;
    v5 = *(_QWORD *)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
    v6 = (unsigned __int64 *)(v5 + 16);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 16));
    v8 = *(_BYTE *)(v5 + 224);
    v9 = v7;
    v21 = v7;
    if ( (v8 & 0x10) != 0 )
    {
      v14 = -1073741101;
    }
    else if ( (v8 & 0x20) != 0 )
    {
      v10 = *(unsigned __int8 *)(v5 + 225);
      v4 = ++*(_DWORD *)(v5 + 24);
      v11 = *(_QWORD *)(v5 + 624);
      *(_DWORD *)(v5 + 4 * v10 + 232) = 512;
      *(_BYTE *)(v5 + 225) = (*(_BYTE *)(v5 + 225) + 1) & 7;
      for ( i = 0; i < FxPowerIdleMachine::m_StateTable[*(int *)(v5 + 228) - 1].TargetStatesCount; ++i )
      {
        v13 = &FxPowerIdleMachine::m_StateTable[*(int *)(v5 + 228) - 1].TargetStates[i];
        if ( v13->PowerIdleEvent == PowerIdleEventIoIncrement )
        {
          for ( _a3 = v13->PowerIdleState; _a3 != 35; _a3 = StateFunc((FxPowerIdleMachine *)v5) )
          {
            v17 = *(_QWORD *)(v11 + 96);
            _a1 = (const void *)(v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !*(_WORD *)(v17 + 10) )
              _a1 = 0LL;
            WPP_IFR_SF_qqLL(
              *(_FX_DRIVER_GLOBALS **)(v11 + 16),
              4u,
              0x15u,
              0x11u,
              WPP_PowerIdleStateMachine_cpp_Traceguids,
              _a1,
              *(const void **)(v17 + 144),
              _a3,
              *(_DWORD *)(v5 + 228));
            *(_DWORD *)(v5 + 4LL * *(unsigned __int8 *)(v5 + 226) + 264) = _a3;
            v19 = *(_BYTE *)(v5 + 226) + 1;
            *(_DWORD *)(v5 + 228) = _a3;
            *(_BYTE *)(v5 + 226) = v19 & 7;
            StateFunc = FxPowerIdleMachine::m_StateTable[(int)_a3 - 1].StateFunc;
            if ( !StateFunc )
              break;
          }
          break;
        }
      }
      v9 = v21;
      v14 = 259;
      if ( KeReadStateEvent((PRKEVENT)(v5 + 192)) )
        v14 = 0;
      v6 = (unsigned __int64 *)(v5 + 16);
    }
    else
    {
      v14 = -1073741101;
    }
    KeReleaseSpinLock(v6, v9);
    v15 = *(FxTagTracker **)(v5 + 32);
    if ( v15 && (!v14 || v14 == 259) )
      FxTagTracker::UpdateTagHistory(v15, 0LL, 0, 0LL, TagAddRef, v4);
    if ( v14 >= 0 )
      this->m_PowerReferenced = 1;
  }
}
