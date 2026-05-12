/*
 * XREFs of NvmeAdapterDevicePowerStopAdapter @ 0x14012DFFC
 * Callers:
 *     NvmeAdapterPowerDownDeviceNextStepWorkItemRoutine @ 0x14012F500 (NvmeAdapterPowerDownDeviceNextStepWorkItemRoutine.c)
 *     NvmeAdapterStopOnPowerdown @ 0x140131E10 (NvmeAdapterStopOnPowerdown.c)
 * Callees:
 *     StorSetDevicePowerState @ 0x14003C60C (StorSetDevicePowerState.c)
 *     NvmeAdapterStop @ 0x1400D901C (NvmeAdapterStop.c)
 */

NTSTATUS __fastcall NvmeAdapterDevicePowerStopAdapter(__int64 a1, IRP *a2)
{
  POWER_STATE v4; // ebx
  __int64 *v5; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v7; // rax
  _DWORD v9[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  v4.SystemState = (_SYSTEM_POWER_STATE)a2->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
  NvmeAdapterStop(a1, 2);
  *(POWER_STATE *)(*(_QWORD *)(a1 + 160) + 68LL) = v4;
  StorSetDevicePowerState(*(struct _DEVICE_OBJECT **)(a1 + 8), v4);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 160) + 176LL) & 0x200) != 0 )
  {
    v5 = *(__int64 **)(a1 + 584);
    v9[1] = 0;
    v9[0] = *((_DWORD *)v5 + 3);
    v10 = *v5;
    IoReportInterruptInactive(v9);
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v7 = a2->Tail.Overlay.CurrentStackLocation;
  v7[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))NvmeAdapterPowerDownDeviceCompletion;
  v7[-1].Context = 0LL;
  v7[-1].Control = -32;
  return PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
}
