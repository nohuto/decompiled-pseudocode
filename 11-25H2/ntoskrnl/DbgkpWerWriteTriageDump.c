/*
 * XREFs of DbgkpWerWriteTriageDump @ 0x1406FD280
 * Callers:
 *     DbgkpWerCaptureLiveTriageDump @ 0x1406FCA20 (DbgkpWerCaptureLiveTriageDump.c)
 * Callees:
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     ZwWriteFile @ 0x14069B240 (ZwWriteFile.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     DbgkpWerUpdateTriageDumpHeader @ 0x1406FD088 (DbgkpWerUpdateTriageDumpHeader.c)
 *     DbgkpWerWriteSecondaryData @ 0x1406FD11C (DbgkpWerWriteSecondaryData.c)
 */

__int64 __fastcall DbgkpWerWriteTriageDump(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int updated; // ebx
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp+8h] BYREF

  FileHandle = 0LL;
  v2 = *(_QWORD *)(a1 + 96);
  IoStatusBlock = 0LL;
  v3 = WerLiveKernelOpenDumpFile(v2, &FileHandle);
  updated = v3;
  if ( v3 >= 0 )
  {
    updated = DbgkpWerUpdateTriageDumpHeader(a1);
    if ( updated >= 0 )
    {
      v5 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, *(PVOID *)(a1 + 136), *(_DWORD *)(a1 + 144), 0LL, 0LL);
      updated = v5;
      if ( v5 >= 0 )
      {
        v6 = DbgkpWerWriteSecondaryData(a1, FileHandle);
        updated = v6;
        if ( v6 < 0 )
          DbgPrintEx(5u, 0, "DBGK: Writing secondary data failed with Status 0x%X\n", (unsigned int)v6);
      }
      else
      {
        DbgPrintEx(5u, 0, "DBGK: Triage dump write failed with Status 0x%X\n", (unsigned int)v5);
      }
    }
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: DbgkWerWriteTriageDump: WerLiveKernelOpenDumpFile failed, status 0x%X\n", (unsigned int)v3);
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)updated;
}
