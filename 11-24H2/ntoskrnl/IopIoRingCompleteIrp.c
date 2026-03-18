/*
 * XREFs of IopIoRingCompleteIrp @ 0x1403C5DA0
 * Callers:
 *     IopCompleteRequest @ 0x1402A5AC0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1403DBB10 (IopfCompleteRequest.c)
 *     IopSynchronousServiceTail @ 0x1408C3300 (IopSynchronousServiceTail.c)
 * Callees:
 *     IopDequeueIrpFromThread @ 0x1402541C0 (IopDequeueIrpFromThread.c)
 *     IopDequeueIrpFromFileObject @ 0x14031A230 (IopDequeueIrpFromFileObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     IopUpdateIrpTransferCount @ 0x1403C4580 (IopUpdateIrpTransferCount.c)
 *     IopDropIrp @ 0x1403C5110 (IopDropIrp.c)
 *     IopProcessBufferedIoCompletion @ 0x1403C5E80 (IopProcessBufferedIoCompletion.c)
 *     IopCompleteIoRingEntry @ 0x1403C5F20 (IopCompleteIoRingEntry.c)
 *     IopMcReleaseMdl @ 0x1405A2CE8 (IopMcReleaseMdl.c)
 */

void __fastcall IopIoRingCompleteIrp(PIRP Irp, ULONG_PTR a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  void *v4; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8

  v3 = 0LL;
  v4 = (void *)((unsigned __int64)Irp->Overlay.AsynchronousParameters.UserApcContext & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Irp->Flags & 0x2000) != 0 )
    v3 = Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL;
  IopProcessBufferedIoCompletion(Irp);
  if ( a2 )
    *(_DWORD *)(a2 + 56) = Irp->IoStatus.Status;
  IopUpdateIrpTransferCount((__int64)Irp, v3);
  if ( (Irp->Flags & 0x2000) != 0 )
    IopDequeueIrpFromFileObject((__int64)Irp, a2);
  else
    IopDequeueIrpFromThread(Irp, v8, v9);
  IopCompleteIoRingEntry(v4, Irp->UserIosb, &Irp->IoStatus, a3);
  if ( (*(_DWORD *)(&Irp->Overlay.AllocationSize + 1) & 1) != 0 )
  {
    IopMcReleaseMdl((ULONG_PTR)Irp->MdlAddress);
    Irp->MdlAddress = 0LL;
  }
  ObfDereferenceObjectWithTag(v4, 0x49526F49u);
  Irp->Flags &= ~0x200000u;
  IopDropIrp(Irp, a2);
}
