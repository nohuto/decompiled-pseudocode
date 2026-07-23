/*
 * XREFs of SymCryptHashCommonPaddingMd4Style @ 0x140528EE0
 * Callers:
 *     SymCryptMd5Result @ 0x1405264A0 (SymCryptMd5Result.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B504 (SymCryptWipe.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SymCryptHashCommonPaddingMd4Style(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  unsigned __int64 v5; // rax

  v2 = *a2;
  *((_BYTE *)a2 + v2 + 32) = 0x80;
  v5 = v2 + 1;
  if ( v5 > 0x38 )
  {
    SymCryptWipe((__int64)a2 + v5 + 32, 64 - v5);
    guard_dispatch_icall_no_overrides((char *)a2 + *(unsigned int *)(a1 + 52), a2 + 8);
    v5 = 0LL;
  }
  SymCryptWipe((__int64)a2 + v5 + 32, 64 - v5);
  *((_QWORD *)a2 + 11) = 8LL * *((_QWORD *)a2 + 2);
  return guard_dispatch_icall_no_overrides((char *)a2 + *(unsigned int *)(a1 + 52), a2 + 8);
}
