/*
 * XREFs of DpiFdoHandleSystemPower @ 0x1403C53F8
 * Callers:
 *     DpiFdoDispatchPower @ 0x1403C4AB0 (DpiFdoDispatchPower.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400354D0 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DpiCorrectPowerAction @ 0x14004EF68 (DpiCorrectPowerAction.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x1400593B8 (DpiFdoIsMsBddAnchoredDevice.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiKsrSetBootGraphicsInformation @ 0x14024A4EC (DpiKsrSetBootGraphicsInformation.c)
 *     DpiKsrStopAdapter @ 0x14024A5C0 (DpiKsrStopAdapter.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     DpiFdoInvalidateChildRelations @ 0x140375560 (DpiFdoInvalidateChildRelations.c)
 *     DpiDxgkDdiSetPowerState @ 0x1403A5864 (DpiDxgkDdiSetPowerState.c)
 *     DpiFdoStopMiracastSession @ 0x1403E7BF0 (DpiFdoStopMiracastSession.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1403F96D0 (DpiAcquirePostDisplayInfoFromBgfx.c)
 */

NTSTATUS __fastcall DpiFdoHandleSystemPower(PDEVICE_OBJECT DeviceObject, IRP *Context)
{
  char *DeviceExtension; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  bool v4; // al
  IRP *v6; // r13
  int v7; // ebx
  int v9; // ebx
  struct _IO_STACK_LOCATION *v10; // rax
  struct _IO_STACK_LOCATION *v11; // rax
  NTSTATUS v12; // eax
  int Status; // r15d
  IO_STATUS_BLOCK *p_IoStatus; // rbx
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  unsigned int LowPart; // eax
  __int64 v18; // rdx
  int v19; // ebx
  bool v20; // al
  struct _IO_WORKITEM *WorkItem; // rcx
  __int64 v22; // rcx
  NTSTATUS v23; // eax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v24[2]; // [rsp+30h] [rbp-48h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-38h] BYREF
  PIO_REMOVE_LOCK RemoveLock; // [rsp+48h] [rbp-30h]
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF
  bool v29; // [rsp+C8h] [rbp+50h]
  char v30; // [rsp+D0h] [rbp+58h]
  unsigned int EaLength; // [rsp+D8h] [rbp+60h]

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  CurrentStackLocation = Context->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  v30 = 0;
  memset(&Event, 0, sizeof(Event));
  v6 = Context;
  v7 = 0;
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
    if ( CurrentStackLocation->MinorFunction == 3 )
    {
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1 )
      {
        v24[0] = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)-300000000LL;
        LOBYTE(Context) = 1;
        DpiFdoStopMiracastSession(DeviceObject, Context, v24, 131LL);
      }
    }
    else
    {
      v7 = -1073741637;
    }
    goto LABEL_4;
  }
  if ( DeviceExtension && *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    v4 = DeviceExtension[5144] != 0;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 6 || v4 || !HIBYTE(word_14015E2F8) )
  {
LABEL_4:
    if ( v7 == -1073741637 )
    {
      ++v6->CurrentLocation;
      ++v6->Tail.Overlay.CurrentStackLocation;
      return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), v6);
    }
    RemoveLock = (PIO_REMOVE_LOCK)(DeviceExtension + 64);
    IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, v6, File, 1u, 0x20u);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v10 = v6->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v10[-1].MajorFunction = *(_OWORD *)&v10->MajorFunction;
    *(_OWORD *)&v10[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v10->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v10[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v10->Parameters.SetQuota + 6);
    v10[-1].FileObject = v10->FileObject;
    v10[-1].Control = 0;
    v11 = v6->Tail.Overlay.CurrentStackLocation;
    v11[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiFdoPowerCompletionRoutine;
    v11[-1].Context = &Event;
    v11[-1].Control = -32;
    PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), v6);
    v12 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = v12;
    if ( v12 )
    {
      WdLogSingleEntry1(2LL, v12);
      WdLogGlobalForLineNumber = 1213;
    }
    else
    {
      p_IoStatus = &v6->IoStatus;
      Status = v6->IoStatus.Status;
      if ( Status < 0 )
      {
        WdLogSingleEntry1(3LL, CurrentStackLocation->MinorFunction);
        WdLogGlobalForLineNumber = 1241;
        goto LABEL_71;
      }
      if ( CurrentStackLocation->MinorFunction == 2
        && DeviceExtension[1158]
        && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1
        && *((_DWORD *)DeviceExtension + 71) != 1 )
      {
        Timeout.QuadPart = -150000000LL;
        v15 = KeWaitForSingleObject(DeviceExtension + 1240, Executive, 0, 0, &Timeout);
        if ( v15 == 258 )
        {
          WdLogSingleEntry1(2LL, 258LL);
          WdLogGlobalForLineNumber = 1278;
        }
        else if ( v15 >= 0 )
        {
          v16 = KeWaitForSingleObject(DeviceExtension + 1264, Executive, 0, 0, 0LL);
          if ( v16 < 0 )
          {
            WdLogSingleEntry1(2LL, v16);
            WdLogGlobalForLineNumber = 1304;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v15);
          WdLogGlobalForLineNumber = 1285;
        }
      }
      KeEnterCriticalRegion();
      if ( DeviceExtension[484] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      if ( CurrentStackLocation->MinorFunction == 2 )
      {
        LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        if ( LowPart > 1 )
          *((_DWORD *)DeviceExtension + 70) = LowPart;
      }
      v18 = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      v19 = *(_DWORD *)&DeviceExtension[4 * v18 + 1336];
      if ( !DeviceExtension[1158] )
      {
        if ( DeviceExtension[480] )
        {
          Status = 0;
          if ( *((_DWORD *)DeviceExtension + 4) == 1953656900
            && *((_DWORD *)DeviceExtension + 5) == 2
            && *((_DWORD *)DeviceExtension + 59) == 2
            && CurrentStackLocation->MinorFunction == 2 )
          {
            EaLength = CurrentStackLocation->Parameters.Create.EaLength;
            v20 = (unsigned int)(dword_14015E150 - 4) <= 1;
            v29 = v20;
            if ( v19 == 1 )
            {
              EaLength = DpiCorrectPowerAction(
                           (__int64)DeviceObject,
                           v18,
                           CurrentStackLocation->Parameters.Create.EaLength);
              v20 = v29;
            }
            if ( DeviceExtension[1153] && v19 < *((_DWORD *)DeviceExtension + 71) )
            {
              if ( qword_14015E000 )
              {
                if ( v20 )
                {
                  WorkItem = IoAllocateWorkItem(g_pDriverObject);
                  if ( WorkItem )
                  {
                    _InterlockedCompareExchange(&dword_14015E150, 5, 4);
                    IoQueueWorkItemEx(
                      WorkItem,
                      (PIO_WORKITEM_ROUTINE_EX)DpiDisableMsBddFallbackDriverWorkItem,
                      DelayedWorkQueue,
                      0LL);
                  }
                  else
                  {
                    WdLogSingleEntry1(6LL, -1073741670LL);
                    WdLogGlobalForLineNumber = 1407;
                  }
                }
              }
              else if ( byte_14015E170 )
              {
                LOBYTE(v18) = 1;
                DpiAcquirePostDisplayInfoFromBgfx(&xmmword_14015E008, v18);
                if ( v29 )
                {
                  *((_OWORD *)&DpGlobals + 55) = *(_OWORD *)((char *)&DpGlobals + 712);
                  *((_OWORD *)&DpGlobals + 56) = *(_OWORD *)((char *)&DpGlobals + 728);
                  *((_OWORD *)&DpGlobals + 57) = *(_OWORD *)((char *)&DpGlobals + 744);
                  *((_OWORD *)&DpGlobals + 58) = *(_OWORD *)((char *)&DpGlobals + 760);
                  *((_OWORD *)&DpGlobals + 59) = *(_OWORD *)((char *)&DpGlobals + 776);
                  *((_OWORD *)&DpGlobals + 60) = *(_OWORD *)((char *)&DpGlobals + 792);
                  *((_OWORD *)&DpGlobals + 61) = *(_OWORD *)((char *)&DpGlobals + 808);
                  *((_OWORD *)&DpGlobals + 62) = *(_OWORD *)((char *)&DpGlobals + 824);
                  *((_OWORD *)&DpGlobals + 63) = *(_OWORD *)((char *)&DpGlobals + 840);
                  *((_OWORD *)&DpGlobals + 64) = *(_OWORD *)((char *)&DpGlobals + 856);
                  byte_14015E170 = 0;
                  dword_14015E19C = 1;
                  qword_14015E158 = (__int64)KeGetCurrentThread();
                  qword_14015E160 = (__int64)DeviceObject;
                }
              }
            }
            DpiDxgkDdiSetPowerState(
              *((_QWORD *)DeviceExtension + 5),
              *((_QWORD *)DeviceExtension + 6),
              0xFFFFFFFFLL,
              v19,
              EaLength);
            if ( DeviceExtension[1153] && v29 )
            {
              if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 5 )
              {
                byte_14015E170 = 1;
                LOBYTE(v22) = 1;
                InbvNotifyDisplayOwnershipChange(v22, DpiEnterSystemDisplay);
              }
              else if ( v19 < *((_DWORD *)DeviceExtension + 71) )
              {
                xmmword_14015E0C0 = 0LL;
                DWORD2(xmmword_14015E0C0) = -1;
                xmmword_14015E0B0 = 0LL;
                memset(&xmmword_14015E0D0, 0, 0x80uLL);
                qword_14015E160 = 0LL;
                qword_14015E158 = (__int64)KeGetCurrentThread();
              }
            }
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3928), 1u);
            *((_DWORD *)DeviceExtension + 71) = v19;
            ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3928));
            KeLeaveCriticalRegion();
            if ( v19 == 1 )
            {
              LOBYTE(v24[0]) = 0;
              CDisplayScenarioContextScope::ContextScopeConstructor(v24, 0LL, 0xBu, 0);
              DpiFdoInvalidateChildRelations((__int64)DeviceObject, 6u, (__int128 *)v24[1]);
              CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v24);
            }
          }
          *((_DWORD *)DeviceExtension + 70) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        }
        else
        {
          v30 = 1;
          v6->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          v23 = PoRequestPowerIrp(
                  DeviceObject,
                  CurrentStackLocation->MinorFunction,
                  (POWER_STATE)v19,
                  (PREQUEST_POWER_COMPLETE)DpiFdoDevicePowerCompletionCallback,
                  v6,
                  0LL);
          Status = v23;
          if ( v23 != 259 )
          {
            WdLogSingleEntry1(2LL, v23);
            WdLogGlobalForLineNumber = 1566;
          }
        }
      }
      if ( DeviceExtension[484] )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
    }
    p_IoStatus = &v6->IoStatus;
    if ( Status == 259 )
      return Status;
LABEL_71:
    PoStartNextPowerIrp(v6);
    p_IoStatus->Status = Status;
    IofCompleteRequest(v6, 0);
    IoReleaseRemoveLockEx(RemoveLock, v6, 0x20u);
    if ( v30 )
      return 259;
    return Status;
  }
  v9 = DpiKsrStopAdapter(DeviceObject, Context);
  if ( v9 == -1073741637 )
  {
    v7 = 0;
    goto LABEL_4;
  }
  if ( DpiFdoIsMsBddAnchoredDevice((__int64)DeviceObject) && (unsigned int)(dword_14015E150 - 1) <= 1 )
    DpiKsrSetBootGraphicsInformation();
  return v9;
}
