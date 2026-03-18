/*
 * XREFs of MiRevertPfnActivePageTable @ 0x1403858EC
 * Callers:
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiRemoveActivePageTableLinks @ 0x14038573C (MiRemoveActivePageTableLinks.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiRevertPfnActivePageTable(__int64 a1)
{
  __int64 v2; // rdi
  __int64 DemandZeroPte; // rbp
  int v4; // esi
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 36) & 0x4000000) != 0 )
    v2 = HIDWORD(*(_QWORD *)a1);
  else
    v2 = *(_QWORD *)(a1 + 16) >> 16;
  *(_DWORD *)(a1 + 36) &= ~0x4000000u;
  DemandZeroPte = MiMakeDemandZeroPte(4);
  v4 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) == 0
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
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  *(_QWORD *)(a1 + 16) = ((unsigned __int64)(unsigned int)v2 << 16) ^ (DemandZeroPte ^ ((unsigned __int64)(unsigned int)v2 << 16)) & 0xFFFFFFFFFC00FFFFuLL;
  *(_QWORD *)a1 &= 0xFC7FFFFFFFFFFFFFuLL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
