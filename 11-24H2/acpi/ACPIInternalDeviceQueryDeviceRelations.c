/*
 * XREFs of ACPIInternalDeviceQueryDeviceRelations @ 0x1400B4A80
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1400307B0 (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_qsdqss @ 0x14004020C (WPP_RECORDER_SF_qsdqss.c)
 *     ACPIDebugGetIrpText @ 0x140040AF4 (ACPIDebugGetIrpText.c)
 *     ACPIBusIrpQueryTargetRelation @ 0x1400B4EDC (ACPIBusIrpQueryTargetRelation.c)
 */

__int64 __fastcall ACPIInternalDeviceQueryDeviceRelations(PVOID Object, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v3; // bp
  unsigned __int8 MinorFunction; // r12
  __int64 DeviceExtension; // rax
  __int64 v8; // rcx
  unsigned int Length; // ebx
  const char *v10; // r14
  __int64 v11; // rdi
  unsigned int Status; // ebx
  int TargetRelation; // eax
  __int64 v14; // rcx
  char *IrpText; // rax
  __int64 v17; // rdx
  const char *v18; // r8
  char v19; // r10
  const char *v20; // r11
  char *v21; // rax
  const char *v22; // r8

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  MinorFunction = CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  Length = CurrentStackLocation->Parameters.Read.Length;
  v10 = byte_1400753E8;
  v11 = DeviceExtension;
  if ( Length == 4 )
  {
    TargetRelation = ACPIBusIrpQueryTargetRelation(Object);
    Status = TargetRelation;
    if ( TargetRelation >= 0 )
    {
      Irp->IoStatus.Status = TargetRelation;
      Irp->IoStatus.Information = 0LL;
      goto LABEL_7;
    }
    if ( TargetRelation != -1073741637 )
    {
      Irp->IoStatus.Status = TargetRelation;
      Irp->IoStatus.Information = 0LL;
      goto LABEL_7;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v8, MinorFunction);
    WPP_RECORDER_SF_qsdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v17,
      (__int64)v18,
      0xBu,
      (__int64)&WPP_3f059b4445c33feb0bcb2acb2d7cf140_Traceguids,
      (char)Irp,
      IrpText,
      Length,
      v19,
      v20,
      v18);
  }
  Status = Irp->IoStatus.Status;
LABEL_7:
  IofCompleteRequest(Irp, 0);
  if ( v11 )
  {
    v3 = v11;
    if ( (*(_QWORD *)(v11 + 8) & 0x200000000000LL) != 0 )
      v10 = *(const char **)(v11 + 608);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = ACPIDebugGetIrpText(v14, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xCu,
      (__int64)&WPP_3f059b4445c33feb0bcb2acb2d7cf140_Traceguids,
      (char)Irp,
      v21,
      Status,
      v3,
      v10,
      v22);
  }
  return Status;
}
