/*
 * XREFs of NvmeNamespaceTerminateSystemThread @ 0x140114E48
 * Callers:
 *     NvmeControllerCreateNvmeNamespace @ 0x1400FAA24 (NvmeControllerCreateNvmeNamespace.c)
 *     NvmeControllerDeleteNvmeNamespace @ 0x1400FB03C (NvmeControllerDeleteNvmeNamespace.c)
 *     NvmeNamespaceProcessQueueRequests @ 0x140107114 (NvmeNamespaceProcessQueueRequests.c)
 *     NvmeNamespaceRemoveDeviceIrp @ 0x14010C0D0 (NvmeNamespaceRemoveDeviceIrp.c)
 *     NvmeNamespaceSurpriseRemovalIrp @ 0x1401B1928 (NvmeNamespaceSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeNamespaceTerminateSystemThread(struct _KEVENT *a1)
{
  _LIST_ENTRY *Blink; // rax
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a1[19].Header.WaitListHead.Blink )
  {
    Blink = a1[4].Header.WaitListHead.Blink;
    if ( ((unsigned __int8)Blink & 0x20) == 0 )
    {
      a1[4].Header.WaitListHead.Blink = (_LIST_ENTRY *)((unsigned __int64)Blink | 0x20);
      _InterlockedOr(v2, 0);
      KeSetEvent(a1 + 20, 0, 0);
    }
  }
}
