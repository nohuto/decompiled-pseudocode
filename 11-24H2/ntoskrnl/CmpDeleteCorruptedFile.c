/*
 * XREFs of CmpDeleteCorruptedFile @ 0x140669E80
 * Callers:
 *     CmpDeleteCorruptedLogfile @ 0x1407E6BF0 (CmpDeleteCorruptedLogfile.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1406A7890 (ZwSetInformationFile.c)
 *     ZwCreateFile @ 0x1406A7E50 (ZwCreateFile.c)
 */

NTSTATUS __fastcall CmpDeleteCorruptedFile(UNICODE_STRING *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+27h] BYREF
  char FileInformation; // [rsp+B8h] [rbp+67h] BYREF
  HANDLE FileHandle; // [rsp+C0h] [rbp+6Fh] BYREF

  ObjectAttributes.ObjectName = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateFile(&FileHandle, 0x110100u, &ObjectAttributes, &IoStatusBlock, 0LL, 2u, 0, 1u, 0x200040u, 0LL, 0);
  if ( result >= 0 )
  {
    FileInformation = 1;
    v2 = ZwSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 1u, FileDispositionInformation);
    ZwClose(FileHandle);
    return v2;
  }
  return result;
}
