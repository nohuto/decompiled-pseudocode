/*
 * XREFs of MiCrcStillIntact @ 0x140239824
 * Callers:
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 * Callees:
 *     MiCombineCandidate @ 0x140210C20 (MiCombineCandidate.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MiVadSupportsCombine @ 0x140239CF4 (MiVadSupportsCombine.c)
 *     MiMakeCombineCandidateClean @ 0x140239E58 (MiMakeCombineCandidateClean.c)
 *     MiClearPteAccessed @ 0x1402493D0 (MiClearPteAccessed.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiVmAccessLoggingEnabled @ 0x140386C1C (MiVmAccessLoggingEnabled.c)
 */

__int64 __fastcall MiCrcStillIntact(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v5; // r12
  int v6; // r13d
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // ebp
  char v12; // al
  __int64 v13; // rcx
  int v14; // r10d
  __int64 v15; // rax
  int v17; // eax
  unsigned __int64 v18; // [rsp+70h] [rbp+8h]
  __int64 v19; // [rsp+80h] [rbp+18h]

  v5 = *(_QWORD **)a1;
  v6 = *(_DWORD *)(a1 + 140);
  v19 = *(_QWORD *)(a1 + 112);
  v18 = *(_QWORD *)(a3 + 16);
  v7 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = *(_QWORD *)v7;
  if ( (*(_QWORD *)v7 & 1) != 0 )
  {
    v9 = 0xFFFFFFFFFFLL;
    v10 = 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v11 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v11 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9) )
        {
          HvlNotifyLongSpinWait(v11);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    if ( (unsigned int)MiCombineCandidate(v5, v6, (_QWORD *)(48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL)) )
    {
      v12 = *(_BYTE *)(v10 + 34) & 7;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v12 == 6
        && v7 == (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL)
        && *(__int64 *)(v10 + 40) >= 0
        && (*(_QWORD *)(v10 + 40) & 0x10000000000LL) == 0
        && (*(_DWORD *)(v10 + 32) & 0x8000000) == 0
        && (*(_QWORD *)(v10 + 40) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL
        && (MiGetWsleContents(0x3FFFFFFFFELL, v7 << 25 >> 16) & 0xF) != 8
        && (unsigned __int16)*(_DWORD *)(v10 + 32) == 1 )
      {
        v15 = 0LL;
        if ( v14 != 1 || (v15 = MiVadSupportsCombine(v13, v18)) != 0 )
        {
          if ( a4 == 2 )
          {
            if ( (v8 & 0x42) != 0 )
            {
              MiMakeCombineCandidateClean(v7, v15);
              return 1LL;
            }
          }
          else
          {
            if ( a4 != 3 )
              return 1LL;
            v17 = MiVmAccessLoggingEnabled(v19);
            if ( (unsigned int)MiClearPteAccessed(
                                 v19,
                                 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL,
                                 v7,
                                 0LL,
                                 (unsigned int)(v17 != 0) + 4) )
            {
              *(_DWORD *)(a2 + 20) &= ~2u;
              return 1LL;
            }
          }
        }
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return 0LL;
}
