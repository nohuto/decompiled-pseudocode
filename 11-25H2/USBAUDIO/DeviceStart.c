/*
 * XREFs of DeviceStart @ 0x14002E730
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005368 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005F60 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x140008B38 (McTemplateK0zq_EtwWriteTransfer.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140008C50 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     DeInitSideband @ 0x14000B3A8 (DeInitSideband.c)
 *     Feature_Servicing_UACPerfIdle__private_IsEnabledDeviceUsageNoInline @ 0x14000BE30 (Feature_Servicing_UACPerfIdle__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x14000BE84 (McTemplateK0_EtwWriteTransfer.c)
 *     WPP_RECORDER_AND_TRACE_SF_l @ 0x14000C288 (WPP_RECORDER_AND_TRACE_SF_l.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqddd @ 0x14000C750 (WPP_RECORDER_AND_TRACE_SF_qqddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqddddd @ 0x14000C88C (WPP_RECORDER_AND_TRACE_SF_qqddddd.c)
 *     InitializeSideband @ 0x14000EC3C (InitializeSideband.c)
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 *     IsSidebandSupported @ 0x14002F724 (IsSidebandSupported.c)
 *     FilterCreateFilterContext @ 0x1400304D0 (FilterCreateFilterContext.c)
 *     FilterCreateFilterFactory @ 0x1400305E4 (FilterCreateFilterFactory.c)
 *     RegistryGetIdleInfo @ 0x140034014 (RegistryGetIdleInfo.c)
 *     InitializeIrpThreadAndQueue @ 0x140034E34 (InitializeIrpThreadAndQueue.c)
 */

__int64 __fastcall DeviceStart(struct _KSDEVICE *a1, __int64 a2, __int64 a3)
{
  char *Context; // rsi
  int FilterContext; // edi
  PDEVICE_OBJECT v6; // rcx
  int v7; // edx
  int v8; // r8d
  int v9; // ebx
  PDEVICE_OBJECT v10; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  struct _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  ULONG v13; // r8d
  ULONG v14; // edx
  char v15; // dl
  int v16; // edx
  PDEVICE_OBJECT v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 Timer_high; // rcx
  __int64 v21; // r8
  PULONG v22; // r9
  char v23; // dl
  int v24; // edx
  struct _IO_WORKITEM *WorkItem; // rbx
  int v26; // r8d
  struct _KEVENT *Pool2; // rax
  int v28; // edx
  int v29; // r8d
  int Handle; // [rsp+28h] [rbp-39h]
  int Handlea; // [rsp+28h] [rbp-39h]
  int v33; // [rsp+30h] [rbp-31h]
  int v34; // [rsp+30h] [rbp-31h]
  int v35; // [rsp+38h] [rbp-29h]
  void *v36; // [rsp+40h] [rbp-21h]
  __int64 v37; // [rsp+90h] [rbp+2Fh] BYREF
  int v38; // [rsp+C8h] [rbp+67h] BYREF

  Context = (char *)a1->Context;
  FilterContext = 0;
  v38 = 0;
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v36 = &WPP_2bfdcd6a21f130676fcfbe1f4e3a8945_Traceguids;
    LOWORD(v35) = 24;
    WPP_RECORDER_AND_TRACE_SF_q(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 1) != 0 )
    McTemplateK0_EtwWriteTransfer((__int64)v6, &EXBUS_DEVICE_START_ENTER, a3);
  if ( !a1->Started )
  {
    *((_DWORD *)Context + 134) = 1;
    Context[64] = 0;
    FilterContext = (*(__int64 (__fastcall **)(struct _KSDEVICE *, __int64, __int64))(pExtBusDeviceDispatchTable + 8))(
                      a1,
                      a2,
                      a3);
    if ( FilterContext < 0 )
      goto LABEL_96;
    FilterContext = FilterCreateFilterContext(a1, Context + 128);
    if ( FilterContext < 0 )
      goto LABEL_96;
    FilterContext = IsSidebandSupported(a1, &v38);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v7) = 0;
    }
    v9 = v38;
    if ( (_BYTE)v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_l(WPP_GLOBAL_Control->AttachedDevice, v7, v8, WPP_GLOBAL_Control->DeviceExtension);
    }
    if ( FilterContext < 0 )
      goto LABEL_96;
    if ( v9 )
    {
      FilterContext = InitializeSideband(a1);
      if ( FilterContext < 0 )
      {
        v10 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(a2) = 0;
        }
        LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)a2 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
        goto LABEL_76;
      }
    }
    FilterContext = FilterCreateFilterFactory(a1);
    if ( FilterContext < 0 )
      goto LABEL_96;
    IsEnabledDeviceUsageNoInline = Feature_Servicing_UACPerfIdle__private_IsEnabledDeviceUsageNoInline();
    PhysicalDeviceObject = a1->PhysicalDeviceObject;
    v38 = 0;
    v37 = 0LL;
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( (int)RegistryGetIdleInfo(PhysicalDeviceObject, (__int64)&v37, (__int64)&v37 + 4) >= 0 )
      {
        *((_DWORD *)Context + 136) = v38;
        *((_DWORD *)Context + 137) = 0;
        *((_DWORD *)Context + 138) = 0;
        *((_DWORD *)Context + 139) = v37;
        *((_DWORD *)Context + 135) = HIDWORD(v37);
      }
      if ( *((_DWORD *)Context + 270) )
      {
        v13 = *((_DWORD *)Context + 139);
        v14 = *((_DWORD *)Context + 137);
      }
      else
      {
        v13 = *((_DWORD *)Context + 138);
        v14 = *((_DWORD *)Context + 136);
      }
      *((_QWORD *)Context + 66) = PoRegisterDeviceForIdleDetection(
                                    a1->PhysicalDeviceObject,
                                    v14,
                                    v13,
                                    (DEVICE_POWER_STATE)*((_DWORD *)Context + 135));
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v15 = 0;
      }
      if ( v15 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qqddddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v15,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          Handle,
          v33,
          v35,
          (int)v36);
      if ( PoRegisterPowerSettingCallback(
             a1->PhysicalDeviceObject,
             &GUID_LOW_POWER_EPOCH,
             (PPOWER_SETTING_CALLBACK)PowerSettingCallback,
             a1,
             (PVOID *)Context + 134) < 0 )
      {
        v17 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v16) = 0;
        }
        LOBYTE(v18) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v16 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_qd(
            WPP_GLOBAL_Control->AttachedDevice,
            v16,
            v18,
            WPP_GLOBAL_Control->DeviceExtension);
      }
      FilterContext = InitializeIrpThreadAndQueue(v17, Context, v18, v19);
      if ( FilterContext < 0 )
      {
        v10 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(a2) = 0;
        }
        LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)a2 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
        goto LABEL_76;
      }
    }
    else
    {
      if ( (int)RegistryGetIdleInfo(PhysicalDeviceObject, 0LL, (__int64)&v37) >= 0 )
      {
        *((_DWORD *)Context + 136) = v38;
        *((_DWORD *)Context + 138) = HIDWORD(v37);
        *((_DWORD *)Context + 135) = v37;
      }
      v22 = PoRegisterDeviceForIdleDetection(
              a1->PhysicalDeviceObject,
              *((_DWORD *)Context + 136),
              *((_DWORD *)Context + 138),
              (DEVICE_POWER_STATE)*((_DWORD *)Context + 135));
      *((_QWORD *)Context + 66) = v22;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (Timer_high = HIDWORD(WPP_GLOBAL_Control->Timer), (Timer_high & 1) == 0)
        || (v23 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v23 = 0;
      }
      LOBYTE(v21) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v23 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qqddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v23,
          v21,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          Handlea,
          v34,
          v35,
          (int)v36);
      FilterContext = InitializeIrpThreadAndQueue(Timer_high, Context, v21, v22);
      if ( FilterContext < 0 )
      {
        v10 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(a2) = 0;
        }
        LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)a2 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
