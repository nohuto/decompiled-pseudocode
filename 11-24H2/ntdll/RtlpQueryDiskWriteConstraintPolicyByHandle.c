/*
 * XREFs of RtlpQueryDiskWriteConstraintPolicyByHandle @ 0x18015B894
 * Callers:
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x18015B82C (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     NtDeviceIoControlFile @ 0x180160130 (NtDeviceIoControlFile.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpQueryDiskWriteConstraintPolicyByHandle(void *a1, int *a2)
{
  NTSTATUS result; // eax
  int v4; // eax
  _IO_STATUS_BLOCK v5; // [rsp+50h] [rbp-38h] BYREF
  __int128 v6; // [rsp+60h] [rbp-28h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  result = NtDeviceIoControlFile(a1, 0LL, 0LL, 0LL, &v5, 0x22096Cu, 0LL, 0, &v6, 0x10u);
  if ( result >= 0 )
  {
    v4 = 50;
    if ( (_DWORD)v6 == 1 )
      v4 = 100;
    *a2 = v4;
    return 0;
  }
  if ( (unsigned int)(result + 0x3FFFFFFF) <= 1 || result == -1073741808 )
  {
    *a2 = 100;
    return 0;
  }
  return result;
}
