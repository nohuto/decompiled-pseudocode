/*
 * XREFs of BgkAcquireDisplayOwnership @ 0x14058FBA0
 * Callers:
 *     <none>
 * Callees:
 *     BgLibraryEnable @ 0x140697D44 (BgLibraryEnable.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BgkAcquireDisplayOwnership(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v7[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v8; // [rsp+48h] [rbp-20h]

  memset(v7, 0, sizeof(v7));
  v8 = 0LL;
  if ( !byte_140E65DB1 || byte_140E65D80 )
  {
    result = qword_140E65D60;
    if ( qword_140E65D60 )
    {
      v6 = 0LL;
      LOBYTE(a1) = 1;
      result = guard_dispatch_icall_no_overrides(a1, v7, &v6, a4);
      if ( (int)result >= 0 )
      {
        LOBYTE(v5) = 1;
        result = BgLibraryEnable(v7, v5);
        if ( (int)result >= 0 )
          byte_140E65DB1 = 1;
        qword_140E65D70 = 0LL;
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
