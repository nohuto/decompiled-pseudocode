/*
 * XREFs of FsRtlProcessFileLock @ 0x1403CC8D0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlPrivateFastUnlockAll @ 0x14027DC3C (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateLock @ 0x1402E26A0 (FsRtlPrivateLock.c)
 *     FsRtlFastUnlockSingle @ 0x1402E3DA0 (FsRtlFastUnlockSingle.c)
 *     IoGetRequestorProcess @ 0x1403CCCD0 (IoGetRequestorProcess.c)
 *     FsRtlCompleteLockIrpReal @ 0x1403CCD18 (FsRtlCompleteLockIrpReal.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall FsRtlProcessFileLock(PFILE_LOCK FileLock, PIRP Irp, PVOID Context)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  IRP *v7; // rcx
  BOOLEAN FailImmediately; // di
  BOOLEAN ExclusiveLock; // bl
  struct _KPROCESS *ProcessId; // rax
  NTSTATUS v11; // ebx
  struct _KPROCESS *RequestorProcess; // rax
  NTSTATUS v14; // eax
  PCOMPLETE_LOCK_IRP_ROUTINE v15; // rax
  struct _KPROCESS *v16; // rax
  struct _KPROCESS *v17; // rax
  unsigned int v18; // eax
  PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine; // rcx
  struct _IO_STATUS_BLOCK Iosb; // [rsp+60h] [rbp-28h] BYREF
  LARGE_INTEGER FileOffset; // [rsp+98h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Iosb.Pointer = 0LL;
  Iosb.Information = 0LL;
  v7 = Irp;
  if ( CurrentStackLocation->MinorFunction != 1 )
  {
    switch ( CurrentStackLocation->MinorFunction )
    {
      case 2u:
        FileOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
        RequestorProcess = IoGetRequestorProcess(Irp);
        v14 = FsRtlFastUnlockSingle(
                FileLock,
                CurrentStackLocation->FileObject,
                &FileOffset,
                CurrentStackLocation->Parameters.LockControl.Length,
                RequestorProcess,
                CurrentStackLocation->Parameters.Create.Options,
                Context,
                0);
        break;
      case 3u:
        v16 = IoGetRequestorProcess(Irp);
        v14 = FsRtlPrivateFastUnlockAll(
                (__int64)FileLock,
                (_RTL_SPLAY_LINKS *)CurrentStackLocation->FileObject,
                v16,
                0,
                0,
                (__int64)Context);
        break;
      case 4u:
        v17 = IoGetRequestorProcess(Irp);
        v18 = FsRtlPrivateFastUnlockAll(
                (__int64)FileLock,
                (_RTL_SPLAY_LINKS *)CurrentStackLocation->FileObject,
                v17,
                CurrentStackLocation->Parameters.Create.Options,
                1,
                (__int64)Context);
        CompleteLockIrpRoutine = FileLock->CompleteLockIrpRoutine;
        Iosb.Status = v18;
        FsRtlCompleteLockIrpReal(CompleteLockIrpRoutine, Context, Irp, v18, &Iosb, 0LL);
        return Iosb.Status;
      default:
        v11 = -1073741808;
        Irp->IoStatus.Status = -1073741808;
LABEL_9:
        IofCompleteRequest(v7, 1);
        return v11;
    }
    v11 = v14;
    v15 = FileLock->CompleteLockIrpRoutine;
    Irp->IoStatus.Status = v11;
    if ( v15 )
      return guard_dispatch_icall_no_overrides(Context, Irp);
    v7 = Irp;
    goto LABEL_9;
  }
  FailImmediately = CurrentStackLocation->Flags & 1;
  ExclusiveLock = (CurrentStackLocation->Flags & 2) != 0;
  FileOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
  ProcessId = IoGetRequestorProcess(Irp);
  FsRtlPrivateLock(
    FileLock,
    CurrentStackLocation->FileObject,
    &FileOffset,
    CurrentStackLocation->Parameters.LockControl.Length,
    ProcessId,
    CurrentStackLocation->Parameters.Create.Options,
    FailImmediately,
    ExclusiveLock,
    &Iosb,
    Irp,
    Context,
    0);
  return Iosb.Status;
}
