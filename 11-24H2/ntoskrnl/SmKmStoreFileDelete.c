/*
 * XREFs of SmKmStoreFileDelete @ 0x14079AEB4
 * Callers:
 *     SmKmStoreFileCreate @ 0x14079A748 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x14079ABFC (SmKmStoreFileCreateForIoType.c)
 *     SmcCacheCleanup @ 0x14079CFE4 (SmcCacheCleanup.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IoSetThreadHardErrorMode @ 0x14045D2F0 (IoSetThreadHardErrorMode.c)
 *     ZwSetInformationFile @ 0x1406A68F0 (ZwSetInformationFile.c)
 */

__int64 __fastcall SmKmStoreFileDelete(__int64 a1)
{
  BOOLEAN v2; // al
  void *v3; // rcx
  BOOLEAN v4; // si
  NTSTATUS Status; // eax
  unsigned int v6; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  char FileInformation; // [rsp+50h] [rbp+8h] BYREF

  IoStatusBlock = 0LL;
  v2 = IoSetThreadHardErrorMode(0);
  v3 = *(void **)a1;
  FileInformation = 1;
  v4 = v2;
  Status = ZwSetInformationFile(v3, &IoStatusBlock, &FileInformation, 1u, FileDispositionInformation);
  v6 = 0;
  if ( Status == 259 )
  {
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 8) + 152LL), Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status < 0 )
    v6 = Status;
  IoSetThreadHardErrorMode(v4);
  return v6;
}
