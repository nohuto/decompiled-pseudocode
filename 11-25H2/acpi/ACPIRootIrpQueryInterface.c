/*
 * XREFs of ACPIRootIrpQueryInterface @ 0x1400B0340
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchForwardIrp @ 0x14001DF70 (ACPIDispatchForwardIrp.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1400307B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x140040AF4 (ACPIDebugGetIrpText.c)
 *     AcpiPccEjectInterface @ 0x140050E7C (AcpiPccEjectInterface.c)
 *     IrqTranslatorEjectInterface @ 0x1400975B0 (IrqTranslatorEjectInterface.c)
 *     AcpiIrqLibEjectArbiterInterface @ 0x140098C5C (AcpiIrqLibEjectArbiterInterface.c)
 *     ACPIEjectPnpLocationInterface @ 0x1400B0BC4 (ACPIEjectPnpLocationInterface.c)
 */

__int64 __fastcall ACPIRootIrpQueryInterface(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v5; // r15
  __int64 v6; // rcx
  unsigned __int8 MinorFunction; // r12
  unsigned int EaLength; // ebp
  GUID *SecurityContext; // rbx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int Status; // ebx
  int v14; // eax
  char *IrpText; // rax
  const char *v16; // r8
  const char *v17; // r10
  char v18; // r11

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = 1;
  ACPIInternalGetDeviceExtension(BugCheckParameter3);
  MinorFunction = CurrentStackLocation->MinorFunction;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( (SecurityContext == &GUID_ARBITER_INTERFACE_STANDARD
     || RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) == 16)
    && EaLength == 2 )
  {
    v10 = AcpiIrqLibEjectArbiterInterface(v6, (__int64)Irp);
LABEL_4:
    Irp->IoStatus.Status = v10;
    goto LABEL_5;
  }
  if ( (SecurityContext == &GUID_TRANSLATOR_INTERFACE_STANDARD
     || RtlCompareMemory(SecurityContext, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16)
    && EaLength == 2 )
  {
    v10 = IrqTranslatorEjectInterface(*(_QWORD *)(RootDeviceExtension + 784));
    goto LABEL_4;
  }
  if ( SecurityContext == &GUID_PCC_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    v14 = AcpiPccEjectInterface(BugCheckParameter3, (__int64)Irp);
    Irp->IoStatus.Status = v14;
    v11 = v14 + 0x80000000;
    if ( (int)v11 >= 0 && v14 != -1073741637 )
      v5 = 0;
  }
  else if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
         || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    v10 = ACPIEjectPnpLocationInterface(BugCheckParameter3, Irp);
    goto LABEL_4;
  }
LABEL_5:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v11, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x14u,
      (__int64)&WPP_407264dfc63035306de6021495d93ce2_Traceguids,
      (char)Irp,
      IrpText,
      Irp->IoStatus.Status,
      v18,
      v16,
      v17);
  }
  if ( v5 )
  {
    return (unsigned int)ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
  }
  else
  {
    Status = Irp->IoStatus.Status;
    IofCompleteRequest(Irp, 0);
  }
  return Status;
}
