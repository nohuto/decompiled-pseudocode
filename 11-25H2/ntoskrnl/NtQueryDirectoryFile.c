/*
 * XREFs of NtQueryDirectoryFile @ 0x1408C7280
 * Callers:
 *     <none>
 * Callees:
 *     IopSynchronousServiceTail @ 0x1408C5420 (IopSynchronousServiceTail.c)
 *     BuildQueryDirectoryIrp @ 0x1408C6A20 (BuildQueryDirectoryIrp.c)
 */

NTSTATUS __stdcall NtQueryDirectoryFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        BOOLEAN ReturnSingleEntry,
        PUNICODE_STRING FileName,
        BOOLEAN RestartScan)
{
  bool v11; // cf
  char v13; // cl
  NTSTATUS result; // eax
  SIZE_T v15; // [rsp+30h] [rbp-51h]
  char v16; // [rsp+50h] [rbp-31h]
  __int64 v17; // [rsp+88h] [rbp+7h] BYREF
  __int64 v18; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v19; // [rsp+98h] [rbp+17h] BYREF

  v11 = ReturnSingleEntry != 0;
  ReturnSingleEntry = 0;
  v19 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v13 = (v11 ? 2 : 0) | 1;
  if ( !RestartScan )
    v13 = v11 ? 2 : 0;
  LODWORD(v15) = Length;
  result = BuildQueryDirectoryIrp(
             FileHandle,
             Event,
             (__int64)ApcRoutine,
             (__int64)ApcContext,
             (unsigned __int64)IoStatusBlock,
             (char *)FileInformation,
             v15,
             FileInformationClass,
             v13,
             (__m128i *)FileName,
             v16,
             &ReturnSingleEntry,
             (PDEVICE_OBJECT *)&v19,
             &v18,
             (struct _FILE_OBJECT **)&v17);
  if ( !result )
    return IopSynchronousServiceTail((struct _DEVICE_OBJECT *)v19, v18, v17, 1, 0, ReturnSingleEntry, 2u);
  return result;
}
