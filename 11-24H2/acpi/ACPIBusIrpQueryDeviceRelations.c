/*
 * XREFs of ACPIBusIrpQueryDeviceRelations @ 0x1400B4C70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1400307B0 (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_qsdqss @ 0x14004020C (WPP_RECORDER_SF_qsdqss.c)
 *     ACPIDebugGetIrpText @ 0x140040AF4 (ACPIDebugGetIrpText.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1400482A0 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIBusIrpQueryTargetRelation @ 0x1400B4EDC (ACPIBusIrpQueryTargetRelation.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1400B50A8 (ACPIBusIrpQueryBusRelations.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1400B529C (ACPIBusAndFilterIrpQueryEjectRelations.c)
 */

__int64 __fastcall ACPIBusIrpQueryDeviceRelations(PVOID Object, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  unsigned __int8 MinorFunction; // r12
  __int64 DeviceExtension; // rax
  __int64 v7; // rcx
  unsigned int Length; // ebx
  const char *v9; // r15
  char v10; // bp
  __int64 v11; // rsi
  int RemovalRelations; // eax
  unsigned int Status; // ebx
  __int64 v14; // rcx
  char *v16; // rax
  const char *v17; // r8
  char *IrpText; // rax
  __int64 v19; // rdx
  const char *v20; // r8
  char v21; // r10
  const char *v22; // r11
  unsigned __int64 Information; // [rsp+98h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Information = Irp->IoStatus.Information;
  MinorFunction = CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  Length = CurrentStackLocation->Parameters.Read.Length;
  v9 = byte_1400753E8;
  v10 = 0;
  v11 = DeviceExtension;
  if ( Length )
  {
    switch ( Length )
    {
      case 1u:
        RemovalRelations = ACPIBusAndFilterIrpQueryEjectRelations(Object, Irp, &Information);
        break;
      case 3u:
        RemovalRelations = ACPIBusAndFilterIrpQueryRemovalRelations((ULONG_PTR)Object, (PVOID *)&Information);
        break;
      case 4u:
        RemovalRelations = ACPIBusIrpQueryTargetRelation(Object);
        break;
      default:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          IrpText = ACPIDebugGetIrpText(v7, MinorFunction);
          WPP_RECORDER_SF_qsdqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v19,
            (__int64)v20,
            0x24u,
            (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
            (char)Irp,
            IrpText,
            Length,
            v21,
            v22,
            v20);
        }
LABEL_17:
        Status = Irp->IoStatus.Status;
        goto LABEL_8;
    }
  }
  else
  {
    RemovalRelations = ACPIBusIrpQueryBusRelations(Object, Irp, &Information);
  }
  Status = RemovalRelations;
  if ( RemovalRelations < 0 )
  {
    if ( RemovalRelations != -1073741637 && !Information )
    {
      Irp->IoStatus.Status = RemovalRelations;
      Irp->IoStatus.Information = 0LL;
      goto LABEL_8;
    }
    goto LABEL_17;
  }
  Irp->IoStatus.Status = RemovalRelations;
  Irp->IoStatus.Information = Information;
LABEL_8:
  IofCompleteRequest(Irp, 0);
  if ( v11 )
  {
    v10 = v11;
    if ( (*(_QWORD *)(v11 + 8) & 0x200000000000LL) != 0 )
      v9 = *(const char **)(v11 + 608);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = ACPIDebugGetIrpText(v14, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x25u,
      (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
      (char)Irp,
      v16,
      Status,
      v10,
      v9,
      v17);
  }
  return Status;
}
