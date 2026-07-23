/*
 * XREFs of NtReadFileScatter @ 0x140ABB0B0
 * Callers:
 *     <none>
 * Callees:
 *     IopReferenceFileObject @ 0x1403EB740 (IopReferenceFileObject.c)
 *     IopReadFileScatter @ 0x140A8AFD8 (IopReadFileScatter.c)
 */

NTSTATUS __cdecl NtReadFileScatter(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PFILE_SEGMENT_ELEMENT SegmentArray,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  NTSTATUS result; // eax
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-18h] BYREF

  BugCheckParameter2 = 0LL;
  result = IopReferenceFileObject(FileHandle, 1u, KeGetCurrentThread()->PreviousMode, (PVOID *)&BugCheckParameter2, 0LL);
  if ( result >= 0 )
    return IopReadFileScatter(
             (struct _FILE_OBJECT *)BugCheckParameter2,
             Event,
             (__int64)ApcRoutine,
             ApcContext,
             (unsigned __int64)IoStatusBlock,
             (Length >> 12) + ((Length & 0xFFF) != 0),
             SegmentArray,
             Length,
             (__int64)ByteOffset,
             Key,
             0LL,
             0LL);
  return result;
}
