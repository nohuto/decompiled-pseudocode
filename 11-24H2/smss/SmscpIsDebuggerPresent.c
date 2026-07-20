/*
 * XREFs of SmscpIsDebuggerPresent @ 0x1400197E4
 * Callers:
 *     SmscpParseArgs @ 0x140001FE0 (SmscpParseArgs.c)
 * Callees:
 *     <none>
 */

__int64 SmscpIsDebuggerPresent()
{
  NTSTATUS v0; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *FileHandle; // [rsp+80h] [rbp+10h] BYREF

  FileHandle = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  IoStatusBlock = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L":<";
  ObjectAttributes.Attributes = 64;
  v0 = NtOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  if ( v0 >= 0 )
    NtClose(FileHandle);
  return (unsigned int)v0;
}
