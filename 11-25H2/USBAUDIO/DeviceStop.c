/*
 * XREFs of DeviceStop @ 0x14002EF70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005368 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140008C50 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     DeInitSideband @ 0x14000B3A8 (DeInitSideband.c)
 *     ExitIrpThreadAndQueue @ 0x14000BD08 (ExitIrpThreadAndQueue.c)
 *     Feature_Servicing_UACPerfIdle__private_IsEnabledDeviceUsageNoInline @ 0x14000BE30 (Feature_Servicing_UACPerfIdle__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x14000BE84 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000BEC8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 */

void __fastcall DeviceStop(PKSDEVICE Device, __int64 a2, __int64 a3)
{
  char *Context; // rdi
  int v5; // esi
  PDEVICE_OBJECT v6; // rcx
  bool v7; // dl
  void *v8; // rcx
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // r8
  void *v13; // rcx
  struct _KSFILTERFACTORY *v14; // rcx

  Context = (char *)Device->Context;
  v5 = 0;
  v6 = WPP_GLOBAL_Control;
  v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(WPP_GLOBAL_Control->AttachedDevice, v7, a3, WPP_GLOBAL_Control->DeviceExtension);
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 2) != 0 )
    McTemplateK0_EtwWriteTransfer((__int64)v6, &EXBUS_DEVICE_STOP_ENTER, a3);
  if ( !Context[64] )
  {
    Context[64] = 1;
    ExitIrpThreadAndQueue((__int64)Context);
  }
  if ( (unsigned int)Feature_Servicing_UACPerfIdle__private_IsEnabledDeviceUsageNoInline() )
  {
    v8 = (void *)*((_QWORD *)Context + 134);
    if ( v8 )
    {
      if ( PoUnregisterPowerSettingCallback(v8) < 0 )
      {
        LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, v9, v10, WPP_GLOBAL_Control->DeviceExtension);
        }
      }
    }
  }
  KeWaitForSingleObject(Context + 760, Executive, 0, 0, 0LL);
  DeInitSideband(Device, 2);
  KeReleaseMutex((PRKMUTEX)(Context + 760), 0);
  v13 = (void *)*((_QWORD *)Context + 125);
  if ( v13 )
  {
    KeWaitForSingleObject(v13, Executive, 0, 0, 0LL);
    ExFreePoolWithTag(*((PVOID *)Context + 125), 0x65627845u);
    *((_QWORD *)Context + 125) = 0LL;
  }
  if ( !Context[67] )
    v5 = (*(__int64 (__fastcall **)(PKSDEVICE))(pExtBusDeviceDispatchTable + 16))(Device);
  v14 = (struct _KSFILTERFACTORY *)*((_QWORD *)Context + 15);
  if ( v14 )
  {
    KsFilterFactorySetDeviceClassesState(v14, 0);
    *((_QWORD *)Context + 15) = 0LL;
  }
  if ( v5 < 0 )
  {
    v14 = (struct _KSFILTERFACTORY *)WPP_GLOBAL_Control;
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, v11, v12, WPP_GLOBAL_Control->DeviceExtension);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 2) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)v14, v11, v12, v5);
}
