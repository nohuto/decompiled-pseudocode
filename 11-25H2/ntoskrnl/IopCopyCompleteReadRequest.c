/*
 * XREFs of IopCopyCompleteReadRequest @ 0x1402D3570
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x1402D3280 (IopCopyCompleteReadIrp.c)
 *     IopCopyAbortCopyReadRequest @ 0x140594270 (IopCopyAbortCopyReadRequest.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     IopDequeueIrpFromThread @ 0x140252C50 (IopDequeueIrpFromThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     IopDropIrp @ 0x140283AE0 (IopDropIrp.c)
 *     IopDequeueIrpFromFileObject @ 0x140284230 (IopDequeueIrpFromFileObject.c)
 *     IopUpdateIrpTransferCount @ 0x1402A1480 (IopUpdateIrpTransferCount.c)
 *     IopProcessBufferedIoCompletion @ 0x1402A2A40 (IopProcessBufferedIoCompletion.c)
 */

void __fastcall IopCopyCompleteReadRequest(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  IRP *v5; // rbx
  ULONG_PTR v6; // rdi
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
  IopProcessBufferedIoCompletion((__int64)v5);
  IopUpdateIrpTransferCount((__int64)v5, v7);
  if ( (v5->Flags & 0x2000) != 0 )
  {
    IopDequeueIrpFromFileObject((__int64)v5, v6);
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
  IopDropIrp(v5, v6);
}
