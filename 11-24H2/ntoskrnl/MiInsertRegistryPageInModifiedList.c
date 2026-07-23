/*
 * XREFs of MiInsertRegistryPageInModifiedList @ 0x140C675CC
 * Callers:
 *     MiPageBootRegistry @ 0x14066A6F8 (MiPageBootRegistry.c)
 * Callees:
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiInsertRegistryPageInModifiedList(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // r8
  __int64 v10; // r9

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
            HvlNotifyLongSpinWait(v8);
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
      MiDecrementShareCountEx(v7, 0LL, v9, v10);
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v7 += 48LL;
      --a2;
    }
    while ( a2 );
  }
  return result;
}
