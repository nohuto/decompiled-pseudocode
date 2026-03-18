/*
 * XREFs of DpiFdoSetAdapterPowerState @ 0x14040AB28
 * Callers:
 *     DpiLdaPowerUpAdapterInChain @ 0x14018517C (DpiLdaPowerUpAdapterInChain.c)
 *     DpiFdoHandleDevicePower @ 0x1403C4AF0 (DpiFdoHandleDevicePower.c)
 *     DpiLdaPowerDownAllAdaptersInChain @ 0x14040A974 (DpiLdaPowerDownAllAdaptersInChain.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     DxgkReportAdapterPowerRapidHpdTriggerEvent @ 0x140046ED4 (DxgkReportAdapterPowerRapidHpdTriggerEvent.c)
 *     DpiFdoIsPostDevice @ 0x14004DB50 (DpiFdoIsPostDevice.c)
 *     DpiCorrectPowerAction @ 0x14004EF68 (DpiCorrectPowerAction.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x1400593B8 (DpiFdoIsMsBddAnchoredDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1400635E4 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline @ 0x14006E0E8 (Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z @ 0x140084D80 (-IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z.c)
 *     ?UpdateMuxPosition@DISPLAY_MUX_MGR@@QEAAXXZ @ 0x140088118 (-UpdateMuxPosition@DISPLAY_MUX_MGR@@QEAAXXZ.c)
 *     DpiDxgkDdiDisplayMuxUpdateState @ 0x14008BAC4 (DpiDxgkDdiDisplayMuxUpdateState.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiFdoRebootForSurpriseRemoval @ 0x14023E360 (DpiFdoRebootForSurpriseRemoval.c)
 *     DpiFdoArmWaitWake @ 0x14024D2C0 (DpiFdoArmWaitWake.c)
 *     DpiFdoDisarmWaitWake @ 0x14024D45C (DpiFdoDisarmWaitWake.c)
 *     DpiIsPowerRuntimeDStateTransition @ 0x1402BD284 (DpiIsPowerRuntimeDStateTransition.c)
 *     DpiDxgkDdiSetPowerState @ 0x1403A5864 (DpiDxgkDdiSetPowerState.c)
 *     DpiRequestIoPowerState @ 0x1403AD44C (DpiRequestIoPowerState.c)
 *     DpiFdoDetectPostDevice @ 0x1403F9324 (DpiFdoDetectPostDevice.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1403F96D0 (DpiAcquirePostDisplayInfoFromBgfx.c)
 */

