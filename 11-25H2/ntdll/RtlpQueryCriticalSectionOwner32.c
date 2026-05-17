/*
 * XREFs of RtlpQueryCriticalSectionOwner32 @ 0x180135880
 * Callers:
 *     RtlpQueryCriticalSectionOwner @ 0x180099C74 (RtlpQueryCriticalSectionOwner.c)
 * Callees:
 *     ZwReadVirtualMemory @ 0x180163A00 (ZwReadVirtualMemory.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpQueryCriticalSectionOwner32(__int64 a1, int a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  __int128 v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-38h]
  __int128 v8; // [rsp+48h] [rbp-30h] BYREF
  __int128 v9; // [rsp+58h] [rbp-20h]

  v2 = a2 - 4;
  v6 = 0LL;
  v3 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( (int)ZwReadVirtualMemory(a1, (unsigned int)(a2 - 4), &v6, 24LL, 0LL) >= 0
    && (_DWORD)v6
    && (int)ZwReadVirtualMemory(a1, (unsigned int)v6, &v8, 32LL, 0LL) >= 0
    && DWORD1(v8) == v2
    && HIWORD(v9) == 17235 )
  {
    return HIDWORD(v6);
  }
  return v3;
}
