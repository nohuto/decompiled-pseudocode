/*
 * XREFs of UsbhFdoSelectConfigurationPdo @ 0x14000BE94
 * Callers:
 *     UsbhFdoUrbPdoFilter @ 0x14000AF60 (UsbhFdoUrbPdoFilter.c)
 *     UsbhPdoInternalDeviceControl @ 0x14000B2A0 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x140015600 (UsbhDecPdoIoCount.c)
 *     WPP_RECORDER_SF_q @ 0x14003DEE0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x14003E19C (WPP_RECORDER_SF_qd.c)
 *     UsbhValidateConfigurationDescriptor @ 0x14005B174 (UsbhValidateConfigurationDescriptor.c)
 */

NTSTATUS __fastcall UsbhFdoSelectConfigurationPdo(PDEVICE_OBJECT DeviceObject, PVOID Context, PIRP Irp)
{
  PDEVICE_OBJECT *v6; // r13
  _DWORD *v7; // r12
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 PortData; // rax
  __int64 v11; // rdi
  _IO_SECURITY_CONTEXT *SecurityContext; // rbp
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // r14
  int v14; // edx
  int v15; // edx
  unsigned int Length_low; // eax
  int v17; // edi
  int v18; // eax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v20; // rax
  int v22; // [rsp+98h] [rbp+20h] BYREF

  v22 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      17,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      (char)Context);
  v6 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
  v7 = PdoExt((__int64)Context);
  PortData = UsbhGetPortData((__int64)DeviceObject, *((unsigned __int16 *)v7 + 714), v8, v9);
  v11 = PortData;
  if ( !PortData )
  {
    v17 = -1073741811;
LABEL_21:
    Irp->IoStatus.Status = v17;
    IofCompleteRequest(Irp, 0);
    UsbhDecPdoIoCount((ULONG_PTR)Context, (ULONG_PTR)Irp);
    return v17;
  }
  SecurityContext = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  SecurityQos = SecurityContext[1].SecurityQos;
  if ( SecurityQos )
  {
    if ( !(unsigned __int8)UsbhValidateConfigurationDescriptor(
                             SecurityContext[1].SecurityQos,
                             HIWORD(SecurityQos->Length),
                             &v22,
                             0LL) )
    {
      v15 = v22;
      Length_low = 9;
      HIDWORD(SecurityContext->SecurityQos) = v22;
      if ( LOBYTE(SecurityQos->Length) < 9u )
        Length_low = LOBYTE(SecurityQos->Length);
      v17 = -1073741811;
      UsbhException(
        (__int64)DeviceObject,
        *((unsigned __int16 *)v7 + 714),
        33LL,
        SecurityQos,
        Length_low,
        -1073741811,
        v15,
        usbfile_hub_c,
        2550,
        0);
      goto LABEL_21;
    }
    v18 = 2 * SecurityQos->ContextTrackingMode;
    *(_DWORD *)(v11 + 432) = v18;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qd(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        0,
        18,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
        (char)Context,
        v18);
    if ( *(_DWORD *)(v11 + 432) > *((_DWORD *)v6 + 758) )
    {
      HIDWORD(SecurityContext->SecurityQos) = -1073737728;
      _InterlockedExchange((volatile __int32 *)(v11 + 428), 5);
      v17 = -1073741670;
      UsbhException(
        (__int64)DeviceObject,
        *((unsigned __int16 *)v7 + 714),
        35LL,
        SecurityQos,
        9u,
        -1073741670,
        HIDWORD(SecurityContext->SecurityQos),
        usbfile_hub_c,
        2573,
        0);
      goto LABEL_21;
    }
  }
  else
  {
    *(_DWORD *)(PortData + 432) = 0;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(DeviceObject, Irp, UsbhSelectConfigOrInterfaceComplete, Context, 1u, 1u, 1u) < 0 )
  {
    v20 = Irp->Tail.Overlay.CurrentStackLocation;
    v20[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhSelectConfigOrInterfaceComplete;
    v20[-1].Context = Context;
    v20[-1].Control = -32;
  }
  return IofCallDriver(v6[152], Irp);
}
