/*
 * XREFs of MiPurgeSlabEntry @ 0x14047DBD4
 * Callers:
 *     MiPurgeSlabEntries @ 0x14047D9E8 (MiPurgeSlabEntries.c)
 *     MiEstablishDefragSlabEntries @ 0x14068894C (MiEstablishDefragSlabEntries.c)
 * Callees:
 *     MiDiscardTransitionPteEx @ 0x1402188CC (MiDiscardTransitionPteEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiIsFreeSlabPage @ 0x1404F8AD4 (MiIsFreeSlabPage.c)
 */

__int64 __fastcall MiPurgeSlabEntry(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rbx
  _QWORD *v10; // r15
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  result = 6 * a1;
  v6 = a3;
  v7 = a1;
  v8 = 48 * a1 - 0x220000000000LL;
  if ( a3 )
  {
    v9 = v8 + 24;
    v10 = (_QWORD *)(48 * a1 - 0x21FFFFFFFFD8LL);
    if ( a1 <= a2 )
    {
      while ( 1 )
      {
        v11 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0x3FuLL) )
        {
          do
          {
            if ( (++v11 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v11);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)v9 < 0 );
        }
        if ( v7 > qword_140E2DD20 || ((*v10 >> 54) & 1) == 0 || (unsigned int)MiGetPfnSlabType(v8) == 9 )
          goto LABEL_15;
        if ( (*(_BYTE *)(v9 + 10) & 7) != 2
          || (unsigned __int16)*(_DWORD *)(v9 + 8)
          || (a4 & 2) == 0 && (*(_DWORD *)(v9 + 8) & 0x8000000) == 0 )
        {
          break;
        }
        MiUnlinkPageFromListEx(v8, 0);
        MiDiscardTransitionPteEx(v8);
        --v6;
LABEL_16:
        result = 0x7FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)v9, 0x7FFFFFFFFFFFFFFFuLL);
        v8 += 48LL;
        v9 += 48LL;
        ++v7;
        v10 += 6;
        if ( !v6 )
          return result;
      }
      if ( (a4 & 1) != 0 || (unsigned int)MiIsFreeSlabPage(v8, v12, v13, v14) )
        goto LABEL_16;
LABEL_15:
      v6 = 0LL;
      goto LABEL_16;
    }
  }
  return result;
}
