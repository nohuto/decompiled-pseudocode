/*
 * XREFs of VidSchiNotifyDeviceRemoved @ 0x140043A00
 * Callers:
 *     VidSchiMarkDeviceAsError @ 0x14001FF30 (VidSchiMarkDeviceAsError.c)
 * Callees:
 *     VidSchNotifyDeviceRemoved @ 0x140043B10 (VidSchNotifyDeviceRemoved.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiNotifyDeviceRemoved(__int64 a1)
{
  KIRQL CurrentIrql; // al
  struct _DEVICE_OBJECT *v3; // rcx
  struct _IO_WORKITEM *WorkItem; // rdi
  __int64 v5; // r9

  CurrentIrql = KeGetCurrentIrql();
  v3 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 216LL);
  if ( CurrentIrql >= 2u )
  {
    WorkItem = IoAllocateWorkItem(v3);
    if ( WorkItem )
    {
      WdLogSingleEntry0(4LL);
      v5 = *(_QWORD *)(a1 + 40);
      WdLogGlobalForLineNumber = 216;
      IoQueueWorkItemEx(WorkItem, VidSchNotifyDeviceRemoved, DelayedWorkQueue, *(PVOID *)(v5 + 2640));
    }
    else
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 212;
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Can't allocate memory to hold IO work item.",
        212LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    VidSchNotifyDeviceRemoved(v3, *(PVOID *)(*(_QWORD *)(a1 + 40) + 2640LL), 0LL);
  }
}
