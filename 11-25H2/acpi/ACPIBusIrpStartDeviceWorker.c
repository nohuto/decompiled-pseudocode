/*
 * XREFs of ACPIBusIrpStartDeviceWorker @ 0x1400C0DF0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1400307B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x140040AF4 (ACPIDebugGetIrpText.c)
 *     ACPIInternalEvaluateOST @ 0x140061980 (ACPIInternalEvaluateOST.c)
 *     EnableDisableIPMIRegions @ 0x14009EEB0 (EnableDisableIPMIRegions.c)
 *     ACPIPepInitializeEpmNotificationSupport @ 0x1400A1328 (ACPIPepInitializeEpmNotificationSupport.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1400A1578 (ACPIPepInitializePlatformNotificationSupport.c)
 *     EnableDisableRegions @ 0x1400B46CC (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1400B47D0 (IsNsobjPciBus.c)
 */

_UNKNOWN **__fastcall ACPIBusIrpStartDeviceWorker(__int64 a1)
{
  __int64 DeviceExtension; // rax
  IRP *v3; // rbx
  __int64 v4; // rdi
  int Status; // esi
  unsigned __int8 MinorFunction; // r15
  __int64 v7; // rbp
  char v8; // r14
  __int64 v9; // rcx
  _UNKNOWN **result; // rax
  char *IrpText; // rax
  const char *v12; // r8
  const char *v13; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(*(_QWORD *)(a1 + 32));
  v3 = *(IRP **)(a1 + 40);
  v4 = DeviceExtension;
  Status = v3->IoStatus.Status;
  MinorFunction = v3->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( Status >= 0 )
  {
    v7 = *(_QWORD *)(DeviceExtension + 1120) & 0x8000LL;
    v8 = (*(_QWORD *)(DeviceExtension + 1120) & 0x8000) != 0;
    if ( IsNsobjPciBus(*(_QWORD *)(DeviceExtension + 760)) || v7 )
      EnableDisableRegions(*(__int64 **)(v4 + 760), 1, v8);
    if ( (*(_DWORD *)(v4 + 8) & 0x1000LL) != 0 )
      EnableDisableIPMIRegions(*(__int64 **)(v4 + 760), 1u);
    if ( _bittest64((const signed __int64 *)(v4 + 1120), 0x28u) )
    {
      ACPIPepInitializePlatformNotificationSupport((char *)v4);
      ACPIPepInitializeEpmNotificationSupport(v4);
    }
  }
  if ( _bittest64((const signed __int64 *)(v4 + 8), 0x25u) && Status < 0 )
    ACPIInternalEvaluateOST(v4, 0, 163);
  *(_QWORD *)(v4 + 1120) &= ~0x10000000000000uLL;
  v3->IoStatus.Information = 0LL;
  v3->IoStatus.Status = Status;
  IofCompleteRequest(v3, 0);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v9, MinorFunction);
    return (_UNKNOWN **)WPP_RECORDER_SF_qsLqss(
                          (__int64)WPP_GLOBAL_Control->DeviceExtension,
                          4u,
                          5u,
                          0x3Eu,
                          (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
                          (char)v3,
                          IrpText,
                          Status,
                          v4,
                          v12,
                          v13);
  }
  return result;
}
