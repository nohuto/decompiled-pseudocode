/*
 * XREFs of PiDaDispatch @ 0x1409F45B0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiDaDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  IRP *v3; // r8
  __int64 v4; // rbp
  PFILE_OBJECT FileObject; // rax
  unsigned int v6; // ebx
  wchar_t *Buffer; // rdi
  char *v9; // rdx
  unsigned __int64 i; // rax
  wchar_t *v11; // rcx
  __int64 v12; // r11
  int v13; // r10d
  int v14; // r9d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = a2;
  v4 = a1;
  FileObject = CurrentStackLocation->FileObject;
  if ( !CurrentStackLocation->MajorFunction )
  {
    Buffer = FileObject->FileName.Buffer;
    if ( Buffer )
    {
      v9 = 0LL;
      for ( i = 0LL; i < 15; i += 3LL )
      {
        v11 = (&IrpHandlingTable)[i];
        v12 = (char *)Buffer - (char *)v11;
        do
        {
          v13 = *(wchar_t *)((char *)v11 + v12);
          v14 = *v11 - v13;
          if ( v14 )
            break;
          ++v11;
        }
        while ( v13 );
        if ( !v14 )
        {
          if ( v9 == (char *)-1LL )
            break;
          a1 = v4;
          CurrentStackLocation->FileObject->FsContext = v9;
          a2 = v3;
          return (unsigned int)guard_dispatch_icall_no_overrides(a1, a2);
        }
        ++v9;
      }
    }
    v6 = -1073741811;
    v3->IoStatus.Status = -1073741811;
    goto LABEL_16;
  }
  if ( FileObject->FsContext >= (PVOID)5 )
  {
    v6 = -1073741808;
    a2->IoStatus.Status = -1073741808;
LABEL_16:
    IofCompleteRequest(v3, 0);
    return v6;
  }
  return (unsigned int)guard_dispatch_icall_no_overrides(a1, a2);
}
