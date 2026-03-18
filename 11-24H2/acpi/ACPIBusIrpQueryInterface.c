/*
 * XREFs of ACPIBusIrpQueryInterface @ 0x140043A60
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     AcpiDeviceResetInterface @ 0x14004ABF0 (AcpiDeviceResetInterface.c)
 *     AcpiPccEjectInterface @ 0x140050E7C (AcpiPccEjectInterface.c)
 *     AcpiFanEjectInterface @ 0x140060424 (AcpiFanEjectInterface.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     AcpiArblibEjectInterface @ 0x14009B01C (AcpiArblibEjectInterface.c)
 *     ACPIBusReenumerateSelfInterface @ 0x14009BE60 (ACPIBusReenumerateSelfInterface.c)
 *     ACPICacheCoherencyInterface @ 0x14009BF30 (ACPICacheCoherencyInterface.c)
 *     ACPIEjectPartitionUnitInterface @ 0x14009F3E8 (ACPIEjectPartitionUnitInterface.c)
 *     PciBusEjectInterface @ 0x1400A0E00 (PciBusEjectInterface.c)
 *     AcpiSdevIdentifierInterface @ 0x1400A7328 (AcpiSdevIdentifierInterface.c)
 *     AcpiEjectBusNumberTranslator @ 0x1400A7D88 (AcpiEjectBusNumberTranslator.c)
 *     TranslateEjectInterface @ 0x1400A84F8 (TranslateEjectInterface.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1400AFEF4 (ACPIInternalSendSynchronousIrp.c)
 *     ACPIEjectPnpLocationInterface @ 0x1400B0BC4 (ACPIEjectPnpLocationInterface.c)
 *     ACPIBusIommuBusInterface @ 0x1400B0E50 (ACPIBusIommuBusInterface.c)
 *     IsPciBus @ 0x1400B46A8 (IsPciBus.c)
 */

