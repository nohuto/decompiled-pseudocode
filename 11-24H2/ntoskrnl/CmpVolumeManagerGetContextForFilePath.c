/*
 * XREFs of CmpVolumeManagerGetContextForFilePath @ 0x1407D8B88
 * Callers:
 *     CmpVolumeManagerCreateContextsForWellKnownVolumes @ 0x1406F9250 (CmpVolumeManagerCreateContextsForWellKnownVolumes.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwCreateFile @ 0x1406A6EB0 (ZwCreateFile.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140966DB8 (CmpVolumeManagerGetContextForFile.c)
 */

__int64 __fastcall CmpVolumeManagerGetContextForFilePath(__int64 a1, UNICODE_STRING *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  NTSTATUS ContextForFile; // ebx
  __int64 v7; // r8
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+27h] BYREF
  HANDLE FileHandle; // [rsp+B8h] [rbp+67h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  IoStatusBlock = 0LL;
  ObjectAttributes.Attributes = 576;
  ContextForFile = ZwCreateFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0, 0LL, 0);
  if ( ContextForFile >= 0 )
    ContextForFile = CmpVolumeManagerGetContextForFile(v5, FileHandle, v7, a4);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)ContextForFile;
}
