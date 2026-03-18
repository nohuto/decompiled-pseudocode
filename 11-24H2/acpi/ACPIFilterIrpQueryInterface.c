/*
 * XREFs of ACPIFilterIrpQueryInterface @ 0x1400B0590
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchForwardIrp @ 0x14001DF70 (ACPIDispatchForwardIrp.c)
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     AcpiSdevIdentifierInterface @ 0x1400A7328 (AcpiSdevIdentifierInterface.c)
 *     ACPIFilterIrpQueryPnpLocationInterface @ 0x1400B0A98 (ACPIFilterIrpQueryPnpLocationInterface.c)
 *     ACPIFilterIrpQueryIommuInterface @ 0x1400B0D20 (ACPIFilterIrpQueryIommuInterface.c)
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1400B108C (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 */

__int64 __fastcall ACPIFilterIrpQueryInterface(struct _DEVICE_OBJECT *BugCheckParameter3, PIRP Irp)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v6; // r15
  GUID *SecurityContext; // rbx
  unsigned int v9; // ebx
  _QWORD *v10; // r14
  int v11; // ebx
  unsigned int v12; // ebx
  _QWORD *v13; // r14
  unsigned int Size; // ebx
  _QWORD *QuadPart; // r14
  __int128 Src; // [rsp+40h] [rbp-29h] BYREF
  __int128 v17; // [rsp+50h] [rbp-19h] BYREF
  __int128 v18; // [rsp+60h] [rbp-9h] BYREF
  __int128 v19; // [rsp+70h] [rbp+7h] BYREF
  __int128 v20; // [rsp+80h] [rbp+17h] BYREF
  _QWORD v21[2]; // [rsp+90h] [rbp+27h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+6Fh] BYREF

  v22 = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)BugCheckParameter3);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = DeviceExtension;
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_ACPI_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    Size = 88;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x58u )
      Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    Src = ACPIInterfaceTable;
    v18 = *(_OWORD *)&off_1400740F0;
    v20 = *(_OWORD *)off_140074110;
    v17 = *(_OWORD *)off_1400740E0;
    v21[0] = ACPIUnregisterForDeviceNotifications;
    v19 = *(_OWORD *)off_140074100;
    AcpiGetDriverProxyEndpoint((_QWORD *)&v17 + 1, (__int64)AcpiInterfaceDereference);
    AcpiGetDriverProxyEndpoint(&v17, (__int64)AcpiInterfaceDereference);
    AcpiGetDriverProxyEndpoint(&v18, (__int64)ACPIVectorConnect);
    AcpiGetDriverProxyEndpoint((_QWORD *)&v18 + 1, (__int64)ACPIVectorDisconnect);
    AcpiGetDriverProxyEndpoint(&v19, (__int64)ACPIVectorEnable);
    AcpiGetDriverProxyEndpoint((_QWORD *)&v19 + 1, (__int64)ACPIVectorDisable);
    AcpiGetDriverProxyEndpoint(&v20, (__int64)ACPIVectorClear);
    AcpiGetDriverProxyEndpoint((_QWORD *)&v20 + 1, (__int64)ACPIRegisterForDeviceNotifications);
    AcpiGetDriverProxyEndpoint(v21, (__int64)ACPIUnregisterForDeviceNotifications);
    memmove(QuadPart, &Src, Size);
    if ( Size > 0x10 )
      QuadPart[1] = BugCheckParameter3;
    goto LABEL_34;
  }
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD2
    || RtlCompareMemory(SecurityContext, &GUID_ACPI_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    v12 = 88;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x58u )
      v12 = CurrentStackLocation->Parameters.QueryInterface.Size;
    Src = ACPIInterfaceTable;
    v18 = *(_OWORD *)&off_1400740F0;
    v20 = *(_OWORD *)off_140074110;
    v17 = *(_OWORD *)off_1400740E0;
    v21[0] = ACPIUnregisterForDeviceNotifications;
    v19 = *(_OWORD *)off_140074100;
    AcpiGetDriverProxyEndpoint((_QWORD *)&v17 + 1, (__int64)AcpiInterfaceDereference);
    AcpiGetDriverProxyEndpoint(&v17, (__int64)AcpiInterfaceDereference);
    AcpiGetDriverProxyEndpoint(&v18, (__int64)ACPIVectorConnect2);
    AcpiGetDriverProxyEndpoint((_QWORD *)&v18 + 1, (__int64)ACPIVectorDisconnect2);
    AcpiGetDriverProxyEndpoint(&v19, (__int64)ACPIVectorEnable2);
    AcpiGetDriverProxyEndpoint((_QWORD *)&v19 + 1, (__int64)ACPIVectorDisable2);
    AcpiGetDriverProxyEndpoint(&v20, (__int64)ACPIVectorClear2);
    AcpiGetDriverProxyEndpoint((_QWORD *)&v20 + 1, (__int64)ACPIRegisterForDeviceNotifications2);
    AcpiGetDriverProxyEndpoint(v21, (__int64)ACPIUnregisterForDeviceNotifications2);
    v13 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v13, &Src, v12);
    if ( v12 > 0x10 )
      v13[1] = v6;
