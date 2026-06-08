/*
 * XREFs of PepPlatformIdleVeto @ 0x140003FFC
 * Callers:
 *     PepDevicePowerControlCallback @ 0x140003EB0 (PepDevicePowerControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PepPlatformIdleVeto(__int64 a1, int *a2)
{
  int v2; // eax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  if ( !Src && !qword_140019828 && !qword_140019830 )
    return 3221225659LL;
  v2 = *a2;
  v4 = 0LL;
  DWORD1(v4) = v2;
  DWORD2(v4) = a2[1];
  BYTE12(v4) = *((_BYTE *)a2 + 8);
  LODWORD(v4) = 82;
  return ((__int64 (__fastcall *)(__int128 *))qword_1400194F0)(&v4);
}
