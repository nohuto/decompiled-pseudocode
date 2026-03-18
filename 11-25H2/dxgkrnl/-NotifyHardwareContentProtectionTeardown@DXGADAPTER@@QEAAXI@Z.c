/*
 * XREFs of ?NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z @ 0x140065FD0
 * Callers:
 *     DxgkHardwareContentProtectionTeardownCB @ 0x14006C550 (DxgkHardwareContentProtectionTeardownCB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x14018D4A0 (-HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 */

void __fastcall DXGADAPTER::NotifyHardwareContentProtectionTeardown(DXGADAPTER *this, int a2, __int64 a3, __int64 a4)
{
  __int64 Pool2; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rax
  const wchar_t *v9; // r9
  KIRQL CurrentIrql; // al
  struct _DEVICE_OBJECT *v11; // rcx
  struct _IO_WORKITEM *WorkItem; // rdi

  Pool2 = ExAllocatePool2(64LL, 24LL, 1265072196LL, a4);
  v7 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry0(6LL);
    v8 = 2414LL;
    v9 = L"Cannot allocate memory for teardown event structure";
LABEL_3:
    WdLogGlobalForLineNumber = v8;
    DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, v9, v8, 0LL, 0LL, 0LL, 0LL);
    return;
  }
  *(_QWORD *)Pool2 = this;
  *(_DWORD *)(Pool2 + 8) = a2;
  *(_DWORD *)(Pool2 + 12) = PsGetCurrentProcessSessionId();
  v7[2] = *(_QWORD *)((char *)this + 412);
  CurrentIrql = KeGetCurrentIrql();
  v11 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 27);
  if ( CurrentIrql >= 2u )
  {
    WorkItem = IoAllocateWorkItem(v11);
    if ( !WorkItem )
    {
      WdLogSingleEntry0(6LL);
      v8 = 2435LL;
      v9 = L"Can't allocate memory to hold IO work item.";
      goto LABEL_3;
    }
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 2439;
    IoQueueWorkItemEx(WorkItem, HandleAdapterTeardownEvent, DelayedWorkQueue, v7);
  }
  else
  {
    HandleAdapterTeardownEvent(v11, v7, 0LL);
  }
}
