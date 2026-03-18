/*
 * XREFs of IoReplaceFileObjectName @ 0x140A6A840
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoReplaceFileObjectName(PFILE_OBJECT FileObject, PWSTR NewFileName, USHORT FileNameLength)
{
  USHORT MaximumLength; // di
  size_t v4; // rsi
  wchar_t *v7; // rcx
  wchar_t *Pool2; // rbp
  wchar_t *Buffer; // rcx
  USHORT v11; // ax

  MaximumLength = FileObject->FileName.MaximumLength;
  v4 = FileNameLength;
  if ( FileNameLength > MaximumLength )
  {
    MaximumLength = 56;
    if ( FileNameLength >= 0x38u )
    {
      MaximumLength = 120;
      if ( FileNameLength >= 0x78u )
      {
        v11 = 248;
        if ( FileNameLength >= 0xF8u )
          v11 = FileNameLength;
        MaximumLength = v11;
      }
    }
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return -1073741670;
    Buffer = FileObject->FileName.Buffer;
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
    FileObject->FileName.Buffer = Pool2;
    FileObject->FileName.MaximumLength = MaximumLength;
  }
  v7 = FileObject->FileName.Buffer;
  FileObject->FileName.Length = v4;
  if ( (_WORD)v4 )
  {
    memset_0(v7, 0, MaximumLength);
    memmove(FileObject->FileName.Buffer, NewFileName, v4);
  }
  else
  {
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0);
      FileObject->FileName.Buffer = 0LL;
    }
    FileObject->FileName.MaximumLength = 0;
  }
  return 0;
}
