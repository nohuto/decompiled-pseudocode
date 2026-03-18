/*
 * XREFs of MiInsertRegistryPageInModifiedList @ 0x140C5413C
 * Callers:
 *     MiPageBootRegistry @ 0x14065D9FC (MiPageBootRegistry.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 */

__int64 __fastcall MiInsertRegistryPageInModifiedList(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdi
  int v8; // esi

  result = MiMakeDemandZeroPte(4);
  v5 = result;
  if ( v6 )
  {
    v7 = 48 * v4 - 0x220000000000LL;
    do
    {
      v8 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v8 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait();
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      *(_QWORD *)v7 |= 1uLL;
      *(_QWORD *)(v7 + 16) = v5;
      MiSetPfnModified(v7, 1);
      MiDecrementShareCountEx(v7, 0LL);
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v7 += 48LL;
      --a2;
    }
    while ( a2 );
  }
  return result;
}
