/*
 * XREFs of BgkAcquireDisplayOwnership @ 0x14058CBC0
 * Callers:
 *     <none>
 * Callees:
 *     BgLibraryEnable @ 0x140698DC4 (BgLibraryEnable.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BgkAcquireDisplayOwnership(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _OWORD v4[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v5; // [rsp+48h] [rbp-20h]

  memset(v4, 0, sizeof(v4));
  v5 = 0LL;
  if ( !byte_140E65EE8 || byte_140E65EC0 )
  {
    result = qword_140E65EA8;
    if ( qword_140E65EA8 )
    {
      LOBYTE(a1) = 1;
      result = guard_dispatch_icall_no_overrides(a1, v4);
      if ( (int)result >= 0 )
      {
        LOBYTE(v3) = 1;
        result = BgLibraryEnable(v4, v3);
        if ( (int)result >= 0 )
          byte_140E65EE8 = 1;
        qword_140E65EB0 = 0LL;
      }
    }
  }
  else
  {
    LOBYTE(a2) = 1;
    return BgLibraryEnable(0LL, a2);
  }
  return result;
}
