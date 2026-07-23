/*
 * XREFs of HvpIncrementalLogFileEnumeratorAdvance @ 0x140A84C48
 * Callers:
 *     HvpAnalyzeSingleLogFile @ 0x14096CFFC (HvpAnalyzeSingleLogFile.c)
 *     HvpApplyIncrementalLogFile @ 0x140A84B40 (HvpApplyIncrementalLogFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HvpReadLogEntryHeader @ 0x140A84D70 (HvpReadLogEntryHeader.c)
 *     HvpIsLogEntryHeaderCoherent @ 0x140A84DCC (HvpIsLogEntryHeaderCoherent.c)
 *     HvpIsMetadataArrayCoherent @ 0x140A84E3C (HvpIsMetadataArrayCoherent.c)
 *     HvpLogEntryCheckDataChecksum @ 0x140AA8C08 (HvpLogEntryCheckDataChecksum.c)
 */

__int64 __fastcall HvpIncrementalLogFileEnumeratorAdvance(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  int v7; // ecx
  __int128 v8; // [rsp+38h] [rbp-38h] BYREF
  __int128 v9; // [rsp+48h] [rbp-28h]
  __int64 v10; // [rsp+58h] [rbp-18h]

  v2 = *(_DWORD *)a1;
  v3 = 0;
  v10 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( !v2 || v2 + 40 < v2 )
    return (unsigned int)-2147483622;
  v7 = HvpReadLogEntryHeader(v2, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), &v8);
  if ( v7 >= 0 )
  {
    if ( !(unsigned __int8)HvpIsLogEntryHeaderCoherent(&v8, v2) || HIDWORD(v8) != *(_DWORD *)(a1 + 4) )
      return (unsigned int)-2147483622;
    v7 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 16), v2);
    if ( v7 >= 0 )
    {
      if ( (unsigned __int8)HvpIsMetadataArrayCoherent(&v8, 40LL, DWORD1(v9))
        && (unsigned int)HvpLogEntryCheckDataChecksum(0LL, DWORD1(v8), &v8) )
      {
        ++*(_DWORD *)(a1 + 4);
        *(_DWORD *)a1 = v2 + DWORD1(v8);
        *a2 = 0LL;
        return v3;
      }
      return (unsigned int)-2147483622;
    }
  }
  v3 = -2147483622;
  if ( v7 != -1073741807 )
    return (unsigned int)-1073741491;
  return v3;
}
