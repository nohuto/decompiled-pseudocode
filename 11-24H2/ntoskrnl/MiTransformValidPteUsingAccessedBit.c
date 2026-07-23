/*
 * XREFs of MiTransformValidPteUsingAccessedBit @ 0x14038D6C8
 * Callers:
 *     MiTransformValidPteInPlace @ 0x14038D668 (MiTransformValidPteInPlace.c)
 *     MiTradeBootImagePage @ 0x140C5DD20 (MiTradeBootImagePage.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiFlushValidPteFromTb @ 0x14038D900 (MiFlushValidPteFromTb.c)
 */

__int64 __fastcall MiTransformValidPteUsingAccessedBit(
        volatile signed __int64 *BugCheckParameter2,
        unsigned __int64 a2,
        ULONG_PTR a3,
        unsigned int a4,
        unsigned int a5)
{
  int v5; // r12d
  signed __int64 v9; // rdi
  int v10; // r13d
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  bool v13; // zf
  signed __int64 v14; // rax
  signed __int64 v15; // rax

  v5 = MiFlags;
  if ( (MiFlags & 0x2000000) != 0 )
    _mm_lfence();
  v9 = *BugCheckParameter2;
  v10 = 0;
LABEL_4:
  if ( v9 == a3 )
    return 1LL;
  v11 = v5 & 0xC000000;
  if ( v11 <= 0x4000000 )
  {
    if ( (v5 & 0xC000000) == 0 )
      return 0LL;
    goto LABEL_28;
  }
  do
  {
    do
    {
      if ( (v9 & 0x20) == 0 )
      {
LABEL_13:
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        if ( (MiFlags & 0x1000000000LL) != 0
          && (a3 & 1) != 0
          && (a3 & 0x20) == 0
          && (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
        {
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, a3, 128LL);
        }
        v15 = _InterlockedCompareExchange64(BugCheckParameter2, a3, v9);
        v13 = v9 == v15;
        v9 = v15;
        if ( v13 )
          return 1LL;
        goto LABEL_4;
      }
      if ( ++v10 == 16 )
        return 0LL;
      v12 = v9 & 0xFFFFFFFFFFFFFFDFuLL;
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      if ( (MiFlags & 0x1000000000LL) != 0
        && (v9 & 1) == 1
        && (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
      {
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, v9 & 0xFFFFFFFFFFFFFFDFuLL, 128LL);
      }
      v14 = _InterlockedCompareExchange64(BugCheckParameter2, v12, v9);
      v13 = v9 == v14;
      v9 = v14;
      if ( v13 )
      {
        MiFlushValidPteFromTb(a2, v14, a4, a5);
        v9 = v12;
        goto LABEL_13;
      }
    }
    while ( v11 != 0x4000000 );
LABEL_28:
    ;
  }
  while ( a2 < 0xFFFFF6FB40000000uLL || a2 > 0xFFFFF6FB7FFFFFFFuLL || (v9 & 0x80u) != 0LL );
  return 0LL;
}
