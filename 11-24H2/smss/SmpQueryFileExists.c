/*
 * XREFs of SmpQueryFileExists @ 0x1400126C4
 * Callers:
 *     SmpCreateTempFile @ 0x1400120D4 (SmpCreateTempFile.c)
 *     SmpGetDumpDestination @ 0x14001234C (SmpGetDumpDestination.c)
 * Callees:
 *     <none>
 */

char __fastcall SmpQueryFileExists(struct _UNICODE_STRING *a1)
{
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *FileHandle; // [rsp+80h] [rbp+10h] BYREF

  FileHandle = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  IoStatusBlock = 0LL;
  ObjectAttributes.Attributes = 64;
  if ( NtOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u) < 0 )
    return 0;
  NtClose(FileHandle);
  return 1;
}
