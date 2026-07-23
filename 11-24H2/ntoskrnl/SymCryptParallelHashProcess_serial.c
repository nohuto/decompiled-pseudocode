/*
 * XREFs of SymCryptParallelHashProcess_serial @ 0x14051DAA8
 * Callers:
 *     SymCryptParallelSha256Process @ 0x14051AB58 (SymCryptParallelSha256Process.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B504 (SymCryptWipe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SymCryptParallelHashProcess_serial(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int64 a7)
{
  __int64 v7; // rbp
  unsigned int v9; // ebx
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  _QWORD *i; // rdi
  unsigned __int64 v15; // rdx

  v7 = *a1;
  v9 = 0;
  v12 = 56 * a3 + *((unsigned int *)a1 + 2);
  if ( a7 >= v12 )
  {
    if ( v12 <= 0x40 )
    {
      if ( (v12 & 1) != 0 )
        *(_BYTE *)(--v12 + a6) = 0;
      if ( (v12 & 2) != 0 )
      {
        v12 -= 2LL;
        *(_WORD *)(v12 + a6) = 0;
      }
      if ( (v12 & 4) != 0 )
      {
        v12 -= 4LL;
        *(_DWORD *)(v12 + a6) = 0;
      }
      if ( (v12 & 8) != 0 )
      {
        v12 -= 8LL;
        *(_QWORD *)(v12 + a6) = 0LL;
      }
      if ( (v12 & 0x10) != 0 )
      {
        v12 -= 16LL;
        *(_QWORD *)(v12 + a6) = 0LL;
        *(_QWORD *)(v12 + a6 + 8) = 0LL;
      }
      if ( (v12 & 0x20) != 0 )
      {
        v12 -= 32LL;
        *(_QWORD *)(v12 + a6) = 0LL;
        *(_QWORD *)(v12 + a6 + 8) = 0LL;
        *(_QWORD *)(v12 + a6 + 16) = 0LL;
        *(_QWORD *)(v12 + a6 + 24) = 0LL;
      }
      if ( (v12 & 0x40) != 0 )
      {
        *(_QWORD *)(v12 + a6 - 64) = 0LL;
        *(_QWORD *)(v12 + a6 - 56) = 0LL;
        *(_QWORD *)(v12 + a6 - 48) = 0LL;
        *(_QWORD *)(v12 + a6 - 40) = 0LL;
        *(_QWORD *)(v12 + a6 - 32) = 0LL;
        *(_QWORD *)(v12 + a6 - 24) = 0LL;
        *(_QWORD *)(v12 + a6 - 16) = 0LL;
        *(_QWORD *)(v12 + a6 - 8) = 0LL;
      }
    }
    else
    {
      SymCryptWipe(a6, v12);
    }
    v13 = 0LL;
    if ( a5 )
    {
      for ( i = (_QWORD *)(a4 + 24); ; i += 5 )
      {
        v15 = *(i - 3);
        if ( v15 >= a3 || *((_DWORD *)i - 4) != 1 && (*((_DWORD *)i - 4) != 2 || *i != *(_DWORD *)(v7 + 44)) )
          break;
        guard_dispatch_icall_no_overrides(a2 + v15 * *(unsigned int *)(v7 + 40), *(i - 1));
        if ( ++v13 >= a5 )
          return v9;
      }
      return 32782;
    }
  }
  else
  {
    return 32781;
  }
  return v9;
}
