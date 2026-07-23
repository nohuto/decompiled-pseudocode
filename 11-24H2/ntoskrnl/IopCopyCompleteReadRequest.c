/*
 * XREFs of IopCopyCompleteReadRequest @ 0x14025FD20
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x14025FA30 (IopCopyCompleteReadIrp.c)
 *     IopCopyAbortCopyReadRequest @ 0x140594950 (IopCopyAbortCopyReadRequest.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     IopDequeueIrpFromThread @ 0x1402847D0 (IopDequeueIrpFromThread.c)
 *     IopDequeueIrpFromFileObject @ 0x1402C2DC0 (IopDequeueIrpFromFileObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     IopUpdateIrpTransferCount @ 0x1403B3140 (IopUpdateIrpTransferCount.c)
 *     IopDropIrp @ 0x1403B3CD0 (IopDropIrp.c)
 *     IopProcessBufferedIoCompletion @ 0x1403B4A40 (IopProcessBufferedIoCompletion.c)
 */

__int64 __fastcall IopCopyCompleteReadRequest(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  IRP *v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  PKEVENT UserEvent; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = (IRP *)(a1 - 120);
  v6 = *a4;
  v7 = 0LL;
  if ( (*(_DWORD *)(*a4 + 80) & 0x4000000) == 0 )
    KeSetEvent((PRKEVENT)(v6 + 152), 0, 0);
  *(_DWORD *)(v6 + 56) = v5->IoStatus.Status;
  if ( (v5->Flags & 0x2000) != 0 )
    v7 = v5->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL;
  IopProcessBufferedIoCompletion(v5);
  IopUpdateIrpTransferCount(v5, v7);
  if ( (v5->Flags & 0x2000) != 0 )
  {
    IopDequeueIrpFromFileObject(v5, v6);
  }
  else
  {
    v5->Tail.Overlay.Thread = CurrentThread;
    IopDequeueIrpFromThread(v5);
  }
  UserEvent = v5->UserEvent;
  if ( UserEvent )
  {
    ObfDereferenceObjectWithTag(UserEvent, 0x746C6644u);
    v5->UserEvent = 0LL;
  }
  return IopDropIrp(v5);
}
