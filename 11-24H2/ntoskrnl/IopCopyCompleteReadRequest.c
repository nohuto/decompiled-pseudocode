/*
 * XREFs of IopCopyCompleteReadRequest @ 0x140268870
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x140268580 (IopCopyCompleteReadIrp.c)
 *     IopCopyAbortCopyReadRequest @ 0x140597980 (IopCopyAbortCopyReadRequest.c)
 * Callees:
 *     IopDequeueIrpFromThread @ 0x1402541C0 (IopDequeueIrpFromThread.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     IopDequeueIrpFromFileObject @ 0x14031A230 (IopDequeueIrpFromFileObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     IopUpdateIrpTransferCount @ 0x1403C4580 (IopUpdateIrpTransferCount.c)
 *     IopDropIrp @ 0x1403C5110 (IopDropIrp.c)
 *     IopProcessBufferedIoCompletion @ 0x1403C5E80 (IopProcessBufferedIoCompletion.c)
 */

__int64 __fastcall IopCopyCompleteReadRequest(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  IRP *v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
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
    IopDequeueIrpFromThread(v5, v8, v9);
  }
  UserEvent = v5->UserEvent;
  if ( UserEvent )
  {
    ObfDereferenceObjectWithTag(UserEvent, 0x746C6644u);
    v5->UserEvent = 0LL;
  }
  return IopDropIrp(v5);
}
