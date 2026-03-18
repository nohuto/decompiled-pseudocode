/*
 * XREFs of HvpIncrementalLogFileEnumeratorAdvance @ 0x140A88758
 * Callers:
 *     HvpAnalyzeSingleLogFile @ 0x1409847EC (HvpAnalyzeSingleLogFile.c)
 *     HvpApplyIncrementalLogFile @ 0x140A88650 (HvpApplyIncrementalLogFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HvpReadLogEntryHeader @ 0x140A88880 (HvpReadLogEntryHeader.c)
 *     HvpIsLogEntryHeaderCoherent @ 0x140A888DC (HvpIsLogEntryHeaderCoherent.c)
 *     HvpIsMetadataArrayCoherent @ 0x140A8894C (HvpIsMetadataArrayCoherent.c)
 *     HvpLogEntryCheckDataChecksum @ 0x140AADB88 (HvpLogEntryCheckDataChecksum.c)
 */

__int64 __fastcall HvpIncrementalLogFileEnumeratorAdvance(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  int v7; // ecx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  __int128 v11; // [rsp+38h] [rbp-38h] BYREF
  __int128 v12; // [rsp+48h] [rbp-28h]
  __int64 v13; // [rsp+58h] [rbp-18h]

  v2 = *(_DWORD *)a1;
  v3 = 0;
  v13 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( !v2 || v2 + 40 < v2 )
    return (unsigned int)-2147483622;
  v7 = HvpReadLogEntryHeader(v2, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), &v11);
  if ( v7 >= 0 )
  {
    if ( !(unsigned __int8)HvpIsLogEntryHeaderCoherent(&v11, v2) || HIDWORD(v11) != *(_DWORD *)(a1 + 4) )
      return (unsigned int)-2147483622;
    v7 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 16), v2, DWORD1(v11), &v10);
    if ( v7 >= 0 )
    {
      v8 = v10;
      if ( (unsigned __int8)HvpIsMetadataArrayCoherent(&v11, v10 + 40, DWORD1(v12))
        && (unsigned int)HvpLogEntryCheckDataChecksum(v8, DWORD1(v11), &v11) )
      {
        ++*(_DWORD *)(a1 + 4);
        v9 = v10;
        *(_DWORD *)a1 = v2 + DWORD1(v11);
        *a2 = v9;
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
