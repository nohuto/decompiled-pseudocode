/*
 * XREFs of MiTrimSystemImagePages @ 0x1404A24CC
 * Callers:
 *     MiSetPagingOfDriver @ 0x140497850 (MiSetPagingOfDriver.c)
 * Callees:
 *     MiMakePrototypePteDirect @ 0x140203600 (MiMakePrototypePteDirect.c)
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeTransitionPte @ 0x140347DF0 (MiMakeTransitionPte.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 */

__int64 __fastcall MiTrimSystemImagePages(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r15
  __int64 *i; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 PrototypePteDirect; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rdi
  unsigned int v11; // ebp
  __int64 ContainingPageTable; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v16; // ebx
  int v17; // [rsp+60h] [rbp+18h]

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
      v10 = 0LL;
      *i = PrototypePteDirect;
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
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
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      *(_BYTE *)(v7 + 35) &= ~8u;
      if ( (v5 & 0x42) != 0 )
        v10 = MiCaptureDirtyBitToPfn(v7);
      if ( *(__int64 *)(v7 + 40) < 0 )
        ContainingPageTable = MiGetContainingPageTable((unsigned __int64)i);
      else
        ContainingPageTable = -1LL;
      v17 = *(_DWORD *)(v7 + 32);
      HIBYTE(v17) = HIBYTE(v17) & 0xF8 | 2;
      *(_DWORD *)(v7 + 32) = v17;
      MiDecrementShareCountEx(v7, 0LL, PrototypePteDirect, v9);
      if ( ContainingPageTable != -1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v7 = 48 * ContainingPageTable - 0x220000000000LL;
        v16 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v16 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v16);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v7 + 24) < 0 );
        }
        MiDecrementShareCountEx(v7, 0LL, v13, v14);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v10 )
        MiReleasePageFileInfo((__int64)&MiSystemPartition, v10, 1LL, v14);
      ++v2;
    }
  }
  return v2;
}
