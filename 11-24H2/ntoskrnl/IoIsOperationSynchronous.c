/*
 * XREFs of IoIsOperationSynchronous @ 0x140412360
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1409E0F60 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIsOperationSynchronous(PIRP Irp)
{
  ULONG v1; // eax

  v1 = Irp->Flags & 0x42;
  if ( (Irp->Tail.Overlay.CurrentStackLocation->FileObject->Flags & 2) == 0 && (Irp->Flags & 4) == 0 )
    return v1 == 66;
  else
    return v1 != 2;
}
