/*
 * XREFs of NvmeAdapterStopOnPowerdown @ 0x140131E10
 * Callers:
 *     NvmeAdapterPowerDownDevice @ 0x14012F2AC (NvmeAdapterPowerDownDevice.c)
 * Callees:
 *     GetNvmeAdapter @ 0x14006B1A0 (GetNvmeAdapter.c)
 *     Feature_Servicing_NvmeofPowerDownIrp__private_IsEnabledDeviceUsageNoInline @ 0x1400CB6AC (Feature_Servicing_NvmeofPowerDownIrp__private_IsEnabledDeviceUsageNoInline.c)
 *     NvmeControllerPowerDown @ 0x1400F2358 (NvmeControllerPowerDown.c)
 *     NvmeAdapterDevicePowerStopAdapter @ 0x14012DFFC (NvmeAdapterDevicePowerStopAdapter.c)
 */

void __fastcall NvmeAdapterStopOnPowerdown(__int64 a1, IRP *a2)
{
  _DWORD *NvmeAdapter; // rax
  __int64 v4; // rbx

  NvmeAdapter = GetNvmeAdapter(a1);
  v4 = (__int64)NvmeAdapter;
  if ( (*(_DWORD *)(*((_QWORD *)NvmeAdapter + 50) + 184LL) & 0x40000000) != 0 )
  {
    NvmeControllerPowerDown(*((_QWORD *)NvmeAdapter + 142));
LABEL_6:
    NvmeAdapterDevicePowerStopAdapter(v4, a2);
    return;
  }
  if ( (NvmeAdapter[104] & 0x40) != 0 )
  {
    IoQueueWorkItem(
      *((PIO_WORKITEM *)NvmeAdapter + 164),
      (PIO_WORKITEM_ROUTINE)NvmeAdapterPowerDownDeviceNextStepWorkItemRoutine,
      NormalWorkQueue,
      a2);
    return;
  }
  if ( (unsigned int)Feature_Servicing_NvmeofPowerDownIrp__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_6;
}
