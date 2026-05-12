/*
 * XREFs of RaForwardIrpSynchronous @ 0x140015500
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1400164A4 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x14001695C (RaidAdapterDeviceUsageNotificationIrp.c)
 *     NvmeAdapterDeviceUsageNotificationIrp @ 0x1400CF37C (NvmeAdapterDeviceUsageNotificationIrp.c)
 *     NvmeAdapterStartDeviceIrp @ 0x1400D868C (NvmeAdapterStartDeviceIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x140181F80 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     NvmeAdapterFilterResourceRequirementsIrp @ 0x140196B4C (NvmeAdapterFilterResourceRequirementsIrp.c)
 *     NvmeAdapterRemoveDeviceIrp @ 0x14019B714 (NvmeAdapterRemoveDeviceIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1401BB770 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x140015550 (RaSendIrpSynchronous.c)
 */

__int64 __fastcall RaForwardIrpSynchronous(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 result; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  result = RaSendIrpSynchronous(a1, a2);
  if ( (int)result >= 0 )
    return (unsigned int)a2->IoStatus.Status;
  return result;
}