__int64 __fastcall ACPIBusIrpQueryInterface(_NAMED_PIPE_CREATE_PARAMETERS *BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int Status; // ebx
  __int64 DeviceExtension; // rax
  GUID *SecurityContext; // rdi
  unsigned int EaLength; // r12d
  __int64 v9; // r13
  unsigned int Size; // ebx
  _QWORD *QuadPart; // rdi
  GUID *v12; // rdx
  int v13; // eax
  GUID *v14; // rdx
  __int64 v15; // rax
  struct _DEVICE_OBJECT *v16; // rcx
  unsigned int v18; // ebx
  _QWORD *v19; // rdi
  bool v20; // cc
  unsigned int v21; // ebx
  __int128 Src; // [rsp+20h] [rbp-60h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+30h] [rbp-50h]
  __int64 (__fastcall *v24)(); // [rsp+38h] [rbp-48h]
  __int64 (__fastcall *v25)(); // [rsp+40h] [rbp-40h]
  __int64 (__fastcall *v26)(); // [rsp+48h] [rbp-38h]
  __int64 (__fastcall *v27)(__int64, unsigned int *); // [rsp+50h] [rbp-30h]
  __int64 (__fastcall *v28)(__int64, unsigned int *); // [rsp+58h] [rbp-28h]
  __int64 (__fastcall *v29)(); // [rsp+60h] [rbp-20h]
  __int64 (__fastcall *v30)(); // [rsp+68h] [rbp-18h]
  __int64 (__fastcall *v31)(); // [rsp+70h] [rbp-10h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Status = -1073741637;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)BugCheckParameter3);
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  v9 = DeviceExtension;
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_ACPI_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    Size = 88;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x58u )
      Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    v24 = AcpiInterfaceDereference;
    v23 = AcpiInterfaceDereference;
    Src = ACPIInterfaceTable;
    v25 = (__int64 (__fastcall *)())&ACPIVectorConnect;
    v26 = (__int64 (__fastcall *)())ACPIVectorDisconnect;
    v27 = ACPIVectorEnable;
    v28 = ACPIVectorDisable;
    v29 = ACPIVectorClear;
    v30 = ACPIRegisterForDeviceNotifications;
    v31 = ACPIUnregisterForDeviceNotifications;
    memmove(QuadPart, &Src, Size);
    if ( Size > 0x10 )
      QuadPart[1] = BugCheckParameter3;
  }
  else
  {
    if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD2
      || RtlCompareMemory(SecurityContext, &GUID_ACPI_INTERFACE_STANDARD2, 0x10uLL) == 16 )
    {
      v21 = 88;
      if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x58u )
        v21 = CurrentStackLocation->Parameters.QueryInterface.Size;
      v19 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
      v24 = AcpiInterfaceDereference;
      v23 = AcpiInterfaceDereference;
      Src = ACPIInterfaceTable;
      v25 = (__int64 (__fastcall *)())ACPIVectorConnect2;
      v26 = (__int64 (__fastcall *)())&ACPIVectorDisconnect2;
      v27 = (__int64 (__fastcall *)(__int64, unsigned int *))ACPIVectorEnable2;
      v28 = (__int64 (__fastcall *)(__int64, unsigned int *))ACPIVectorDisable2;
      v29 = ACPIVectorClear2;
      v30 = ACPIRegisterForDeviceNotifications2;
      v31 = ACPIUnregisterForDeviceNotifications2;
      memmove(v19, &Src, v21);
      v20 = v21 <= 0x10;
    }
    else
    {
      v12 = &GUID_TRANSLATOR_INTERFACE_STANDARD;
      if ( SecurityContext == &GUID_TRANSLATOR_INTERFACE_STANDARD
        || RtlCompareMemory(SecurityContext, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16 )
      {
        if ( ((EaLength - 1) & 0xFFFFFFF9) == 0 && EaLength != 5 )
        {
          if ( !(unsigned __int8)IsPciBus(BugCheckParameter3, v12) )
            goto LABEL_37;
          v13 = TranslateEjectInterface(BugCheckParameter3, Irp);
          goto LABEL_36;
        }
        if ( EaLength == 6
          && (unsigned __int8)IsPciBus(BugCheckParameter3, v12)
          && (AcpiOverrideAttributes & 0x1000) == 0 )
        {
          v13 = AcpiEjectBusNumberTranslator(BugCheckParameter3, Irp);
          goto LABEL_36;
        }
        goto LABEL_37;
      }
      v14 = &GUID_PCI_BUS_INTERFACE_STANDARD;
      if ( SecurityContext == &GUID_PCI_BUS_INTERFACE_STANDARD
        || RtlCompareMemory(SecurityContext, &GUID_PCI_BUS_INTERFACE_STANDARD, 0x10uLL) == 16
        || (v14 = &GUID_PCI_BUS_INTERFACE_STANDARD2, SecurityContext == &GUID_PCI_BUS_INTERFACE_STANDARD2)
        || RtlCompareMemory(SecurityContext, &GUID_PCI_BUS_INTERFACE_STANDARD2, 0x10uLL) == 16 )
      {
        if ( (unsigned __int8)IsPciBus(BugCheckParameter3, v14) )
        {
          v13 = PciBusEjectInterface(BugCheckParameter3, Irp);
          goto LABEL_36;
        }
        goto LABEL_37;
      }
      if ( SecurityContext == &GUID_BUS_INTERFACE_STANDARD
        || RtlCompareMemory(SecurityContext, &GUID_BUS_INTERFACE_STANDARD, 0x10uLL) == 16 )
      {
        Irp->IoStatus.Status = -1073741127;
        v15 = *(_QWORD *)(v9 + 792);
        if ( v15 )
        {
          v16 = *(struct _DEVICE_OBJECT **)(v15 + 768);
          if ( v16 )
          {
            if ( v15 == RootDeviceExtension )
              CurrentStackLocation->Parameters.CreatePipe.Parameters = BugCheckParameter3;
            Irp->IoStatus.Status = ACPIInternalSendSynchronousIrp(v16);
          }
        }
        goto LABEL_41;
      }
      if ( SecurityContext == &GUID_ARBITER_INTERFACE_STANDARD
        || RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) == 16 )
      {
        if ( _bittest64((const signed __int64 *)(v9 + 8), 0x25u) && *(_BYTE *)(v9 + 184) )
        {
          v13 = AcpiArblibEjectInterface(BugCheckParameter3, Irp);
          goto LABEL_35;
        }
        goto LABEL_37;
      }
      if ( SecurityContext == &GUID_PARTITION_UNIT_INTERFACE_STANDARD
        || RtlCompareMemory(SecurityContext, &GUID_PARTITION_UNIT_INTERFACE_STANDARD, 0x10uLL) == 16 )
      {
        if ( _bittest64((const signed __int64 *)(v9 + 8), 0x25u) )
        {
          v13 = ACPIEjectPartitionUnitInterface(BugCheckParameter3, Irp);
          goto LABEL_35;
        }
        goto LABEL_37;
      }
      if ( SecurityContext == &GUID_PCC_INTERFACE_STANDARD
        || RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_STANDARD, 0x10uLL) == 16 )
      {
        v13 = AcpiPccEjectInterface((ULONG_PTR)BugCheckParameter3);
        goto LABEL_35;
      }
      if ( SecurityContext != &GUID_D3COLD_SUPPORT_INTERFACE
        && RtlCompareMemory(SecurityContext, &GUID_D3COLD_SUPPORT_INTERFACE, 0x10uLL) != 16 )
      {
        if ( SecurityContext == &GUID_THERMAL_COOLING_INTERFACE
          || RtlCompareMemory(SecurityContext, &GUID_THERMAL_COOLING_INTERFACE, 0x10uLL) == 16 )
        {
          if ( _bittest64((const signed __int64 *)(v9 + 1120), 0x21u) )
          {
            v13 = AcpiFanEjectInterface(BugCheckParameter3, Irp);
            goto LABEL_35;
          }
        }
        else
        {
          if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
            || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
          {
            v13 = ACPIEjectPnpLocationInterface(BugCheckParameter3, Irp);
LABEL_35:
            Irp->IoStatus.Status = v13;
LABEL_36:
            Status = v13;
            goto LABEL_37;
          }
          if ( SecurityContext == &GUID_DMA_CACHE_COHERENCY_INTERFACE
            || RtlCompareMemory(SecurityContext, &GUID_DMA_CACHE_COHERENCY_INTERFACE, 0x10uLL) == 16 )
          {
            v13 = ACPICacheCoherencyInterface(v9, CurrentStackLocation);
            goto LABEL_35;
          }
          if ( SecurityContext == &GUID_DEVICE_RESET_INTERFACE_STANDARD
            || RtlCompareMemory(SecurityContext, &GUID_DEVICE_RESET_INTERFACE_STANDARD, 0x10uLL) == 16 )
          {
            v13 = AcpiDeviceResetInterface(BugCheckParameter3, Irp, 0LL, 0LL);
            goto LABEL_35;
          }
          if ( SecurityContext == &GUID_REENUMERATE_SELF_INTERFACE_STANDARD
            || RtlCompareMemory(SecurityContext, &GUID_REENUMERATE_SELF_INTERFACE_STANDARD, 0x10uLL) == 16 )
          {
            v13 = ACPIBusReenumerateSelfInterface(v9, CurrentStackLocation);
            goto LABEL_35;
          }
          if ( SecurityContext == &GUID_IOMMU_BUS_INTERFACE
            || RtlCompareMemory(SecurityContext, &GUID_IOMMU_BUS_INTERFACE, 0x10uLL) == 16 )
          {
            v13 = ACPIBusIommuBusInterface((ULONG_PTR)BugCheckParameter3);
            goto LABEL_35;
          }
          if ( SecurityContext == &GUID_SDEV_IDENTIFIER_INTERFACE
            || RtlCompareMemory(SecurityContext, &GUID_SDEV_IDENTIFIER_INTERFACE, 0x10uLL) == 16 )
          {
            v13 = AcpiSdevIdentifierInterface(BugCheckParameter3, CurrentStackLocation);
            goto LABEL_36;
          }
        }
LABEL_37:
        if ( Status != -1073741637 )
          goto LABEL_38;
LABEL_41:
        Status = Irp->IoStatus.Status;
        goto LABEL_42;
      }
      v18 = 72;
      if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x48u )
        v18 = CurrentStackLocation->Parameters.QueryInterface.Size;
      v19 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
      v23 = AcpiInterfaceDereference;
      v24 = AcpiInterfaceDereference;
      Src = D3Interface;
      v25 = AcpiSetD3ColdSupport;
      v26 = AcpiGetIdleWakeInfo;
      v27 = (__int64 (__fastcall *)(__int64, unsigned int *))AcpiGetD3ColdCapability;
      v28 = (__int64 (__fastcall *)(__int64, unsigned int *))AcpiGetBusDriverD3ColdSupport;
      v29 = AcpiGetLastTransitionStatus;
      memmove(v19, &Src, v18);
      v20 = v18 <= 0x10;
    }
    if ( !v20 )
      v19[1] = v9;
  }
  Status = 0;
LABEL_38:
  Irp->IoStatus.Status = Status;
LABEL_42:
  IofCompleteRequest(Irp, 0);
  return Status;
}
