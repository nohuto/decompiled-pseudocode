/*
 * XREFs of MiInitializeMdlLeafPfns @ 0x140393570
 * Callers:
 *     MiInitializeLargeMdlLeafPfns @ 0x1404A6B00 (MiInitializeLargeMdlLeafPfns.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInitializeMdlSinglePage @ 0x140393930 (MiInitializeMdlSinglePage.c)
 */

__int64 __fastcall MiInitializeMdlLeafPfns(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // r14
  volatile signed __int32 *v11; // rdi
  unsigned int v12; // ebp

  result = a2;
  if ( (((a5 & 0x3001000) != 0) & _bittest(&a5, 0x1Fu)) == 0 )
    result = 1LL;
  v9 = a1 + 48 * a2;
  if ( v9 != a1 )
  {
    v10 = 48 * result;
    v11 = (volatile signed __int32 *)(v9 + 24);
    do
    {
      v9 -= v10;
      v11 = (volatile signed __int32 *)((char *)v11 - v10);
      v12 = 0;
      while ( _interlockedbittestandset64(v11, 0x3FuLL) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v12);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)v11 < 0 );
      }
      MiInitializeMdlSinglePage(a1, v9, a3, a4, a5);
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)v11, 0x7FFFFFFFFFFFFFFFuLL);
    }
    while ( v9 != a1 );
  }
  return result;
}
