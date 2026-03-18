/*
 * XREFs of ACPIBusIrpQueryId @ 0x1400B8CC0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalSetFlags @ 0x14003FF48 (ACPIInternalSetFlags.c)
 *     WPP_RECORDER_SF_qsdqss @ 0x14004020C (WPP_RECORDER_SF_qsdqss.c)
 *     ACPIDebugGetIrpText @ 0x140040AF4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsdLqss @ 0x140043790 (WPP_RECORDER_SF_qsdLqss.c)
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x14004FE24 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     ACPIEmQueryFailDeviceResetOnOpenHandles @ 0x14006958C (ACPIEmQueryFailDeviceResetOnOpenHandles.c)
 *     ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule @ 0x1400A8718 (ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1400B7D04 (ACPIBusIrpQueryInstanceId.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1400B7EE4 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1400B85CC (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1400B8F9C (ACPIBusIrpQueryDeviceId.c)
 */

__int64 __fastcall ACPIBusIrpQueryId(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v3; // si
  int Status; // r14d
  unsigned __int8 MinorFunction; // r13
  _QWORD *DeviceExtension; // rax
  int Length; // ebx
  const char *v9; // r12
  _QWORD *v10; // rdi
  char *IrpText; // rax
  __int64 v12; // rdx
  const char *v13; // r8
  char v14; // r10
  const char *v15; // r11
  int HardwareId; // eax
  _WORD *v17; // rcx
  __int64 v18; // rcx
  char *v19; // rax
  const char *v20; // r8
  PVOID P; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  Status = a2->IoStatus.Status;
  v23 = 0LL;
  P = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  Length = CurrentStackLocation->Parameters.Read.Length;
  v9 = byte_1400753E8;
  v10 = DeviceExtension;
  switch ( Length )
  {
    case 0:
      HardwareId = ACPIBusIrpQueryDeviceId(&P, &v23, DeviceExtension);
      goto LABEL_13;
    case 1:
      HardwareId = ACPIBusIrpQueryHardwareId((wchar_t **)&P, (size_t *)&v23, (__int64)DeviceExtension);
      goto LABEL_13;
    case 2:
      HardwareId = ACPIBusIrpQueryCompatibleId((wchar_t **)&P, (size_t *)&v23, (__int64)DeviceExtension);
      goto LABEL_13;
    case 3:
      HardwareId = ACPIBusIrpQueryInstanceId((__int64 *)&P, (size_t *)&v23, DeviceExtension);
      goto LABEL_13;
    case 5:
      HardwareId = ACPIBusAndFilterIrpQueryContainerId(&P, &v23, (__int64)DeviceExtension);
LABEL_13:
      Status = HardwareId;
      goto LABEL_14;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText((unsigned int)(Length - 3), MinorFunction);
    WPP_RECORDER_SF_qsdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      (__int64)v13,
      0x2Au,
      (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
      (char)a2,
      IrpText,
      Length,
      v14,
      v15,
      v13);
  }
LABEL_14:
  if ( (AcpiOverrideAttributes & 0x100000) == 0 || (unsigned int)(Length - 1) > 1 || Status < 0 )
    goto LABEL_19;
  v17 = P;
  if ( P )
  {
    ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule(Length, P);
LABEL_19:
    v17 = P;
  }
  if ( (AcpiOverrideAttributes & 0x200000) != 0 && (unsigned int)(Length - 1) <= 1 )
  {
    if ( Status >= 0 )
    {
      if ( v17 )
      {
        ACPIEmQueryFailDeviceResetOnOpenHandles(Length, v17);
        v17 = P;
      }
      goto LABEL_26;
    }
  }
  else if ( Status >= 0 )
  {
LABEL_26:
    a2->IoStatus.Information = (unsigned __int64)v17;
    goto LABEL_29;
  }
  if ( v17 )
    ExFreePoolWithTag(v17, 0x53706341u);
LABEL_29:
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  if ( v10 )
  {
    v3 = (char)v10;
    if ( (v10[1] & 0x200000000000LL) != 0 )
      v9 = (const char *)v10[76];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = ACPIDebugGetIrpText(v18, MinorFunction);
    WPP_RECORDER_SF_qsdLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      (__int64)v20,
      0x2Bu,
      (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
      (char)a2,
      v19,
      Length,
      Status,
      v3,
      v9,
      v20);
  }
  return (unsigned int)Status;
}
