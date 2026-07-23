/*
 * XREFs of PfSnIsVolumeMounted @ 0x140954FEC
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x1409549CC (PfSnOpenVolumesForPrefetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 *     NtQueryVolumeInformationFile @ 0x140957060 (NtQueryVolumeInformationFile.c)
 */

__int64 __fastcall PfSnIsVolumeMounted(PCWSTR SourceString, int *a2, int *a3)
{
  NTSTATUS File; // ebx
  int v6; // ecx
  __int64 FsInformation; // [rsp+80h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-1h] BYREF
  int v11[2]; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v12; // [rsp+B0h] [rbp+17h]
  UNICODE_STRING *p_DestinationString; // [rsp+B8h] [rbp+1Fh]
  int v14; // [rsp+C0h] [rbp+27h]
  int v15; // [rsp+C4h] [rbp+2Bh]
  __int128 v16; // [rsp+C8h] [rbp+2Fh]
  HANDLE FileHandle; // [rsp+118h] [rbp+7Fh] BYREF

  FileHandle = 0LL;
  FsInformation = 0LL;
  v11[1] = 0;
  v15 = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  p_DestinationString = &DestinationString;
  v11[0] = 48;
  v12 = 0LL;
  v14 = 576;
  v16 = 0LL;
  File = IopCreateFile(
           (int)&FileHandle,
           1048704,
           (int)v11,
           (int)&IoStatusBlock,
           0LL,
           0,
           7,
           1,
           32,
           0LL,
           0,
           0,
           0LL,
           0,
           32,
           0LL);
  if ( File >= 0 )
  {
    File = NtQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &FsInformation, 8u, FileFsDeviceInformation);
    if ( (File & 0xC0000000) != 0xC0000000 )
    {
      File = 0;
      v6 = BYTE4(FsInformation) & 1;
      *a2 = (HIDWORD(FsInformation) >> 5) & 1;
      *a3 = v6;
    }
    NtClose(FileHandle);
  }
  return (unsigned int)File;
}