LABEL_34:
    v11 = 0;
    goto LABEL_35;
  }
  if ( SecurityContext == &GUID_D3COLD_SUPPORT_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_D3COLD_SUPPORT_INTERFACE, 0x10uLL) == 16 )
  {
    v9 = 72;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x48u )
      v9 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v10 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    Src = D3Interface;
    v18 = *(_OWORD *)off_140074060;
    v17 = *(_OWORD *)off_140074050;
    *(_QWORD *)&v20 = AcpiGetLastTransitionStatus;
    v19 = *(_OWORD *)off_140074070;
    AcpiGetDriverProxyEndpoint(&v17, (__int64)AcpiInterfaceDereference);
    AcpiGetDriverProxyEndpoint((_QWORD *)&v17 + 1, (__int64)AcpiInterfaceDereference);
    AcpiGetDriverProxyEndpoint(&v18, (__int64)AcpiSetD3ColdSupport);
    AcpiGetDriverProxyEndpoint((_QWORD *)&v18 + 1, (__int64)AcpiGetIdleWakeInfo);
    AcpiGetDriverProxyEndpoint(&v19, (__int64)AcpiGetD3ColdCapability);
    AcpiGetDriverProxyEndpoint((_QWORD *)&v19 + 1, (__int64)AcpiGetBusDriverD3ColdSupport);
    AcpiGetDriverProxyEndpoint(&v20, (__int64)AcpiGetLastTransitionStatus);
    memmove(v10, &Src, v9);
    if ( v9 > 0x10 )
      v10[1] = v6;
    Irp->IoStatus.Status = 0;
    return ACPIDispatchForwardIrp((ULONG_PTR)BugCheckParameter3, Irp);
  }
  if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    return ACPIFilterIrpQueryPnpLocationInterface(BugCheckParameter3, Irp);
  }
  if ( SecurityContext == &GUID_DEVICE_RESET_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_DEVICE_RESET_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    AcpiGetDriverProxyEndpoint(&v22, (__int64)AcpiDeviceResetInterface);
    return ACPIIrpSetPagableCompletionRoutineAndForward(BugCheckParameter3, Irp, 1, 1, 1);
  }
  if ( SecurityContext != &GUID_SDEV_IDENTIFIER_INTERFACE
    && RtlCompareMemory(SecurityContext, &GUID_SDEV_IDENTIFIER_INTERFACE, 0x10uLL) != 16 )
  {
    if ( SecurityContext == &GUID_IOMMU_BUS_INTERFACE
      || RtlCompareMemory(SecurityContext, &GUID_IOMMU_BUS_INTERFACE, 0x10uLL) == 16 )
    {
      return ACPIFilterIrpQueryIommuInterface((ULONG_PTR)BugCheckParameter3, Irp);
    }
    return ACPIDispatchForwardIrp((ULONG_PTR)BugCheckParameter3, Irp);
  }
  v11 = AcpiSdevIdentifierInterface((ULONG_PTR)BugCheckParameter3, (__int64)CurrentStackLocation);
  if ( v11 == -1073741637 )
    return ACPIDispatchForwardIrp((ULONG_PTR)BugCheckParameter3, Irp);
LABEL_35:
  Irp->IoStatus.Status = v11;
  if ( v11 >= 0 )
    return ACPIDispatchForwardIrp((ULONG_PTR)BugCheckParameter3, Irp);
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v11;
}
