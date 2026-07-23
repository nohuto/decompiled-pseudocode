/*
 * XREFs of NtWriteFileGather @ 0x140AA6840
 * Callers:
 *     <none>
 * Callees:
 *     IopReferenceFileObject @ 0x1403F6490 (IopReferenceFileObject.c)
 *     IopWriteFileGather @ 0x140A9170C (IopWriteFileGather.c)
 */

NTSTATUS __cdecl NtWriteFileGather(
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
  struct _OBJECT_HANDLE_INFORMATION v13; // [rsp+70h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-10h] BYREF

  BugCheckParameter2 = 0LL;
  v13 = 0LL;
  result = IopReferenceFileObject(FileHandle, 0, KeGetCurrentThread()->PreviousMode, (PVOID *)&BugCheckParameter2, &v13);
  if ( result >= 0 )
    return IopWriteFileGather(
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
             v13.GrantedAccess,
             0LL,
             0LL,
             0);
  return result;
}
