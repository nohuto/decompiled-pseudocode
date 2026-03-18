/*
 * XREFs of IopDropIrp @ 0x1403C5110
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x140268580 (IopCopyCompleteReadIrp.c)
 *     IopCopyCompleteReadRequest @ 0x140268870 (IopCopyCompleteReadRequest.c)
 *     IoRemoveIoCompletion @ 0x1402A4220 (IoRemoveIoCompletion.c)
 *     IopIoRingCompleteIrp @ 0x1403C5DA0 (IopIoRingCompleteIrp.c)
 *     IopfCompleteRequest @ 0x1403DBB10 (IopfCompleteRequest.c)
 *     IopFreeCompletionListPackets @ 0x1409A7128 (IopFreeCompletionListPackets.c)
 * Callees:
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     IopDequeueIrpFromFileObject @ 0x14031A230 (IopDequeueIrpFromFileObject.c)
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObDereferenceObjectExWithTag @ 0x1403C5220 (ObDereferenceObjectExWithTag.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopDropIrp(PIRP Irp, ULONG_PTR a2)
{
  ULONG Flags; // eax
  PMDL MdlAddress; // rcx
  PKEVENT UserEvent; // rcx
  ULONG v7; // eax
  unsigned __int64 UserApcRoutine; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  struct _MDL *Next; // rdi

  Flags = Irp->Flags;
  if ( (Flags & 0x20) != 0 )
  {
    ExFreePoolWithTag(Irp->AssociatedIrp.MasterIrp, 0);
    Flags = Irp->Flags;
  }
  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    do
    {
      Next = MdlAddress->Next;
      IoFreeMdl(MdlAddress);
      MdlAddress = Next;
    }
    while ( Next );
    Flags = Irp->Flags;
  }
  UserEvent = Irp->UserEvent;
  if ( UserEvent && a2 && (Flags & 4) == 0 )
    ObfDereferenceObjectWithTag(UserEvent, 0x746C6644u);
  v7 = Irp->Flags;
  if ( (v7 & 0x2000) != 0 )
  {
    IopDequeueIrpFromFileObject((__int64)Irp, a2);
    v7 = Irp->Flags;
  }
  if ( a2 && (v7 & 0x80u) == 0 )
    ObDereferenceObjectExWithTag(a2);
  if ( (Irp->Flags & 0x8000) == 0 )
    goto LABEL_9;
  UserApcRoutine = (unsigned __int64)Irp->Overlay.AsynchronousParameters.UserApcRoutine;
  do
  {
    v9 = UserApcRoutine;
    v10 = ((UserApcRoutine >> 1) & 3) - 1;
    UserApcRoutine = _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&Irp->Overlay,
                       UserApcRoutine & 0xFFFFFFFFFFFFFFF9uLL | (2 * v10),
                       UserApcRoutine);
  }
  while ( v9 != UserApcRoutine );
  if ( !(_DWORD)v10 )
LABEL_9:
    IoFreeIrp(Irp);
}
