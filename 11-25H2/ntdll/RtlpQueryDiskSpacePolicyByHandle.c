/*
 * XREFs of RtlpQueryDiskSpacePolicyByHandle @ 0x18015E868
 * Callers:
 *     RtlpQueryDiskSpacePolicy @ 0x18015E718 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     ZwQueryVolumeInformationFile @ 0x180163B40 (ZwQueryVolumeInformationFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpQueryDiskSpacePolicyByHandle(__int64 a1, int *a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  int v5; // eax
  int v6; // [rsp+20h] [rbp-58h]
  __int128 v7; // [rsp+30h] [rbp-48h] BYREF
  __int128 v8; // [rsp+40h] [rbp-38h] BYREF
  __int128 v9; // [rsp+50h] [rbp-28h]

  v6 = 7;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  result = ZwQueryVolumeInformationFile(a1, &v7, &v8, 32LL, v6);
  if ( (int)result >= 0 )
  {
    v4 = v8 * DWORD2(v9) * (unsigned __int64)HIDWORD(v9);
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
    return 0LL;
  }
  return result;
}
