/*
 * XREFs of imp_WdfDeviceStopIdleActual @ 0x1400141F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_dd @ 0x1400076CC (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x140025000 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1400251E0 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x14002DF5C (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qdd @ 0x14005F07C (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     SleepstudyHelper_ComponentActive @ 0x1400AB2F8 (SleepstudyHelper_ComponentActive.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfDeviceStopIdleActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        unsigned __int8 WaitForD0,
        void *Tag,
        int Line,
        char *File)
{
  unsigned __int8 v6; // r15
  WDFDEVICE__ *_a1; // rsi
  __int64 v8; // rcx
  _FX_DRIVER_GLOBALS **v9; // rbx
  _FX_DRIVER_GLOBALS *v10; // r14
  void (__fastcall *CallbackRoutine)(_KBUGCHECK_CALLBACK_REASON, _KBUGCHECK_REASON_CALLBACK_RECORD *, void *, unsigned int); // rcx
  void (__fastcall *v12)(_KBUGCHECK_CALLBACK_REASON, _KBUGCHECK_REASON_CALLBACK_RECORD *, void *, unsigned int); // rdi
  unsigned __int64 *v13; // r12
  KIRQL v14; // al
  char v15; // cl
  KIRQL v16; // r13
  __int64 i; // rax
  const FxPowerIdleTargetState *TargetStates; // rcx
  int _a3; // ebx
  FxTagTracker *v20; // rcx
  _FX_DRIVER_GLOBALS *v21; // rcx
  unsigned int PowerIdleState; // ebx
  __int64 v24; // r15
  __int64 v25; // rdx
  const void *v26; // rcx
  char v27; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  KIRQL CurrentIrql; // al
  _FX_DRIVER_GLOBALS *v30; // rax
  unsigned __int8 v31; // dl
  unsigned int v32; // r8d
  unsigned __int16 v33; // r9
  __int64 v34; // r13
  _FX_DRIVER_GLOBALS *v35; // rcx
  __int64 v36; // r15
  KIRQL v37; // al
  const void *v38; // r8
  _FX_DRIVER_GLOBALS *v39; // r11
  unsigned __int8 FxVerboseOn; // al
  const void *v41; // r10
  const void *v42; // rdx
  _LIST_ENTRY *Flink; // rcx
  SS_COMPONENT__ *v44; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  struct _KTHREAD *_a2; // [rsp+30h] [rbp-50h]
  struct _KTHREAD *_a2a; // [rsp+30h] [rbp-50h]
  struct _KTHREAD *_a2b; // [rsp+30h] [rbp-50h]
  unsigned int RefCount; // [rsp+50h] [rbp-30h]
  _FX_DRIVER_GLOBALS **v50; // [rsp+58h] [rbp-28h] BYREF
  __int64 v51; // [rsp+60h] [rbp-20h]
  _FX_DRIVER_GLOBALS *v52; // [rsp+68h] [rbp-18h]
  _FX_DRIVER_GLOBALS ***v53; // [rsp+70h] [rbp-10h] BYREF
  __int16 v54; // [rsp+78h] [rbp-8h]
  __int16 v55; // [rsp+7Ah] [rbp-6h]
  int v56; // [rsp+7Ch] [rbp-4h]
  KIRQL v58; // [rsp+C8h] [rbp+48h]

  v6 = WaitForD0;
  _a1 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(v8) = 0;
  v9 = (_FX_DRIVER_GLOBALS **)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    v8 = *(unsigned __int16 *)v9;
    v9 = (_FX_DRIVER_GLOBALS **)((char *)v9 - v8);
  }
  if ( *((_WORD *)v9 + 4) == 4098 )
  {
    v50 = v9;
  }
  else
  {
    v50 = 0LL;
    v53 = &v50;
    v55 = v8;
    v56 = 0;
    v30 = *v9;
    v54 = 4098;
    if ( ((int (__fastcall *)(_FX_DRIVER_GLOBALS **, _FX_DRIVER_GLOBALS ****))v30->DestroyEvent.m_Event.Header.WaitListHead.Blink)(
           v9,
           &v53) < 0 )
    {
      WPP_IFR_SF_qDqD(v9[2], v31, v32, v33, traceGuid, _a1, 0x1002u, v9, *((unsigned __int16 *)v9 + 4));
      FxVerifierBugCheckWorker(v9[2], WDF_INVALID_HANDLE, (unsigned __int64)_a1, 0x1002uLL);
    }
    v9 = v50;
  }
  v10 = v9[2];
  v52 = v10;
  if ( v6 && v10->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(v10, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(v10);
      return (unsigned int)-1073741808;
    }
    v9 = v50;
  }
  CallbackRoutine = v9[81][1].BugCheckCallbackRecord.CallbackRoutine;
  if ( CallbackRoutine )
  {
    _InterlockedCompareExchange((volatile signed __int32 *)CallbackRoutine + 187, 12, 5);
    RefCount = 0;
    v12 = v50[81][1].BugCheckCallbackRecord.CallbackRoutine;
    v13 = (unsigned __int64 *)((char *)v12 + 16);
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12 + 2);
    v15 = *((_BYTE *)v12 + 224);
    v16 = v14;
    if ( (v15 & 0x10) != 0 || (v15 & 0x20) == 0 )
    {
      _a3 = -1073741101;
    }
    else
    {
      RefCount = ++*((_DWORD *)v12 + 6);
      v51 = *((_QWORD *)v12 + 78);
      *((_DWORD *)v12 + *((unsigned __int8 *)v12 + 225) + 58) = 512;
      *((_BYTE *)v12 + 225) = (*((_BYTE *)v12 + 225) + 1) & 7;
      for ( i = 0LL;
            (unsigned int)i < FxPowerIdleMachine::m_StateTable[*((int *)v12 + 57) - 1].TargetStatesCount;
            i = (unsigned int)(i + 1) )
      {
        TargetStates = FxPowerIdleMachine::m_StateTable[*((int *)v12 + 57) - 1].TargetStates;
        if ( TargetStates[i].PowerIdleEvent == PowerIdleEventIoIncrement )
        {
          PowerIdleState = TargetStates[i].PowerIdleState;
          if ( PowerIdleState != 35 )
          {
            v24 = v51;
            do
            {
              v25 = *(_QWORD *)(v24 + 96);
              v26 = (const void *)(v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !*(_WORD *)(v25 + 10) )
                v26 = 0LL;
              WPP_IFR_SF_qqLL(
                *(_FX_DRIVER_GLOBALS **)(v24 + 16),
                4u,
                0x15u,
                0x11u,
                WPP_PowerIdleStateMachine_cpp_Traceguids,
                v26,
                *(const void **)(v25 + 144),
                PowerIdleState,
                *((_DWORD *)v12 + 57));
              *((_DWORD *)v12 + *((unsigned __int8 *)v12 + 226) + 66) = PowerIdleState;
              v27 = *((_BYTE *)v12 + 226) + 1;
              *((_DWORD *)v12 + 57) = PowerIdleState;
              *((_BYTE *)v12 + 226) = v27 & 7;
              StateFunc = FxPowerIdleMachine::m_StateTable[(int)PowerIdleState - 1].StateFunc;
              if ( !StateFunc )
                break;
              PowerIdleState = StateFunc((FxPowerIdleMachine *)v12);
            }
            while ( PowerIdleState != 35 );
            _a1 = (WDFDEVICE__ *)Device;
            v13 = (unsigned __int64 *)((char *)v12 + 16);
            v10 = v52;
            v6 = WaitForD0;
          }
          break;
        }
      }
      _a3 = KeReadStateEvent((PRKEVENT)v12 + 8) == 0 ? 0x103 : 0;
    }
    KeReleaseSpinLock(v13, v16);
    if ( _a3 == 259 && v6 )
    {
      v34 = *((_QWORD *)v12 + 78);
      v35 = *(_FX_DRIVER_GLOBALS **)(v34 + 16);
      v36 = v34 + 96;
      if ( v35->FxVerboseOn )
      {
        _a2 = KeGetCurrentThread();
        v38 = (const void *)(*(_QWORD *)v36 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !*(_WORD *)(*(_QWORD *)v36 + 10LL) )
          v38 = 0LL;
        WPP_IFR_SF_qq(v35, 5u, 0xCu, 0xCu, WPP_PowerIdleStateMachine_cpp_Traceguids, v38, _a2);
      }
      FxCREvent::EnterCRAndWaitAndLeave((FxCREvent *)v12 + 6);
      v37 = KeAcquireSpinLockRaiseToDpc(v13);
      v58 = v37;
      if ( (*((_BYTE *)v12 + 224) & 0x30) == 0x20 )
      {
        _a3 = 0;
      }
      else
      {
        v39 = *(_FX_DRIVER_GLOBALS **)(v34 + 16);
        _a3 = -1073741101;
        FxVerboseOn = v39->FxVerboseOn;
        if ( (*((_BYTE *)v12 + 224) & 0x10) != 0 )
        {
          if ( FxVerboseOn )
          {
            _a2a = KeGetCurrentThread();
            v41 = (const void *)(*(_QWORD *)v36 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !*(_WORD *)(*(_QWORD *)v36 + 10LL) )
              v41 = 0LL;
            WPP_IFR_SF_qqd(v39, 5u, 0xCu, 0xDu, WPP_PowerIdleStateMachine_cpp_Traceguids, v41, _a2a, 0xC00002D3);
          }
        }
        else if ( FxVerboseOn )
        {
          _a2b = KeGetCurrentThread();
          v42 = (const void *)(*(_QWORD *)v36 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*(_WORD *)(*(_QWORD *)v36 + 10LL) )
            v42 = 0LL;
          WPP_IFR_SF_qqd(v39, 5u, 0xCu, 0xEu, WPP_PowerIdleStateMachine_cpp_Traceguids, v42, _a2b, 0xC00002D3);
        }
        --*((_DWORD *)v12 + 6);
        FxPowerIdleMachine::ProcessEventLocked((FxPowerIdleMachine *)v12, PowerIdleEventIoDecrement);
        v37 = v58;
      }
      KeReleaseSpinLock(v13, v37);
      v6 = WaitForD0;
    }
    v20 = (FxTagTracker *)*((_QWORD *)v12 + 4);
    if ( v20 && (!_a3 || _a3 == 259) )
      FxTagTracker::UpdateTagHistory(v20, Tag, Line, File, TagAddRef, RefCount);
    if ( v10->FxVerboseOn )
      WPP_IFR_SF_qdd(v10, 5u, 0x12u, 0x26u, WPP_FxDeviceApi_cpp_Traceguids, _a1, v6, _a3);
    if ( _a3 >= 0 )
    {
      v21 = v50[81];
      if ( BYTE4(v21[2].FxPoolFrameworks.PagedHead.Blink) == 1
        && _InterlockedIncrement((volatile signed __int32 *)&v21[2].FxPoolFrameworks.PagedHead.Blink) == 1 )
      {
        Flink = v21[2].FxPoolFrameworks.PagedHead.Flink;
        if ( Flink )
        {
          v44 = (SS_COMPONENT__ *)Flink[1].Flink;
          if ( v44 )
            SleepstudyHelper_ComponentActive(v44);
        }
      }
    }
  }
  else
  {
    _a3 = -1073741436;
    WPP_IFR_SF_qd(v10, 2u, 0x12u, 0x25u, WPP_FxDeviceApi_cpp_Traceguids, _a1, -1073741436);
  }
  return (unsigned int)_a3;
}
