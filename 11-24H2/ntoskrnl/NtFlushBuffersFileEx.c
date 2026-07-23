/*
 * XREFs of NtFlushBuffersFileEx @ 0x140957700
 * Callers:
 *     NtFlushBuffersFile @ 0x1409576D0 (NtFlushBuffersFile.c)
 * Callees:
 *     IopReferenceFileObject @ 0x1403EB740 (IopReferenceFileObject.c)
 *     IopFlushBuffersFile @ 0x140957794 (IopFlushBuffersFile.c)
 */

NTSTATUS __cdecl NtFlushBuffersFileEx(
        HANDLE FileHandle,
        ULONG Flags,
        PVOID Parameters,
        ULONG ParametersSize,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  NTSTATUS result; // eax
  struct _OBJECT_HANDLE_INFORMATION v6; // [rsp+40h] [rbp-18h] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-10h] BYREF

  FileObject = 0LL;
  v6 = 0LL;
  result = IopReferenceFileObject(FileHandle, 0, KeGetCurrentThread()->PreviousMode, (PVOID *)&FileObject, &v6);
  if ( result >= 0 )
    return IopFlushBuffersFile(FileObject, v6.GrantedAccess, 0LL, 0LL, (__int64)IoStatusBlock);
  return result;
}
