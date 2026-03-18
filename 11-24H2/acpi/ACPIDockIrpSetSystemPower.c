/*
 * XREFs of ACPIDockIrpSetSystemPower @ 0x140057AFC
 * Callers:
 *     ACPIDockIrpSetPower @ 0x140057A90 (ACPIDockIrpSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qdqss @ 0x14001D6DC (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDispatchPowerIrpSuccess @ 0x140028E60 (ACPIDispatchPowerIrpSuccess.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x14005CC6C (ACPIDeviceIrpWarmEjectRequest.c)
 */

__int64 __fastcall ACPIDockIrpSetSystemPower(PDEVICE_OBJECT DeviceObject, PIRP *Irp)
{
  PIRP v2; // rbx
  __int64 DeviceExtension; // rax
  __int64 IrpCount; // r9
  __int64 v7; // rdi
  __int64 v8; // r15
  POWER_STATE v9; // ebp
  PIRP v10; // rcx
  __int64 v11; // r8
  const char *v12; // rcx
  const char *v13; // rdx
  __int64 result; // rax
  __int64 v15; // rdx
  const char *v16; // rcx
  const char *v17; // r8
  PIRP v18; // rax

  v2 = Irp[23];
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  IrpCount = v2->AssociatedIrp.IrpCount;
  v7 = DeviceExtension;
  v8 = *(_QWORD *)(DeviceExtension + 184);
  v9.SystemState = *(_SYSTEM_POWER_STATE *)(DeviceExtension + 4 * IrpCount + 508);
  *(_DWORD *)(v8 + 548) = IrpCount;
  if ( LODWORD(v2->ThreadListEntry.Flink) == 7 )
  {
    v10 = Irp[23];
    *((_DWORD *)Irp + 12) = 0;
    HIBYTE(v10->Size) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 728));
    v11 = *(_QWORD *)(DeviceExtension + 8);
    v12 = byte_1400753E8;
    v13 = byte_1400753E8;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v12 = *(const char **)(DeviceExtension + 608);
      if ( (v11 & 0x400000000000LL) != 0 )
        v13 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)v13,
        0xCu,
        0x21u,
        (__int64)&WPP_6a0c72af8ad13ec042225ebd05f61004_Traceguids,
        (char)Irp,
        IrpCount - 1,
        DeviceExtension,
        v12,
        v13);
    LOBYTE(IrpCount) = *(_DWORD *)(v7 + 192) == 4;
    result = ACPIDeviceIrpWarmEjectRequest(v8, Irp, ACPIDeviceIrpCompleteRequest, IrpCount);
    if ( (_DWORD)result == -1073741802 )
      return 259LL;
  }
  else if ( *(_DWORD *)(DeviceExtension + 384) == v9.SystemState )
  {
    return ACPIDispatchPowerIrpSuccess((__int64)DeviceObject, (IRP *)Irp);
  }
  else
  {
    v15 = *(_QWORD *)(DeviceExtension + 8);
    v16 = byte_1400753E8;
    v17 = byte_1400753E8;
    if ( (v15 & 0x200000000000LL) != 0 )
    {
      v16 = *(const char **)(DeviceExtension + 608);
      if ( (v15 & 0x400000000000LL) != 0 )
        v17 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v15,
        0xCu,
        0x22u,
        (__int64)&WPP_6a0c72af8ad13ec042225ebd05f61004_Traceguids,
        (char)Irp,
        LOBYTE(v9.SystemState) - 1,
        DeviceExtension,
        v16,
        v17);
    v18 = Irp[23];
    *((_DWORD *)Irp + 12) = 0;
    HIBYTE(v18->Size) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 728));
    PoRequestPowerIrp(DeviceObject, 2u, v9, (PREQUEST_POWER_COMPLETE)ACPIBusIrpSetSystemPowerComplete, Irp, 0LL);
    return 259LL;
  }
  return result;
}
