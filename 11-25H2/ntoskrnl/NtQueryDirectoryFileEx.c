/*
 * XREFs of NtQueryDirectoryFileEx @ 0x1408C6930
 * Callers:
 *     <none>
 * Callees:
 *     IopSynchronousServiceTail @ 0x1408C5420 (IopSynchronousServiceTail.c)
 *     BuildQueryDirectoryIrp @ 0x1408C6A20 (BuildQueryDirectoryIrp.c)
 */

NTSTATUS __cdecl NtQueryDirectoryFileEx(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG QueryFlags,
        PUNICODE_STRING FileName)
{
  NTSTATUS result; // eax
  SIZE_T v11; // [rsp+30h] [rbp-78h]
  char v12; // [rsp+50h] [rbp-58h]
  char v13; // [rsp+80h] [rbp-28h] BYREF
  KPROCESSOR_MODE v14[7]; // [rsp+81h] [rbp-27h] BYREF
  __int64 v15; // [rsp+88h] [rbp-20h] BYREF
  __int64 v16; // [rsp+90h] [rbp-18h] BYREF
  struct _DEVICE_OBJECT *v17; // [rsp+98h] [rbp-10h] BYREF

  v13 = 0;
  v17 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v14[0] = 0;
  LODWORD(v11) = Length;
  result = BuildQueryDirectoryIrp(
             FileHandle,
             (__int64)IoStatusBlock,
             FileInformation,
             v11,
             FileInformationClass,
             QueryFlags,
             (__int64)FileName,
             v12,
             (__int64)&v13,
             (__int64)&v17,
             (__int64)&v16,
             (__int64)&v15,
             v14);
  if ( !result )
    return IopSynchronousServiceTail(v17, v16, v15, 1, v14[0], v13, 2u);
  return result;
}
