/*
 * XREFs of CiDispatchCleanup @ 0x14000F4B0
 * Callers:
 *     <none>
 * Callees:
 *     CiThreadCleanup @ 0x14000F520 (CiThreadCleanup.c)
 */

__int64 __fastcall CiDispatchCleanup(__int64 a1, IRP *a2)
{
  _QWORD *FsContext; // rax

  FsContext = a2->Tail.Overlay.CurrentStackLocation->FileObject->FsContext;
  if ( FsContext )
  {
    if ( *(_DWORD *)FsContext )
    {
      if ( *(_DWORD *)FsContext != 1 )
        FsContext[1] = 0LL;
    }
    else
    {
      CiThreadCleanup(FsContext);
    }
  }
  a2->IoStatus.Status = 0;
  a2->IoStatus.Information = 0LL;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
