/*
 * XREFs of DpiFdoHandleDevicePower @ 0x1403C4AF0
 * Callers:
 *     DpiFdoDispatchPower @ 0x1403C4AB0 (DpiFdoDispatchPower.c)
 * Callees:
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x14002A258 (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     DpiFdoIsPostDevice @ 0x14004DB50 (DpiFdoIsPostDevice.c)
 *     DxgkReportDeviceDirectedPowerDown @ 0x1400687D0 (DxgkReportDeviceDirectedPowerDown.c)
 *     DpiLdaPowerUpAdapterInChain @ 0x14018517C (DpiLdaPowerUpAdapterInChain.c)
 *     DxgkCompletePnPTransition @ 0x1401F6448 (DxgkCompletePnPTransition.c)
 *     DxgkStartPnPTransition @ 0x1401F6848 (DxgkStartPnPTransition.c)
 *     DpiFdoIsDevicePresent @ 0x14023D6C0 (DpiFdoIsDevicePresent.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x14023E360 (DpiFdoRebootForSurpriseRemoval.c)
 *     DpiFdoDetermineAffectedSession @ 0x140243560 (DpiFdoDetermineAffectedSession.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x14024D938 (DpiDxgkDdiNotifySurpriseRemoval.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     DpiIsPowerRuntimeDStateTransition @ 0x1402BD284 (DpiIsPowerRuntimeDStateTransition.c)
 *     DpiRequestIoPowerState @ 0x1403AD44C (DpiRequestIoPowerState.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403DA520 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     DpiFdoStopMiracastSession @ 0x1403E7BF0 (DpiFdoStopMiracastSession.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1403F96D0 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x14040A974 (DpiLdaPowerDownAllAdaptersInChain.c)
 *     DpiFdoSetAdapterPowerState @ 0x14040AB28 (DpiFdoSetAdapterPowerState.c)
 */

