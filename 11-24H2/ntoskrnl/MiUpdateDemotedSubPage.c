/*
 * XREFs of MiUpdateDemotedSubPage @ 0x1402EF390
 * Callers:
 *     MiInsertDemotedPages @ 0x1402EF010 (MiInsertDemotedPages.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140684C24 (MiDemoteValidLargePageOneLevel.c)
 *     MiDemotePfnListChain @ 0x14069341C (MiDemotePfnListChain.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAnyPagesRemovalPending @ 0x14046B54C (MiAnyPagesRemovalPending.c)
 */

__int64 __fastcall MiUpdateDemotedSubPage(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  unsigned int v8; // r15d

  v3 = 0;
  if ( a3 == 3 )
  {
    if ( (*(_QWORD *)(a2 + 40) & 0x20000000000LL) != 0 )
      *(_QWORD *)(a2 + 40) &= ~0x20000000000uLL;
    *(_QWORD *)(a2 + 40) &= ~0x10000000000uLL;
  }
  *(_DWORD *)(a2 + 36) = ((unsigned __int8)~(_BYTE)a3 << 27) ^ (*(_DWORD *)(a2 + 36) ^ ((unsigned __int8)~(_BYTE)a3 << 27)) & 0xE7FFFFFF;
  if ( a3 != 3 )
  {
    if ( a2 != a1 )
    {
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
    }
    if ( (*(_QWORD *)(a1 + 40) & 0x20000000000LL) != 0 )
    {
      if ( !(unsigned int)MiAnyPagesRemovalPending(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4), a3) )
      {
        if ( a2 == a1 )
        {
          *(_QWORD *)(a2 + 40) &= ~0x20000000000uLL;
          return v3;
        }
LABEL_12:
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return v3;
      }
      v3 = 1;
      *(_QWORD *)(a2 + 40) |= 0x20000000000uLL;
    }
    if ( a2 == a1 )
      return v3;
    goto LABEL_12;
  }
  return v3;
}
