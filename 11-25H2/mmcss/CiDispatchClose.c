/*
 * XREFs of CiDispatchClose @ 0x1C000E390
 * Callers:
 *     <none>
 * Callees:
 *     CiTaskIndexDereference @ 0x1C0003CB0 (CiTaskIndexDereference.c)
 *     CiSystemAcquirePushLock @ 0x1C000E130 (CiSystemAcquirePushLock.c)
 *     CiProcessDereference @ 0x1C000E170 (CiProcessDereference.c)
 *     CiThreadDereference @ 0x1C000E440 (CiThreadDereference.c)
 */

__int64 __fastcall CiDispatchClose(__int64 a1, IRP *a2)
{
  PFILE_OBJECT FileObject; // rcx
  char *FsContext; // rsi
  _QWORD *v5; // rcx

  FileObject = a2->Tail.Overlay.CurrentStackLocation->FileObject;
  FsContext = (char *)FileObject->FsContext;
  if ( FsContext )
  {
    if ( *(_DWORD *)FsContext == 1 )
    {
      CiSystemAcquirePushLock((__int64)(FsContext + 16));
      *((_QWORD *)FsContext + 1) = 0LL;
      *((_QWORD *)FsContext + 3) = 0LL;
      ExReleasePushLockExclusiveEx(FsContext + 16, 0LL);
      CiProcessDereference(FsContext);
    }
    else
    {
      v5 = FileObject->FsContext;
      if ( *(_DWORD *)FsContext )
        CiTaskIndexDereference(v5);
      else
        CiThreadDereference(v5);
    }
  }
  a2->IoStatus.Status = 0;
  a2->IoStatus.Information = 0LL;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
