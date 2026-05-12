/*
 * XREFs of NvmeAdapterSetSystemPowerIrp @ 0x140131D2C
 * Callers:
 *     NvmeAdapterSetPowerIrp @ 0x1401317A8 (NvmeAdapterSetPowerIrp.c)
 * Callees:
 *     NvmeAdapterAcquireRemoveLock @ 0x1400CC668 (NvmeAdapterAcquireRemoveLock.c)
 */

NTSTATUS __fastcall NvmeAdapterSetSystemPowerIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  __int64 LowPart; // rax
  POWER_STATE v6; // r8d
  _IO_STACK_LOCATION *v7; // rax
  _IO_STACK_LOCATION *v8; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v6.SystemState = (_SYSTEM_POWER_STATE)DevicePowerStateTable[LowPart];
  if ( (CurrentStackLocation->Parameters.Read.Length & 0x400000) != 0 && (_DWORD)LowPart == 6 )
  {
    if ( v6.SystemState == PowerSystemSleeping3 )
      *(_DWORD *)(*(_QWORD *)(a1 + 160) + 76LL) |= 8u;
  }
  else if ( (_DWORD)LowPart == 1 && v6.SystemState == PowerSystemWorking )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 160) + 76LL) |= 0x20u;
  }
  NvmeAdapterAcquireRemoveLock(a1);
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v7 = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v7[-1].MajorFunction = *(_OWORD *)&v7->MajorFunction;
  *(_OWORD *)&v7[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v7->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v7[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v7->Parameters.SetQuota + 6);
  v7[-1].FileObject = v7->FileObject;
  v7[-1].Control = 0;
  v8 = a2->Tail.Overlay.CurrentStackLocation;
  v8[-1].Context = 0LL;
  v8[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))NvmeAdapterSetSystemPowerCompletion;
  v8[-1].Control = -32;
  return IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
}
