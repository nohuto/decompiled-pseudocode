/*
 * XREFs of DbgkpSectionToFileHandle @ 0x140A83008
 * Callers:
 *     DbgkMapViewOfSection @ 0x140897F08 (DbgkMapViewOfSection.c)
 *     DbgkCreateThread @ 0x1408FED24 (DbgkCreateThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140939BE0 (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     ZwOpenFile @ 0x1406A6A70 (ZwOpenFile.c)
 *     MmGetFileNameForSection @ 0x140A830BC (MmGetFileNameForSection.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

HANDLE __fastcall DbgkpSectionToFileHandle(__int64 a1)
{
  PVOID v1; // rdi
  NTSTATUS v2; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  PVOID P; // [rsp+88h] [rbp+18h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp+20h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  P = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  IoStatusBlock = 0LL;
  if ( (int)MmGetFileNameForSection(a1, &P) < 0 )
    return 0LL;
  v1 = P;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)P;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 1600;
  v2 = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  ExFreePoolWithTag(v1, 0);
  if ( v2 < 0 )
    return 0LL;
  else
    return FileHandle;
}
