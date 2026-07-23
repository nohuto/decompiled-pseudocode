/*
 * XREFs of MiRevertPfnActivePageTable @ 0x140392B5C
 * Callers:
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiRemoveActivePageTableLinks @ 0x1403929A8 (MiRemoveActivePageTableLinks.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiRevertPfnActivePageTable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v6; // rdi
  __int64 DemandZeroPte; // rbp
  unsigned int v8; // esi
  __int64 result; // rax

  v4 = *(unsigned int *)(a1 + 36);
  if ( (*(_DWORD *)(a1 + 36) & 0x4000000) != 0 )
    v6 = HIDWORD(*(_QWORD *)a1);
  else
    v6 = *(_QWORD *)(a1 + 16) >> 16;
  LODWORD(v4) = v4 & 0xFBFFFFFF;
  *(_DWORD *)(a1 + 36) = v4;
  DemandZeroPte = MiMakeDemandZeroPte(4LL, v4, a3, a4);
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
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
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  *(_QWORD *)(a1 + 16) = ((unsigned __int64)(unsigned int)v6 << 16) ^ (DemandZeroPte ^ ((unsigned __int64)(unsigned int)v6 << 16)) & 0xFFFFFFFFFC00FFFFuLL;
  *(_QWORD *)a1 &= 0xFC7FFFFFFFFFFFFFuLL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