LABEL_76:
        WPP_RECORDER_AND_TRACE_SF_qd(v10->AttachedDevice, a2, a3, v10->DeviceExtension);
LABEL_96:
        KeWaitForSingleObject(Context + 760, Executive, 0, 0, 0LL);
        DeInitSideband(a1, 0);
        KeReleaseMutex((PRKMUTEX)(Context + 760), 0);
        Context[64] = 1;
        v6 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(a2) = 0;
        }
        LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
        goto LABEL_103;
      }
    }
    if ( !v9 )
      goto LABEL_103;
    WorkItem = IoAllocateWorkItem(a1->FunctionalDeviceObject);
    if ( WorkItem )
    {
      Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1700952133LL);
      *((_QWORD *)Context + 125) = Pool2;
      if ( Pool2 )
      {
        KeInitializeEvent(Pool2, NotificationEvent, 0);
        IoQueueWorkItemEx(WorkItem, SidebandCapableDeferredFilterFactoryCreate, CriticalWorkQueue, a1);
        KeWaitForSingleObject(Context + 968, Executive, 0, 0, 0LL);
        goto LABEL_103;
      }
      IoFreeWorkItem(WorkItem);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v28) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v28) = 0;
      }
      if ( (_BYTE)v28 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v29) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v28, v29, WPP_GLOBAL_Control->DeviceExtension);
      }
      FilterContext = -1073741670;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v24) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v24) = 0;
      }
      if ( (_BYTE)v24 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v26) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v24, v26, WPP_GLOBAL_Control->DeviceExtension);
      }
      FilterContext = -1073741670;
    }
    goto LABEL_96;
  }
LABEL_103:
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 1) != 0 )
    McTemplateK0zq_EtwWriteTransfer((__int64)v6, a2, a3, *((const wchar_t **)Context + 3), FilterContext);
  return (unsigned int)FilterContext;
}
