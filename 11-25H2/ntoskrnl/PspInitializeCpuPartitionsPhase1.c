/*
 * XREFs of PspInitializeCpuPartitionsPhase1 @ 0x140C244C4
 * Callers:
 *     PspInitPhase1 @ 0x140C23BF4 (PspInitPhase1.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x14069C6C0 (ZwCreateDirectoryObject.c)
 *     ObInsertObject @ 0x14089FF30 (ObInsertObject.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140C241A4 (PspInitializeCpuPartitionsDefaultSd.c)
 */

__int64 PspInitializeCpuPartitionsPhase1()
{
  int v0; // eax
  PVOID v1; // rdi
  NTSTATUS inserted; // ebx
  HANDLE v3; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE DirectoryHandle; // [rsp+80h] [rbp+20h] BYREF
  PVOID P; // [rsp+88h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+30h] BYREF

  DirectoryHandle = 0LL;
  Handle = 0LL;
  P = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v0 = PspInitializeCpuPartitionsDefaultSd(&P, 1);
  v1 = P;
  inserted = v0;
  if ( v0 < 0 )
    goto LABEL_5;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspCpuPartitionDirectoryPathString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 592;
  ObjectAttributes.SecurityDescriptor = P;
  inserted = ZwCreateDirectoryObject(&DirectoryHandle, 4u, &ObjectAttributes);
  if ( inserted < 0 || (inserted = ObInsertObject(PspSystemCpuPartition, 0LL, 0xE0007u, 0, 0LL, &Handle), inserted < 0) )
  {
LABEL_5:
    v3 = DirectoryHandle;
  }
  else
  {
    v3 = 0LL;
    PspCpuPartitionDirectoryHandle = (__int64)DirectoryHandle;
    DirectoryHandle = 0LL;
  }
  if ( Handle )
  {
    ZwClose(Handle);
    v3 = DirectoryHandle;
  }
  if ( v3 )
    ZwClose(v3);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  return (unsigned int)inserted;
}
