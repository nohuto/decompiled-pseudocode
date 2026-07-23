/*
 * XREFs of MiValidateAndLockAweMapCountPage @ 0x1404AE114
 * Callers:
 *     MiDecrementAweMapCount @ 0x140682AFC (MiDecrementAweMapCount.c)
 *     MiIncrementAweMapCount @ 0x140683750 (MiIncrementAweMapCount.c)
 * Callees:
 *     MiIsPageInHugePfn @ 0x14038ED20 (MiIsPageInHugePfn.c)
 *     MiLockHugePfnInternal @ 0x1403EFAE4 (MiLockHugePfnInternal.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiValidateAndLockAweMapCountPage(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 *v5; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  const signed __int64 *v14; // r14
  __int64 v15; // r9
  unsigned int v16; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v17; // [rsp+68h] [rbp+20h] BYREF

  *(_QWORD *)a4 = 0LL;
  v5 = 0LL;
  if ( a3 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = a2 / v7;
    v5 = (unsigned __int64 *)(a1 + 24);
    v9 = a2 / v7;
    if ( ((v7 - 1) & a2) != 0 || v8 >= *v5 || !_bittest64(*(const signed __int64 **)(a1 + 32), v8) )
      return 0LL;
  }
  else
  {
    v9 = 0xFFFFFFFFLL;
  }
  if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
  {
    v12 = 0LL;
    v13 = qword_140E30100 + 8 * ((a2 >> 18) & 0x3FFFFF);
    v11 = 48 * a2;
  }
  else
  {
    v11 = 48 * a2;
    v12 = 48 * a2 - 0x220000000000LL;
    v13 = 0LL;
  }
  if ( a3 )
  {
    v14 = (const signed __int64 *)v5[1];
    if ( a2 <= qword_140E2DD20 && ((*(_QWORD *)(v11 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      if ( !v12 )
        return 0LL;
      v16 = 0;
      *(_QWORD *)a4 = v12;
      *(_DWORD *)(a4 + 8) = 1;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v16);
        while ( *(__int64 *)(v12 + 24) < 0 );
      }
    }
    else
    {
      if ( !(unsigned int)MiIsPageInHugePfn(a2) || !v13 )
        return 0LL;
      *(_DWORD *)(v15 + 8) = 0;
      *(_QWORD *)v15 = v13;
      MiLockHugePfnInternal(v13);
    }
    if ( !_bittest64(v14, v9) )
    {
      if ( v12 )
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      else
        _InterlockedAnd(
          (volatile signed __int32 *)(qword_140E30108 + 4 * ((((v13 - qword_140E30100) >> 3) & 0x3FFFFFuLL) >> 5)),
          ~(1 << (((v13 - qword_140E30100) >> 3) & 0x1F)));
      return 0LL;
    }
  }
  else if ( v12 )
  {
    v17 = 0;
    *(_QWORD *)a4 = v12;
    *(_DWORD *)(a4 + 8) = 1;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v17);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
  }
  else
  {
    *(_DWORD *)(a4 + 8) = 0;
    *(_QWORD *)a4 = v13;
    MiLockHugePfnInternal(v13);
  }
  return 1LL;
}
