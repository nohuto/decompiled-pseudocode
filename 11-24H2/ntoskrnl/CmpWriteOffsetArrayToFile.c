/*
 * XREFs of CmpWriteOffsetArrayToFile @ 0x1407DCE8C
 * Callers:
 *     CmDumpKeyToFile @ 0x1407CD274 (CmDumpKeyToFile.c)
 *     CmpFlushBackupHive @ 0x1407DC808 (CmpFlushBackupHive.c)
 * Callees:
 *     ZwSetInformationFile @ 0x1406A7890 (ZwSetInformationFile.c)
 *     ZwFlushBuffersFile @ 0x1406A7D10 (ZwFlushBuffersFile.c)
 *     CmpDoFileWrite @ 0x140A466A0 (CmpDoFileWrite.c)
 */

NTSTATUS __fastcall CmpWriteOffsetArrayToFile(__int64 a1, int a2, int a3, int a4, HANDLE FileHandle)
{
  NTSTATUS result; // eax
  int v8; // edx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+54h] [rbp+Ch]

  v11 = 0;
  v10 = a4;
  IoStatusBlock = 0LL;
  result = ZwSetInformationFile(FileHandle, &IoStatusBlock, &v10, 8u, FileEndOfFileInformation);
  if ( result >= 0 )
  {
    result = CmpDoFileWrite((_DWORD)FileHandle, v8, a3, a2, 0);
    if ( result >= 0 )
      return ZwFlushBuffersFile(FileHandle, &IoStatusBlock);
  }
  return result;
}
