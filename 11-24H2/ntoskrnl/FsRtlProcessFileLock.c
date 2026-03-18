/*
 * XREFs of FsRtlProcessFileLock @ 0x1403DB600
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlPrivateLock @ 0x140248460 (FsRtlPrivateLock.c)
 *     FsRtlFastUnlockSingle @ 0x140249B60 (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14024D62C (FsRtlPrivateFastUnlockAll.c)
 *     IoGetRequestorProcess @ 0x1403DBA00 (IoGetRequestorProcess.c)
 *     FsRtlCompleteLockIrpReal @ 0x1403DBA48 (FsRtlCompleteLockIrpReal.c)
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 v15; // r8
  __int64 v16; // r9
  PCOMPLETE_LOCK_IRP_ROUTINE v17; // rax
  struct _KPROCESS *v18; // rax
  struct _KPROCESS *v19; // rax
  unsigned int v20; // eax
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
        v18 = IoGetRequestorProcess(Irp);
        v14 = FsRtlPrivateFastUnlockAll(
                (__int64)FileLock,
                (_RTL_SPLAY_LINKS *)CurrentStackLocation->FileObject,
                v18,
                0,
                0,
                (__int64)Context);
        break;
      case 4u:
        v19 = IoGetRequestorProcess(Irp);
        v20 = FsRtlPrivateFastUnlockAll(
                (__int64)FileLock,
                (_RTL_SPLAY_LINKS *)CurrentStackLocation->FileObject,
                v19,
                CurrentStackLocation->Parameters.Create.Options,
                1,
                (__int64)Context);
        CompleteLockIrpRoutine = FileLock->CompleteLockIrpRoutine;
        Iosb.Status = v20;
        FsRtlCompleteLockIrpReal(CompleteLockIrpRoutine, Context, Irp, v20, &Iosb, 0LL);
        return Iosb.Status;
      default:
        v11 = -1073741808;
        Irp->IoStatus.Status = -1073741808;
LABEL_9:
        IofCompleteRequest(v7, 1);
        return v11;
    }
    v11 = v14;
    v17 = FileLock->CompleteLockIrpRoutine;
    Irp->IoStatus.Status = v11;
    if ( v17 )
      return guard_dispatch_icall_no_overrides(Context, Irp, v15, v16);
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
