/*
 * XREFs of NtQueryDirectoryFile @ 0x1408C2AE0
 * Callers:
 *     <none>
 * Callees:
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 *     BuildQueryDirectoryIrp @ 0x1408C22B0 (BuildQueryDirectoryIrp.c)
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
  __int64 v17; // [rsp+80h] [rbp-1h] BYREF
  __int64 v18; // [rsp+88h] [rbp+7h] BYREF
  __int64 v19; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+98h] [rbp+17h] BYREF

  v11 = ReturnSingleEntry != 0;
  ReturnSingleEntry = 0;
  LOBYTE(v17) = 0;
  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v13 = (v11 ? 2 : 0) | 1;
  if ( !RestartScan )
    v13 = v11 ? 2 : 0;
  LODWORD(v15) = Length;
  result = BuildQueryDirectoryIrp(
             FileHandle,
             Event,
             (__int64)ApcRoutine,
             ApcContext,
             (unsigned __int64)IoStatusBlock,
             (char *)FileInformation,
             v15,
             FileInformationClass,
             v13,
             (__m128i *)FileName,
             v16,
             &ReturnSingleEntry,
             (PDEVICE_OBJECT *)&v20,
             (PIRP *)&v19,
             (struct _FILE_OBJECT **)&v18,
             (PIRP)&v17);
  if ( !result )
    return IopSynchronousServiceTail((struct _DEVICE_OBJECT *)v20, v19, v18, 1, v17, ReturnSingleEntry, 2u);
  return result;
}