NTSTATUS __fastcall DpiFdoHandleDevicePower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  int *DeviceExtension; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  int Status; // r14d
  CCHAR v8; // dl
  int LowPart; // ebx
  __int64 v10; // rdx
  int v11; // eax
  struct _IO_STACK_LOCATION *v12; // rax
  struct _IO_STACK_LOCATION *v13; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rax
  int IsDevicePresent; // eax
  char v18; // r12
  char v19; // al
  bool IsPostDevice; // al
  __int64 v21; // rdx
  __int64 v22; // r8
  bool v23; // al
  char v24; // dl
  struct _DEVICE_OBJECT *v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // r8
  struct _DEVICE_OBJECT *v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  bool v34; // al
  POWER_STATE v35; // ebx
  int v36; // eax
  __int64 v37; // rcx
  void *v38; // [rsp+30h] [rbp-58h]
  struct _PNP_TRANS_TOKEN *started; // [rsp+30h] [rbp-58h]
  struct _KEVENT Event; // [rsp+38h] [rbp-50h] BYREF
  bool v41; // [rsp+90h] [rbp+8h]
  char v42; // [rsp+98h] [rbp+10h]
  char v43; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v44; // [rsp+A8h] [rbp+20h] BYREF

  DeviceExtension = (int *)DeviceObject->DeviceExtension;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v41 = 0;
  Status = 0;
  if ( *((_BYTE *)DeviceExtension + 1158) )
  {
    if ( DpiIsPowerRuntimeDStateTransition((__int64)DeviceExtension) )
    {
      ++Irp->CurrentLocation;
      Irp->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
    }
    DeviceExtension[70] = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  }
  if ( CurrentStackLocation->MinorFunction == 2 )
  {
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    v41 = LowPart > 1;
    WdLogSingleEntry3(9LL, DeviceObject->DeviceExtension, LowPart, DeviceExtension[71]);
    WdLogGlobalForLineNumber = 399;
    if ( LowPart > 1 && !DpiIsPowerRuntimeDStateTransition((__int64)DeviceExtension) )
    {
      v44 = -300000000LL;
      LOBYTE(v10) = 1;
      DpiFdoStopMiracastSession(DeviceObject, v10, &v44, 131LL);
    }
    KeEnterCriticalRegion();
    if ( *((_BYTE *)DeviceExtension + 484) )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 64LL) + 4232LL));
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    if ( LowPart <= DeviceExtension[71]
      || (!DeviceExtension[126]
        ? (v11 = DpiFdoSetAdapterPowerState(
                   DeviceObject,
                   (POWER_STATE)LowPart,
                   CurrentStackLocation->Parameters.Create.EaLength))
        : (v11 = DpiLdaPowerDownAllAdaptersInChain(DeviceObject, Irp)),
          Status = v11,
          v11 >= 0) )
    {
      if ( LowPart <= 1 )
        KeSetEvent((PRKEVENT)(DeviceExtension + 310), 0, 0);
      else
        *((_BYTE *)DeviceExtension + 496) = 1;
    }
    if ( *((_BYTE *)DeviceExtension + 484) )
      DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
    ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    KeLeaveCriticalRegion();
    if ( Status != -1073741637 )
      goto LABEL_7;
  }
  else if ( CurrentStackLocation->MinorFunction == 3 )
  {
LABEL_7:
    if ( Status >= 0 )
    {
      memset(&Event, 0, sizeof(Event));
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v12 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v12[-1].MajorFunction = *(_OWORD *)&v12->MajorFunction;
      *(_OWORD *)&v12[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v12->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v12[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v12->Parameters.SetQuota + 6);
      v12[-1].FileObject = v12->FileObject;
      v12[-1].Control = 0;
      v13 = Irp->Tail.Overlay.CurrentStackLocation;
      v13[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
      v13[-1].Context = &Event;
      v13[-1].Control = -32;
      PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
      v14 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v14;
      if ( v14 )
      {
        WdLogSingleEntry1(2LL, v14);
        WdLogGlobalForLineNumber = 542;
      }
      else
      {
        Status = Irp->IoStatus.Status;
        if ( Status == -1073741810 )
        {
          v15 = 0LL;
          v42 = 0;
          WdLogSingleEntry4(
            2LL,
            DpiFdoHandleDevicePower,
            DeviceObject,
            (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
            -1073741810LL);
          WdLogGlobalForLineNumber = 557;
          if ( !DeviceExtension[126] || *((_BYTE *)DeviceExtension + 508) )
          {
            v15 = (__int64)DeviceExtension;
          }
          else
          {
            v16 = *((_QWORD *)DeviceExtension + 354);
            if ( v16 )
              v15 = *(_QWORD *)(v16 + 64);
          }
          KeEnterCriticalRegion();
          if ( *((_BYTE *)DeviceExtension + 484) )
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 64LL)
                                                            + 4232LL));
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
          v43 = 0;
          IsDevicePresent = DpiFdoIsDevicePresent((__int64)DeviceExtension, &v43);
          v18 = v43;
          if ( IsDevicePresent < 0 )
            v18 = 0;
          v43 = v18;
          if ( !v18 )
            *((_BYTE *)DeviceExtension + 1160) = 1;
          if ( DeviceExtension[59] == 6 )
          {
            if ( !v41 && *((_QWORD *)DeviceExtension + 61) )
              DpiSetDevicePowerTransitionStateAtPassiveLevel(v15, 0, 1);
          }
          else if ( v15 )
          {
            if ( !v18 || (*(_BYTE *)(v15 + 4040) & 0x18) != 0 )
            {
              v38 = (void *)*((_QWORD *)DeviceExtension + 5);
              if ( DeviceExtension[4] == 1953656900 && DeviceExtension[5] == 2 )
              {
                if ( DpiIsPowerRuntimeDStateTransition((__int64)DeviceExtension) )
                {
                  v19 = *(_BYTE *)(v15 + 4040);
                  if ( (v19 & 0x10) == 0 && ((v19 & 8) == 0 || *(int *)(v15 + 4048) < 0x2000) )
                  {
                    IsPostDevice = DpiFdoIsPostDevice((__int64)DeviceObject);
                    WdLogSingleEntry5(0LL, 275LL, 25LL, 2LL - IsPostDevice, v22, v21);
                    WdLogGlobalForLineNumber = 649;
                  }
                }
              }
              if ( (int)DpiDxgkDdiNotifySurpriseRemoval((__int64)v38, *((_QWORD *)DeviceExtension + 6), v15, 0) >= 0
                || (*(_BYTE *)(v15 + 4040) & 0x10) != 0 )
              {
                v42 = 1;
              }
              v23 = DpiFdoIsPostDevice((__int64)DeviceObject);
              if ( v23 || !v24 )
                DpiFdoRebootForSurpriseRemoval(v25, v23 ? 1 : 3);
            }
            else
            {
              v42 = 1;
            }
            v26 = DpiFdoDetermineAffectedSession(*((_QWORD *)DeviceExtension + 3));
            started = (struct _PNP_TRANS_TOKEN *)DxgkStartPnPTransition(0LL, v26);
            if ( !started )
            {
              WdLogSingleEntry1(6LL, -1073741670LL);
              WdLogGlobalForLineNumber = 707;
            }
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite((PERESOURCE)(v15 + 3928), 1u);
            if ( !v42 )
              *((_BYTE *)DeviceExtension + 1161) = 1;
            DeviceExtension[(DeviceExtension[69] & 7) + 61] = DeviceExtension[60];
            v27 = DeviceExtension[59];
            ++DeviceExtension[69];
            DeviceExtension[60] = v27;
            DeviceExtension[59] = 6;
            ExReleaseResourceLite((PERESOURCE)(v15 + 3928));
            KeLeaveCriticalRegion();
            if ( !v41 && *((_QWORD *)DeviceExtension + 61) )
              DpiSetDevicePowerTransitionStateAtPassiveLevel(v15, 0, 1);
            DpiRequestIoPowerState(*(_QWORD *)(v15 + 24), 4, v28, 0);
            DxgkCompletePnPTransition(started);
            if ( (int *)v15 != DeviceExtension )
            {
              v29 = *(struct _DEVICE_OBJECT **)(v15 + 152);
              *(_BYTE *)(v15 + 232) = 1;
              IoInvalidateDeviceState(v29);
              DxgCreateLiveDumpWithWdLogs(403LL, 2051LL);
            }
          }
          else
          {
            v30 = DeviceExtension[60];
            v31 = DeviceExtension[69] & 7;
            *((_BYTE *)DeviceExtension + 1161) = 1;
            DeviceExtension[v31 + 61] = v30;
            v32 = DeviceExtension[59];
            ++DeviceExtension[69];
            DeviceExtension[60] = v32;
            DeviceExtension[59] = 6;
          }
          if ( DpiFdoIsPostDevice((__int64)DeviceObject) )
          {
            if ( v18 )
            {
              if ( byte_14015E170 )
              {
                LOBYTE(v33) = 1;
                DpiAcquirePostDisplayInfoFromBgfx(&xmmword_14015E008, v33);
                byte_14015E170 = 0;
                dword_14015E19C = 1;
              }
            }
            else
            {
              qword_14015E000 = 0LL;
            }
          }
          if ( *((_BYTE *)DeviceExtension + 484) )
            DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
          ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
          KeLeaveCriticalRegion();
        }
        else if ( Status < 0 )
        {
          WdLogSingleEntry1(2LL, Irp->IoStatus.Status);
          WdLogGlobalForLineNumber = 829;
        }
      }
      KeEnterCriticalRegion();
      if ( *((_BYTE *)DeviceExtension + 484) )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 64LL) + 4232LL));
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( Status >= 0 )
      {
        if ( CurrentStackLocation->MinorFunction == 2 )
        {
          v35.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
          if ( !v41 )
            *((_BYTE *)DeviceExtension + 496) = 0;
          if ( v35.SystemState < DeviceExtension[71] )
          {
            if ( DeviceExtension[126] )
              v36 = DpiLdaPowerUpAdapterInChain((__int64)DeviceObject, (__int64)Irp);
            else
              v36 = DpiFdoSetAdapterPowerState(DeviceObject, v35, CurrentStackLocation->Parameters.Create.EaLength);
            Status = v36;
          }
          if ( *((_BYTE *)DeviceExtension + 482) )
          {
            if ( !DeviceExtension[126] && v35.SystemState == PowerSystemWorking )
              DpiSetDevicePowerTransitionStateAtPassiveLevel((__int64)DeviceExtension, 0, 1);
            if ( *((_BYTE *)DeviceExtension + 482)
              && v35.SystemState == PowerSystemSleeping3
              && *((_BYTE *)DeviceExtension + 4296) )
            {
              v37 = *((_QWORD *)DeviceExtension + 504);
              *((_BYTE *)DeviceExtension + 4296) = 0;
              DxgkReportDeviceDirectedPowerDown(v37);
            }
          }
        }
        v34 = v41;
      }
      else
      {
        v34 = v41;
        if ( v41 )
          *((_BYTE *)DeviceExtension + 496) = 0;
      }
      if ( CurrentStackLocation->MinorFunction == 2 )
      {
        if ( v34 )
        {
          KeClearEvent((PRKEVENT)(DeviceExtension + 310));
          KeClearEvent((PRKEVENT)(DeviceExtension + 316));
        }
        else
        {
          KeSetEvent((PRKEVENT)(DeviceExtension + 316), 0, 0);
        }
      }
      if ( *((_BYTE *)DeviceExtension + 484) )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      PoStartNextPowerIrp(Irp);
      v8 = 1;
    }
    else
    {
      PoStartNextPowerIrp(Irp);
      v8 = 0;
      Irp->IoStatus.Status = Status;
    }
    IofCompleteRequest(Irp, v8);
    return Status;
  }
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
}
