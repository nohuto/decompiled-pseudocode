/*
 * XREFs of SymCryptHashAppendInternal @ 0x140528DEC
 * Callers:
 *     SymCryptSha1Append @ 0x140524860 (SymCryptSha1Append.c)
 *     SymCryptMd5Append @ 0x140525B80 (SymCryptMd5Append.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

unsigned __int64 __fastcall SymCryptHashAppendInternal(__int64 a1, unsigned int *a2, char *a3, size_t a4)
{
  size_t v4; // rbx
  char *v5; // r14
  __int64 v8; // rsi
  size_t v9; // r15
  unsigned __int64 result; // rax

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
      guard_dispatch_icall_no_overrides((char *)a2 + *(unsigned int *)(a1 + 52), a2 + 8);
      LODWORD(v8) = 0;
    }
  }
  result = *(unsigned int *)(a1 + 48);
  if ( v4 >= result )
  {
    guard_dispatch_icall_no_overrides((char *)a2 + *(unsigned int *)(a1 + 52), v5);
    result = v4;
    v4 = 0LL;
    v5 += result;
  }
  if ( v4 )
  {
    result = (unsigned __int64)memmove((char *)a2 + (unsigned int)v8 + 32, v5, v4);
    LODWORD(v8) = v4 + v8;
  }
  *a2 = v8;
  return result;
}
