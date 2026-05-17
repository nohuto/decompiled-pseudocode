/*
 * XREFs of RtlpQueryCriticalSectionOwner64 @ 0x1800442E0
 * Callers:
 *     RtlpQueryCriticalSectionOwner @ 0x180045F94 (RtlpQueryCriticalSectionOwner.c)
 * Callees:
 *     ZwReadVirtualMemory @ 0x180162470 (ZwReadVirtualMemory.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpQueryCriticalSectionOwner64(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int128 v6; // [rsp+30h] [rbp-19h] BYREF
  __int128 v7; // [rsp+40h] [rbp-9h]
  __int64 v8; // [rsp+50h] [rbp+7h]
  _OWORD v9[2]; // [rsp+58h] [rbp+Fh] BYREF
  __int128 v10; // [rsp+78h] [rbp+2Fh]

  v2 = a2 - 8;
  v8 = 0LL;
  v3 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  if ( (int)ZwReadVirtualMemory(a1, a2 - 8, &v6, 40LL, 0LL) >= 0
    && (_QWORD)v6
    && (int)ZwReadVirtualMemory(a1, v6, v9, 48LL, 0LL) >= 0
    && *((_QWORD *)&v9[0] + 1) == v2
    && HIWORD(v10) == 17235 )
  {
    return v7;
  }
  return v3;
}
