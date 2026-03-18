/*
 * XREFs of DpiRequestDevicePowerState @ 0x14002AC88
 * Callers:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     DpiSuspendAdapterDpc @ 0x14002A990 (DpiSuspendAdapterDpc.c)
 *     ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x14002AB50 (-DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z.c)
 *     ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x14002ABC4 (-PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A4390 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1402A4850 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     DpiCancelSuspendAdapterTimer @ 0x14002B244 (DpiCancelSuspendAdapterTimer.c)
 *     DpiRequestDevicePowerIrp @ 0x14002B338 (DpiRequestDevicePowerIrp.c)
 *     DpiSetDevicePowerTransitionState @ 0x14002B618 (DpiSetDevicePowerTransitionState.c)
 *     ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x14002B698 (-DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     DxgkReportDevicePoweredOn @ 0x14002B734 (DxgkReportDevicePoweredOn.c)
 *     DpiSendAsyncResumeAdapterRequest @ 0x14002B794 (DpiSendAsyncResumeAdapterRequest.c)
 *     DpiCancelAsyncRequest @ 0x14002B878 (DpiCancelAsyncRequest.c)
 *     DpiDisableD3Requests @ 0x140336D30 (DpiDisableD3Requests.c)
 */

void __fastcall DpiRequestDevicePowerState(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // rdx
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  int v11; // eax
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v18; // [rsp+68h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  WdLogSingleEntry3(9LL, a2, v3, a3);
  WdLogGlobalForLineNumber = 4993;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(v6, (__int64)&Dxgk_DpiRequestDevicePowerState, v7, *(_QWORD *)(v3 + 4032), a2, a3);
  if ( a2 == 1 )
  {
    if ( !a3 )
      DpiDisableD3Requests(*(_QWORD *)(v3 + 24));
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 4224), &LockHandle);
    WdLogSingleEntry3(9LL, *(int *)(v3 + 4288), *(int *)(v3 + 4292), 0LL);
    WdLogGlobalForLineNumber = 5021;
    if ( *(_DWORD *)(v3 + 4120) == 1 && *(_DWORD *)(v3 + 236) != 6 && !*(_DWORD *)(v3 + 4288) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5025;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"FdoContext->DeviceThreadState != StateSuspended || FdoContext->DevicePnpState == SurpriseRemoved || FdoContext->"
         "DevicePowerTransitionState != DevicePoweredOn",
        5025LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( a3 )
    {
      *(_DWORD *)(v3 + 4292) = 0;
      DpiCancelSuspendAdapterTimer(v3);
    }
    switch ( *(_DWORD *)(v3 + 4288) )
    {
      case 1:
        DpiCancelAsyncRequest(v3);
        v9 = 0LL;
        break;
      case 2:
        if ( a3 != 2 )
        {
          DpiSetDevicePowerTransitionState(v3, 0LL);
          goto LABEL_23;
        }
        WdLogSingleEntry3(9LL, v3, 0LL, 0LL);
        WdLogGlobalForLineNumber = 5079;
LABEL_40:
        if ( *(_DWORD *)(v3 + 4288) != 6 )
        {
          WdLogSingleEntry3(9LL, v3, *(int *)(v3 + 4288), 2LL);
          v14 = *(_QWORD *)(v3 + 4032);
          WdLogGlobalForLineNumber = 5121;
          DxgkReportDevicePoweredOn(v14);
        }
        goto LABEL_23;
      case 3:
        WdLogSingleEntry3(9LL, v3, 0LL, 0LL);
        WdLogGlobalForLineNumber = 5103;
        DpiSendAsyncResumeAdapterRequest(v3);
        v9 = 7LL;
        break;
      default:
        if ( *(_DWORD *)(v3 + 4288) != 4 )
        {
          if ( *(_DWORD *)(v3 + 4288) != 5 )
            goto LABEL_22;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
          {
            LODWORD(v16) = a3;
            LODWORD(v15) = 1;
            McTemplateK0pqq_EtwWriteTransfer(
              (unsigned int)(*(_DWORD *)(v3 + 4288) - 4),
              (__int64)&EventPowerRequestDuringD3,
              v8,
              *(_QWORD *)(v3 + 4032),
              v15,
              v16);
          }
        }
        WdLogSingleEntry3(9LL, v3, 0LL, 0LL);
        WdLogGlobalForLineNumber = 5061;
        DpiRequestDevicePowerIrp(v3, 1LL);
        v9 = 6LL;
        break;
    }
    DpiSetDevicePowerTransitionState(v3, v9);
LABEL_22:
    if ( a3 != 2 )
    {
LABEL_23:
      p_LockHandle = &LockHandle;
      goto LABEL_24;
    }
    goto LABEL_40;
  }
  memset(&v18, 0, sizeof(v18));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 4224), &v18);
  WdLogSingleEntry3(9LL, *(int *)(v3 + 4288), *(int *)(v3 + 4292), 0LL);
  WdLogGlobalForLineNumber = 5143;
  if ( a3 == 2 )
    *(_DWORD *)(v3 + 4292) = 1;
  if ( !*(_DWORD *)(v3 + 4232) && (a3 != 1 || *(_DWORD *)(v3 + 4292)) )
  {
    v11 = *(_DWORD *)(v3 + 4288);
    if ( v11 == 3 )
    {
      WdLogSingleEntry3(9LL, v3, 0LL, 0LL);
      WdLogGlobalForLineNumber = 5167;
      DpiRequestDevicePowerIrp(v3, 4LL);
      DpiSetDevicePowerTransitionState(v3, 4LL);
      DpiCancelSuspendAdapterTimer(v3);
    }
    else if ( !v11 )
    {
      WdLogSingleEntry3(9LL, v3, 0LL, 0LL);
      WdLogGlobalForLineNumber = 5187;
      DpiSetDevicePowerTransitionState(v3, 1LL);
      v12 = (_QWORD *)(v3 + 4128);
      if ( !*(_QWORD *)(v3 + 4128) )
      {
        *(_DWORD *)(v3 + 4152) = 1;
        v13 = *(_QWORD **)(v3 + 4112);
        if ( *v13 != v3 + 4104 )
          __fastfail(3u);
        *v12 = v3 + 4104;
        *(_QWORD *)(v3 + 4136) = v13;
        *v13 = v12;
        *(_QWORD *)(v3 + 4112) = v12;
        KeSetEvent((PRKEVENT)(v3 + 4072), 0, 0);
      }
    }
  }
  if ( (unsigned int)(*(_DWORD *)(v3 + 4288) - 4) > 1 && *(_DWORD *)(v3 + 236) != 6 )
    DpiScheduleDelayedDevicePowerRequired((struct _FDO_CONTEXT *)v3);
  p_LockHandle = &v18;
LABEL_24:
  KeReleaseInStackQueuedSpinLock(p_LockHandle);
}
