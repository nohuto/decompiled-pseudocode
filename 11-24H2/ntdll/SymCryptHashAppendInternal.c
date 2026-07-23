/*
 * XREFs of SymCryptHashAppendInternal @ 0x180159AD4
 * Callers:
 *     MD5Update @ 0x1801181E0 (MD5Update.c)
 *     SymCryptMd5Append @ 0x1801568D0 (SymCryptMd5Append.c)
 *     SymCryptSha1Append @ 0x180157290 (SymCryptSha1Append.c)
 *     MD4Update @ 0x180159F90 (MD4Update.c)
 *     SymCryptMd4Append @ 0x18015F400 (SymCryptMd4Append.c)
 * Callees:
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

size_t __fastcall SymCryptHashAppendInternal(__int64 a1, unsigned int *a2, char *a3, size_t a4)
{
  size_t v4; // rbx
  char *v5; // r14
  __int64 v8; // rsi
  size_t v9; // r15
  size_t result; // rax
  size_t v11; // rax
  size_t v12; // [rsp+30h] [rbp-48h] BYREF

  v12 = 0LL;
  v4 = a4;
  *((_QWORD *)a2 + 2) += a4;
  v5 = a3;
  if ( *((_QWORD *)a2 + 2) < a4 )
    ++*((_QWORD *)a2 + 3);
  v8 = *a2;
  if ( (_DWORD)v8 )
  {
    v9 = (unsigned int)(*(_DWORD *)(a1 + 48) - v8);
    if ( a4 >= v9 )
    {
      memmove((char *)a2 + v8 + 32, a3, (unsigned int)v9);
      v5 += v9;
      v4 -= v9;
      (*(void (__fastcall **)(char *, unsigned int *, _QWORD, size_t *))(a1 + 24))(
        (char *)a2 + *(unsigned int *)(a1 + 52),
        a2 + 8,
        *(unsigned int *)(a1 + 48),
        &v12);
      LODWORD(v8) = 0;
    }
  }
  result = *(unsigned int *)(a1 + 48);
  if ( v4 >= result )
  {
    (*(void (__fastcall **)(char *, char *, size_t, size_t *))(a1 + 24))(
      (char *)a2 + *(unsigned int *)(a1 + 52),
      v5,
      v4,
      &v12);
    v11 = v4;
    v4 = v12;
    result = v11 - v12;
    v5 += result;
  }
  if ( v4 )
  {
    result = (size_t)memmove((char *)a2 + (unsigned int)v8 + 32, v5, v4);
    LODWORD(v8) = v4 + v8;
  }
  *a2 = v8;
  return result;
}
