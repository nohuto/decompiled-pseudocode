/*
 * XREFs of PiDaDispatch @ 0x1409FB870
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiDaDispatch(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  IRP *v5; // r8
  __int64 v6; // rbp
  PFILE_OBJECT FileObject; // rax
  unsigned int v8; // ebx
  wchar_t *Buffer; // rdi
  char *v11; // rdx
  unsigned __int64 i; // rax
  wchar_t *v13; // rcx
  __int64 v14; // r11
  int v15; // r10d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = a2;
  v6 = a1;
  FileObject = CurrentStackLocation->FileObject;
  if ( !CurrentStackLocation->MajorFunction )
  {
    Buffer = FileObject->FileName.Buffer;
    if ( Buffer )
    {
      v11 = 0LL;
      for ( i = 0LL; i < 15; i += 3LL )
      {
        v13 = (&IrpHandlingTable)[i];
        v14 = (char *)Buffer - (char *)v13;
        do
        {
          v15 = *(wchar_t *)((char *)v13 + v14);
          a4 = (unsigned int)*v13 - v15;
          if ( (_DWORD)a4 )
            break;
          ++v13;
        }
        while ( v15 );
        if ( !(_DWORD)a4 )
        {
          if ( v11 == (char *)-1LL )
            break;
          a1 = v6;
          CurrentStackLocation->FileObject->FsContext = v11;
          a2 = v5;
          return (unsigned int)guard_dispatch_icall_no_overrides(a1, a2, v5, a4);
        }
        ++v11;
      }
    }
    v8 = -1073741811;
    v5->IoStatus.Status = -1073741811;
    goto LABEL_16;
  }
  if ( FileObject->FsContext >= (PVOID)5 )
  {
    v8 = -1073741808;
    a2->IoStatus.Status = -1073741808;
LABEL_16:
    IofCompleteRequest(v5, 0);
    return v8;
  }
  return (unsigned int)guard_dispatch_icall_no_overrides(a1, a2, v5, a4);
}
