/*
 * XREFs of RtlpQueryDiskSpacePolicyByHandle @ 0x18015B764
 * Callers:
 *     RtlpQueryDiskSpacePolicy @ 0x18015B614 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     ZwQueryVolumeInformationFile @ 0x180160970 (ZwQueryVolumeInformationFile.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpQueryDiskSpacePolicyByHandle(void *a1, int *a2)
{
  NTSTATUS result; // eax
  unsigned __int64 v4; // rcx
  int v5; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  __int128 FsInformation; // [rsp+40h] [rbp-38h] BYREF
  __int128 v8; // [rsp+50h] [rbp-28h]

  IoStatusBlock = 0LL;
  FsInformation = 0LL;
  v8 = 0LL;
  result = ZwQueryVolumeInformationFile(a1, &IoStatusBlock, &FsInformation, 0x20u, FileFsFullSizeInformation);
  if ( result >= 0 )
  {
    v4 = FsInformation * DWORD2(v8) * (unsigned __int64)HIDWORD(v8);
    if ( v4 > 0x200000000LL )
    {
      if ( v4 > 0x800000000LL )
      {
        v5 = 20;
        if ( v4 <= 0x2000000000LL )
          v5 = 15;
        *a2 = v5;
      }
      else
      {
        *a2 = 10;
      }
    }
    else
    {
      *a2 = 5;
    }
    return 0;
  }
  return result;
}
