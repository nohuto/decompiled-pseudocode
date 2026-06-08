/*
 * XREFs of sub_14000480C @ 0x14000480C
 * Callers:
 *     sub_1400046C0 @ 0x1400046C0 (sub_1400046C0.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14000480C(__int64 a1, int *a2)
{
  int v2; // eax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  if ( !byte_1400197F0 )
    return 3221225659LL;
  v2 = *a2;
  v4 = 0LL;
  DWORD1(v4) = v2;
  DWORD2(v4) = a2[1];
  BYTE12(v4) = *((_BYTE *)a2 + 8);
  LODWORD(v4) = 82;
  return ((__int64 (__fastcall *)(__int128 *))qword_1400194C0)(&v4);
}
