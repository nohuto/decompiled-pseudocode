/*
 * XREFs of IommupHvValidatePageRequestGpa @ 0x1405662C4
 * Callers:
 *     IommuProcessPageRequestQueue @ 0x140564570 (IommuProcessPageRequestQueue.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvValidatePageRequestGpa(int a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // r9
  _QWORD v6[4]; // [rsp+20h] [rbp-38h] BYREF

  if ( IommupHvGpaAlwaysValid )
    return 0LL;
  v6[3] = 0LL;
  v6[0] = a2;
  v5 = a4 & 0xF;
  v6[2] = v5 | a3 & 0xFFFFFFFFFFFFF000uLL;
  v6[1] = ((unsigned __int64)(a1 & 0xFFFFF) << 11) | 0x4000000000000400LL;
  return guard_dispatch_icall_no_overrides(1LL, v6, 0LL, v5);
}
