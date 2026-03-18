/*
 * XREFs of ACPIBusIrpDeviceEnumerated @ 0x1400AC190
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchForwardIrp @ 0x14001DF70 (ACPIDispatchForwardIrp.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1400307B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIQueryDeviceBiosNameEx @ 0x1400396E8 (ACPIQueryDeviceBiosNameEx.c)
 *     ACPIDebugGetIrpText @ 0x140040AF4 (ACPIDebugGetIrpText.c)
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1400ADA38 (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1400B108C (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1400B9E94 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1400C077C (ACPIQueryCacheCoherencyAttribute.c)
 */

__int64 __fastcall ACPIBusIrpDeviceEnumerated(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  char v2; // di
  unsigned __int8 MinorFunction; // r13
  __int64 DeviceExtension; // rax
  const char *v7; // rbp
  ULONG_PTR v8; // rbx
  const signed __int64 *v9; // r14
  int v10; // esi
  __int64 v11; // rcx
  char *v12; // rax
  const char *v13; // r8
  char *IrpText; // rax
  const char *v16; // r8
  char v17; // r10
  const char *v18; // r11
  __int64 v19; // rcx
  char *v20; // rax
  const char *v21; // r8
  const char *v22; // r10
  __int64 v23; // rcx
  char *v24; // rax
  const char *v25; // r8
  struct _UNICODE_STRING Data; // [rsp+60h] [rbp-38h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+10h] BYREF

  v2 = 0;
  Data = 0LL;
  v27 = 0LL;
  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  v7 = byte_1400753E8;
  v8 = DeviceExtension;
  v9 = (const signed __int64 *)(DeviceExtension + 8);
  if ( !DeviceExtension )
  {
    v10 = -1073741823;
    goto LABEL_3;
  }
  ACPIQueryPhysicalDeviceLocation(DeviceExtension);
  if ( !_bittest64(v9, 0x33u) && (int)ACPIQueryDeviceBiosNameEx(*(_QWORD *)(v8 + 768), 1LL, &Data) >= 0 && Data.Buffer )
  {
    IoSetDevicePropertyData(
      *(PDEVICE_OBJECT *)(v8 + 784),
      &DEVPKEY_Device_BiosDeviceName,
      0,
      0,
      0x12u,
      Data.Length + 2,
      Data.Buffer);
    ExFreePoolWithTag(Data.Buffer, 0x53706341u);
  }
  if ( (*v9 & 0x102000000LL) != 0
    && (int)AcpiQueryPciDeviceChassisLabel(v8) < 0
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(*v9, 0x19u);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0x1Au,
      (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
      (char)Irp,
      IrpText,
      v17,
      v8,
      v18,
      v16);
  }
  if ( *(_QWORD *)(v8 + 792) == RootDeviceExtension )
  {
    v10 = ACPIQueryCacheCoherencyAttribute(v8);
    if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = ACPIDebugGetIrpText(v19, 0x19u);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x1Bu,
        (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
        (char)Irp,
        v20,
        v10,
        v8,
        v22,
        v21);
    }
  }
  else
  {
    v10 = 0;
  }
  if ( (*v9 & 0x40) != 0 )
  {
    AcpiGetDriverProxyEndpoint(&v27, (__int64)ACPIFilterIrpDeviceEnumeratedCompletion);
    v10 = ACPIIrpSetPagableCompletionRoutineAndForward(DeviceObject, Irp, 1, 0, 0);
    if ( v10 < 0 )
    {
      if ( (*v9 & 0x200000000000LL) != 0 )
        v7 = *(const char **)(v8 + 608);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v24 = ACPIDebugGetIrpText(v23, 0x19u);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x1Cu,
          (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
          (char)Irp,
          v24,
          v10,
          v8,
          v7,
          v25);
      }
    }
    return (unsigned int)v10;
  }
  if ( (*v9 & 0x10) == 0 )
  {
LABEL_3:
    Irp->IoStatus.Status = v10;
    IofCompleteRequest(Irp, 0);
    if ( v8 )
    {
      v2 = v8;
      if ( (*v9 & 0x200000000000LL) != 0 )
        v7 = *(const char **)(v8 + 608);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = ACPIDebugGetIrpText(v11, MinorFunction);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        5u,
        0x1Du,
        (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
        (char)Irp,
        v12,
        v10,
        v2,
        v7,
        v13);
    }
    return (unsigned int)v10;
  }
  return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
}
