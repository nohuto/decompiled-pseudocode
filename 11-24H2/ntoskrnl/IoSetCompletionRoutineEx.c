/*
 * XREFs of IoSetCompletionRoutineEx @ 0x14042D580
 * Callers:
 *     DifIoSetCompletionRoutineExWrapper @ 0x1406290B0 (DifIoSetCompletionRoutineExWrapper.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoSetCompletionRoutineEx(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        PIO_COMPLETION_ROUTINE CompletionRoutine,
        PVOID Context,
        BOOLEAN InvokeOnSuccess,
        BOOLEAN InvokeOnError,
        BOOLEAN InvokeOnCancel)
{
  __int64 Pool2; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS result; // eax

  if ( !InvokeOnError && !InvokeOnCancel && !InvokeOnSuccess )
    return -1073741811;
  Pool2 = ExAllocatePool2(0x40uLL, 0x20uLL, 0x73556F49u);
  if ( !Pool2 )
    return -1073741670;
  *(_QWORD *)Pool2 = DeviceObject;
  *(_QWORD *)(Pool2 + 16) = CompletionRoutine;
  *(_QWORD *)(Pool2 + 8) = Context;
  *(_BYTE *)(Pool2 + 24) = InvokeOnError;
  *(_BYTE *)(Pool2 + 25) = InvokeOnSuccess;
  *(_BYTE *)(Pool2 + 26) = InvokeOnCancel;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Context = (PVOID)Pool2;
  result = 0;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)IopUnloadSafeCompletion;
  CurrentStackLocation[-1].Control = -32;
  return result;
}
