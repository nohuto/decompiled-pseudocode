/*
 * XREFs of ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x14001688C
 * Callers:
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x140016A30 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CF78 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1403D7650 (-HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 */

void __fastcall DXGADAPTER::NotifyMultiPlaneOverlayDisable(DXGADAPTER *this, int a2, __int64 a3, __int64 a4)
{
  __int64 Pool2; // rax
  void *v7; // rbx
  KIRQL CurrentIrql; // al
  struct _DEVICE_OBJECT *v9; // rcx
  int v10; // edx
  int v11; // r8d
  struct _IO_WORKITEM *WorkItem; // rdi

  Pool2 = ExAllocatePool2(64LL, 16LL, 1265072196LL, a4);
  v7 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = this;
    *(_DWORD *)(Pool2 + 8) = a2;
    *(_DWORD *)(Pool2 + 12) = PsGetCurrentProcessSessionId();
    CurrentIrql = KeGetCurrentIrql();
    v9 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 27);
    if ( CurrentIrql >= 2u )
    {
      WorkItem = IoAllocateWorkItem(v9);
      if ( WorkItem )
      {
        WdLogSingleEntry0(4LL);
        WdLogGlobalForLineNumber = 2503;
        IoQueueWorkItemEx(WorkItem, HandleAdapterMultiPlaneDisableEvent, DelayedWorkQueue, v7);
      }
      else
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 2499;
        DxgkLogInternalTriageEvent(
          0,
          262145,
          -1,
          (unsigned int)L"Can't allocate memory to hold IO work item.",
          2499LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      HandleAdapterMultiPlaneDisableEvent(v9, v7, 0LL);
    }
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2479;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        2479,
        v10,
        v11,
        0,
        1,
        -1,
        (__int64)L"Cannot allocate memory for teardown event structure",
        2479LL,
        0LL,
        0LL,
        0LL,
        0LL);
  }
}
