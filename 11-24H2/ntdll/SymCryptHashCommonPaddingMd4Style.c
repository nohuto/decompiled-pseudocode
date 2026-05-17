/*
 * XREFs of SymCryptHashCommonPaddingMd4Style @ 0x18015B808
 * Callers:
 *     SymCryptMd5Result @ 0x180158E30 (SymCryptMd5Result.c)
 *     SymCryptMd4Result @ 0x180161720 (SymCryptMd4Result.c)
 * Callees:
 *     SymCryptWipeAsm @ 0x180131590 (SymCryptWipeAsm.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SymCryptHashCommonPaddingMd4Style(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  unsigned __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF

  v2 = *a2;
  v7 = 0LL;
  *((_BYTE *)a2 + v2 + 32) = 0x80;
  v5 = v2 + 1;
  if ( v5 > 0x38 )
  {
    SymCryptWipeAsm((__int64)a2 + v5 + 32, 64 - v5);
    (*(void (__fastcall **)(char *, unsigned int *, __int64, __int64 *))(a1 + 24))(
      (char *)a2 + *(unsigned int *)(a1 + 52),
      a2 + 8,
      64LL,
      &v7);
    v5 = 0LL;
  }
  SymCryptWipeAsm((__int64)a2 + v5 + 32, 64 - v5);
  *((_QWORD *)a2 + 11) = 8LL * *((_QWORD *)a2 + 2);
  return (*(__int64 (__fastcall **)(char *, unsigned int *, __int64, __int64 *))(a1 + 24))(
           (char *)a2 + *(unsigned int *)(a1 + 52),
           a2 + 8,
           64LL,
           &v7);
}
