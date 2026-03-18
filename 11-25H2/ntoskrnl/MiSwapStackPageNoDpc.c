/*
 * XREFs of MiSwapStackPageNoDpc @ 0x1403DBFD8
 * Callers:
 *     MiSwapStackPage @ 0x1403DBBA8 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x140480160 (MiJumpStackTarget.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MiSetPfnIdentity @ 0x1402293B0 (MiSetPfnIdentity.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiClearPfnReuseFields @ 0x1402C4CC0 (MiClearPfnReuseFields.c)
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     MiCopyPfnEntryEx @ 0x1402C7CF0 (MiCopyPfnEntryEx.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 */

__int64 __fastcall MiSwapStackPageNoDpc(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // r14
  signed __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  int v7; // edi
  __int64 result; // rax
  int v9; // [rsp+50h] [rbp+8h]
  int v10; // [rsp+50h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v5 = *(_QWORD *)v2;
  v6 = *(_QWORD *)v2 & 0xFFFFFFFFFFFFFFDFuLL;
  if ( (MiFlags & 0x2000000) != 0 )
    _mm_lfence();
  if ( _bittest64(&MiFlags, 0x24u) && (*(_BYTE *)v2 & 1) == 1 && v2 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit(v2, *(_QWORD *)v2 & 0xFFFFFFFFFFFFFFDFuLL, 128);
  if ( v5 == _InterlockedCompareExchange64((volatile signed __int64 *)v2, v6, v5) )
  {
    MiFlushSingleTbEntry((__int64)(v2 << 25) >> 16, 2, 2);
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
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
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
    MiCopyPfnEntryEx(a2, a1);
    MiCopyPage(
      0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4),
      0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4),
      68);
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    if ( v6 == _InterlockedCompareExchange64(
                 (volatile signed __int64 *)v2,
                 (0xAAAAAAAAAAAAB000uLL * ((a2 + 0x220000000000LL) >> 4)) ^ (v6 ^ (0xAAAAAAAAAAAAB000uLL
                                                                                 * ((a2 + 0x220000000000LL) >> 4))) & 0xFFF0000000000FFFuLL | 0x20,
                 v6) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v9 = *(_DWORD *)(a1 + 32);
      BYTE2(v9) = BYTE2(v9) & 0xF8 | 5;
      *(_DWORD *)(a1 + 32) = v9;
      MiSetPfnIdentity(a1, 0);
      MiClearPfnReuseFields(a1);
      result = 1LL;
      *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
      return result;
    }
    v10 = *(_DWORD *)(a2 + 32);
    BYTE2(v10) = BYTE2(v10) & 0xF8 | 5;
    *(_DWORD *)(a2 + 32) = v10;
    MiSetOriginalPtePfnFromFreeList((__int64 *)(a2 + 16));
    MiSetPfnIdentity(a2, 0);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 0LL;
}
