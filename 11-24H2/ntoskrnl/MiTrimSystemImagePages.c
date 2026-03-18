/*
 * XREFs of MiTrimSystemImagePages @ 0x1404A7A78
 * Callers:
 *     MiSetPagingOfDriver @ 0x14049CBA8 (MiSetPagingOfDriver.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiMakePrototypePteDirect @ 0x1402331F0 (MiMakePrototypePteDirect.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeTransitionPte @ 0x1402E67B0 (MiMakeTransitionPte.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 */

__int64 __fastcall MiTrimSystemImagePages(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r15
  __int64 *i; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 PrototypePteDirect; // r8
  unsigned __int64 v9; // rdi
  unsigned int v10; // ebp
  __int64 ContainingPageTable; // rbx
  unsigned int v13; // ebx
  int v14; // [rsp+60h] [rbp+18h]

  v2 = 0LL;
  for ( i = a1; (unsigned __int64)i <= a2; ++i )
  {
    v5 = *i;
    if ( (*i & 0x401) == 0x400 )
    {
      v6 = (v5 >> 12) & 0xFFFFFFFFFFLL;
      v7 = 48 * v6 - 0x220000000000LL;
      if ( *(__int64 *)(v7 + 40) < 0 )
      {
        PrototypePteDirect = MiMakePrototypePteDirect(*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL);
        if ( (*(_QWORD *)(v7 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v7 + 8) > 0 )
          PrototypePteDirect |= 0x800uLL;
      }
      else
      {
        PrototypePteDirect = MiMakeTransitionPte(v6, (*(_DWORD *)(v7 + 16) >> 5) & 0x1F);
      }
      v9 = 0LL;
      *i = PrototypePteDirect;
      v10 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v10 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v10);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      *(_BYTE *)(v7 + 35) &= ~8u;
      if ( (v5 & 0x42) != 0 )
        v9 = MiCaptureDirtyBitToPfn(v7);
      if ( *(__int64 *)(v7 + 40) < 0 )
        ContainingPageTable = MiGetContainingPageTable((unsigned __int64)i);
      else
        ContainingPageTable = -1LL;
      v14 = *(_DWORD *)(v7 + 32);
      HIBYTE(v14) = HIBYTE(v14) & 0xF8 | 2;
      *(_DWORD *)(v7 + 32) = v14;
      MiDecrementShareCountEx(v7, 0LL);
      if ( ContainingPageTable != -1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v7 = 48 * ContainingPageTable - 0x220000000000LL;
        v13 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v13 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v13);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v7 + 24) < 0 );
        }
        MiDecrementShareCountEx(v7, 0LL);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v9 )
        MiReleasePageFileInfo((__int64)&MiSystemPartition, v9, 1LL);
      ++v2;
    }
  }
  return v2;
}
