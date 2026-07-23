/*
 * XREFs of RtlpQueryCriticalSectionOwner64 @ 0x180113770
 * Callers:
 *     RtlpQueryCriticalSectionOwner @ 0x180029F24 (RtlpQueryCriticalSectionOwner.c)
 * Callees:
 *     ZwReadVirtualMemory @ 0x180160830 (ZwReadVirtualMemory.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpQueryCriticalSectionOwner64(HANDLE ProcessHandle, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int128 Buffer; // [rsp+30h] [rbp-19h] BYREF
  __int128 v7; // [rsp+40h] [rbp-9h]
  __int64 v8; // [rsp+50h] [rbp+7h]
  _OWORD v9[2]; // [rsp+58h] [rbp+Fh] BYREF
  __int128 v10; // [rsp+78h] [rbp+2Fh]

  v2 = a2 - 8;
  v8 = 0LL;
  v3 = 0LL;
  Buffer = 0LL;
  v7 = 0LL;
  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  if ( ZwReadVirtualMemory(ProcessHandle, (PVOID)(a2 - 8), &Buffer, 0x28uLL, 0LL) >= 0
    && (_QWORD)Buffer
    && ZwReadVirtualMemory(ProcessHandle, (PVOID)Buffer, v9, 0x30uLL, 0LL) >= 0
    && *((_QWORD *)&v9[0] + 1) == v2
    && HIWORD(v10) == 17235 )
  {
    return v7;
  }
  return v3;
}