__int64 __fastcall DpiFdoSetAdapterPowerState(
        PDEVICE_OBJECT DeviceObject,
        POWER_STATE State,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  char *DeviceExtension; // rdi
  int v9; // eax
  __int64 v10; // r8
  int v11; // r13d
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // rcx
  unsigned int v16; // eax
  bool v17; // zf
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  int IsTargetPartOfMux; // eax
  int v27; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v29; // r8
  unsigned __int8 v30; // bl
  __int64 v31; // rcx
  __int64 v32; // r8
  struct _IO_WORKITEM *WorkItem; // rax
  char v35; // [rsp+30h] [rbp-41h] BYREF
  unsigned __int8 v36[3]; // [rsp+31h] [rbp-40h] BYREF
  unsigned int v37; // [rsp+34h] [rbp-3Dh]
  unsigned int v38; // [rsp+38h] [rbp-39h]
  PDEVICE_OBJECT v39; // [rsp+40h] [rbp-31h]
  int v40; // [rsp+48h] [rbp-29h] BYREF
  __int64 v41; // [rsp+50h] [rbp-21h]
  char v42; // [rsp+58h] [rbp-19h]
  _OWORD v43[2]; // [rsp+60h] [rbp-11h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v37 = 0;
  v38 = a3;
  if ( State.SystemState > *((_DWORD *)DeviceExtension + 71) )
  {
    PoSetPowerState(DeviceObject, DevicePowerState, State);
    if ( !byte_14015DD59 && *((_DWORD *)DeviceExtension + 59) == 2 )
    {
      if ( DeviceExtension[2726] )
      {
        v9 = DpiFdoArmWaitWake(DeviceObject);
        if ( v9 < 0 )
        {
          WdLogSingleEntry1(2LL, v9);
          WdLogGlobalForLineNumber = 12485;
        }
      }
    }
    if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3928), 1u);
      *((POWER_STATE *)DeviceExtension + 71) = State;
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3928));
      KeLeaveCriticalRegion();
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
      {
        if ( DeviceExtension[4296] )
        {
          v11 = 128;
        }
        else if ( a5 == 2 )
        {
          v11 = 8;
        }
        else if ( a5 == 3 )
        {
          v11 = 16;
        }
        else
        {
          v12 = 0;
          if ( a5 - 4 <= 2 )
            v12 = 32;
          v11 = v12;
        }
        DpiRequestIoPowerState((__int64)DeviceObject, 1, v10, v11);
        v13 = DpiDxgkDdiSetPowerState(
                *((_QWORD *)DeviceExtension + 5),
                *((_QWORD *)DeviceExtension + 6),
                0xFFFFFFFFLL,
                State.SystemState,
                a5);
        ++*((_DWORD *)DeviceExtension + 1109);
        v14 = v13;
      }
      else
      {
        v14 = v37;
      }
      if ( v38 == 5 && DpiFdoIsPostDevice((__int64)DeviceObject) )
      {
        byte_14015E170 = 1;
        LOBYTE(v15) = 1;
        InbvNotifyDisplayOwnershipChange(v15, DpiEnterSystemDisplay);
      }
      return v14;
    }
    *((POWER_STATE *)DeviceExtension + 71) = State;
    if ( *((_DWORD *)DeviceExtension + 59) == 2 )
      return (unsigned int)DpiDxgkDdiSetPowerState(
                             *((_QWORD *)DeviceExtension + 5),
                             *((_QWORD *)DeviceExtension + 6),
                             0xFFFFFFFFLL,
                             State.SystemState,
                             a5);
    return v37;
  }
  if ( State.SystemState >= *((_DWORD *)DeviceExtension + 71) )
    return v37;
  v16 = DpiCorrectPowerAction((__int64)DeviceObject, a4, a5);
  v17 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  v38 = v16;
  if ( v17 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v39 = 0LL;
    v18 = *((_DWORD *)DeviceExtension + 59);
    if ( (v18 == 2 || *((_DWORD *)DeviceExtension + 60) == 2 && ((v18 - 3) & 0xFFFFFFFC) == 0 && v18 != 4)
      && *((_DWORD *)DeviceExtension + 951) )
    {
      DxgkReportAdapterPowerRapidHpdTriggerEvent((_QWORD *)DeviceExtension + 337);
    }
    if ( DpiFdoIsPostDevice((__int64)DeviceObject) )
    {
      if ( byte_14015E170 )
      {
        DpiAcquirePostDisplayInfoFromBgfx((__int64)&xmmword_14015E008, 1, 0);
        byte_14015E170 = 0;
        dword_14015E19C = 1;
        if ( DpiFdoIsMsBddAnchoredDevice((__int64)DeviceObject) )
        {
          v19 = (__int64)&DpGlobals + 880;
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
        }
        v39 = DeviceObject;
      }
      if ( a4 == 5 )
      {
        if ( !byte_14015E169 )
        {
          v21 = *((_QWORD *)DeviceExtension + 3);
          v35 = 0;
          if ( (int)DpiFdoDetectPostDevice(v21, &v35) >= 0 )
          {
            v19 = !DpiFdoIsPostDevice((__int64)DeviceObject);
            if ( v22 != (_DWORD)v19 )
              DpiFdoRebootForSurpriseRemoval(DeviceObject, 0);
          }
        }
        v23 = *((_QWORD *)DeviceExtension + 504);
        if ( (!v23 || *(int *)(v23 + 3004) <= 1105) && byte_14015DD55 )
        {
          v40 = -1;
          v41 = 0LL;
          if ( (qword_14015B4C0 & 2) != 0 )
          {
            v42 = 1;
            v40 = 8007;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerEnter, v20, 8007);
          }
          else
          {
            v42 = 0;
          }
          DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v40, 8007);
          memset(v43, 0, sizeof(v43));
          LODWORD(v43[0]) = 18;
          x86BiosCall(16LL, v43);
          xmmword_14015E018 = 0LL;
          DWORD2(xmmword_14015E018) = -1;
          xmmword_14015E008 = 0LL;
          memset(&unk_14015E028, 0, 0x80uLL);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
          if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v40);
        }
      }
    }
    if ( *((_DWORD *)DeviceExtension + 59) == 2 )
    {
      if ( DpiFdoIsPostDevice(*((_QWORD *)DeviceExtension + 3)) )
      {
        qword_14015E158 = (__int64)KeGetCurrentThread();
        qword_14015E160 = (__int64)v39;
      }
      if ( *((_DWORD *)DeviceExtension + 1508) == 1 && DeviceExtension[6393] )
      {
        v36[0] = 0;
        if ( a4 == 5 )
          DISPLAY_MUX_MGR::UpdateMuxPosition((DISPLAY_MUX_PAIRING **)qword_14015E3C0);
        IsTargetPartOfMux = DISPLAY_MUX_MGR::IsTargetPartOfMux(
                              qword_14015E3C0,
                              *(struct _LUID *)(DeviceExtension + 6036),
                              *((_DWORD *)DeviceExtension + 1594),
                              v36,
                              0LL);
        v27 = IsTargetPartOfMux;
        if ( IsTargetPartOfMux < 0 )
        {
          WdLogSingleEntry1(2LL, IsTargetPartOfMux);
          WdLogGlobalForLineNumber = 12747;
          MicrosoftTelemetryAssertTriggeredArgsMsgKM(
            v31,
            v27,
            0,
            (__int64)"Failed to query if DisplayMux is switched to adapter when powering on adapter");
        }
        else
        {
          IsEnabledDeviceUsageNoInline = Feature_DisplayMux_PostGA_BugBundle_1__private_IsEnabledDeviceUsageNoInline();
          v30 = v36[0];
          if ( IsEnabledDeviceUsageNoInline )
          {
            WdLogSingleEntry2(4LL, *((unsigned int *)DeviceExtension + 1509), v36[0]);
            WdLogGlobalForLineNumber = 12738;
          }
          LOBYTE(v29) = v30;
          DpiDxgkDdiDisplayMuxUpdateState((__int64)DeviceExtension, *((_DWORD *)DeviceExtension + 1594), v29);
        }
      }
      DpiDxgkDdiSetPowerState(
        *((_QWORD *)DeviceExtension + 5),
        *((_QWORD *)DeviceExtension + 6),
        0xFFFFFFFFLL,
        State.SystemState,
        v38);
      ++*((_DWORD *)DeviceExtension + 1109);
      if ( (struct _KTHREAD *)qword_14015E158 == KeGetCurrentThread() )
      {
        qword_14015E160 = 0LL;
        qword_14015E158 = 0LL;
      }
      if ( DpiFdoIsPostDevice((__int64)DeviceObject) && (PDEVICE_OBJECT)qword_14015DFF8 != DeviceObject )
      {
        xmmword_14015E018 = 0LL;
        DWORD2(xmmword_14015E018) = -1;
        xmmword_14015E008 = 0LL;
        memset(&unk_14015E028, 0, 0x80uLL);
      }
      v14 = DpiRequestIoPowerState((__int64)DeviceObject, 2, v32, 0);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3928), 1u);
      *((POWER_STATE *)DeviceExtension + 71) = State;
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3928));
      KeLeaveCriticalRegion();
      if ( DpiIsPowerRuntimeDStateTransition((__int64)DeviceExtension) )
      {
        if ( byte_14015DD59 )
        {
          DeviceExtension[3649] = 1;
        }
        else
        {
          WorkItem = IoAllocateWorkItem(DeviceObject);
          if ( WorkItem )
          {
            IoQueueWorkItemEx(WorkItem, (PIO_WORKITEM_ROUTINE_EX)DpiFdoInvalidateChildWorkItem, DelayedWorkQueue, 0LL);
          }
          else
          {
            WdLogSingleEntry1(6LL, -1073741670LL);
            WdLogGlobalForLineNumber = 12907;
          }
        }
      }
      else
      {
        DeviceExtension[3649] = 1;
        _InterlockedAnd((volatile signed __int32 *)DeviceExtension + 945, 0xFFFFFFFE);
        IoInvalidateDeviceRelations(*((PDEVICE_OBJECT *)DeviceExtension + 19), BusRelations);
      }
    }
    else
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(DeviceExtension + 3928), 1u);
      *((POWER_STATE *)DeviceExtension + 71) = State;
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3928));
      KeLeaveCriticalRegion();
      v14 = v37;
    }
  }
  else
  {
    if ( *((_DWORD *)DeviceExtension + 59) == 2 )
      v14 = DpiDxgkDdiSetPowerState(
              *((_QWORD *)DeviceExtension + 5),
              *((_QWORD *)DeviceExtension + 6),
              0xFFFFFFFFLL,
              State.SystemState,
              v16);
    else
      v14 = v37;
    *((POWER_STATE *)DeviceExtension + 71) = State;
  }
  if ( (*((_DWORD *)DeviceExtension + 688) & 1) == 0 )
    DpiFdoDisarmWaitWake((__int64)DeviceObject);
  PoSetPowerState(DeviceObject, DevicePowerState, State);
  return v14;
}
