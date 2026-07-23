/*
 * XREFs of MiCrcStillIntact @ 0x140345608
 * Callers:
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiClearPteAccessed @ 0x140304BA0 (MiClearPteAccessed.c)
 *     MiCombineCandidate @ 0x140344930 (MiCombineCandidate.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiVadSupportsCombine @ 0x140344CB0 (MiVadSupportsCombine.c)
 *     MiMakeCombineCandidateClean @ 0x140346988 (MiMakeCombineCandidateClean.c)
 *     MiVmAccessLoggingEnabled @ 0x140346A3C (MiVmAccessLoggingEnabled.c)
 */

__int64 __fastcall MiCrcStillIntact(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v5; // r12
  int v6; // r13d
  ULONG_PTR v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned int v10; // ebp
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r10d
  __int64 v16; // rax
  int v18; // eax
  unsigned __int64 v19; // [rsp+70h] [rbp+8h]
  __int64 v20; // [rsp+80h] [rbp+18h]

  v5 = *(_QWORD **)a1;
  v6 = *(_DWORD *)(a1 + 140);
  v20 = *(_QWORD *)(a1 + 112);
  v19 = *(_QWORD *)(a3 + 16);
  v7 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = *(_QWORD *)v7;
  if ( (*(_QWORD *)v7 & 1) != 0 )
  {
    v9 = 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
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
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    if ( (unsigned int)MiCombineCandidate(v5, v6, (_QWORD *)(48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL)) )
    {
      v11 = *(_BYTE *)(v9 + 34) & 7;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v11 == 6
        && v7 == (*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL)
        && *(__int64 *)(v9 + 40) >= 0
        && (*(_QWORD *)(v9 + 40) & 0x10000000000LL) == 0
        && (*(_DWORD *)(v9 + 32) & 0x8000000) == 0
        && (*(_QWORD *)(v9 + 40) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL
        && (MiGetWsleContents(0x3FFFFFFFFELL, (__int64)(v7 << 25) >> 16) & 0xF) != 8
        && (unsigned __int16)*(_DWORD *)(v9 + 32) == 1 )
      {
        v16 = 0LL;
        if ( v15 != 1 || (v16 = MiVadSupportsCombine(v12, v19, v13, v14)) != 0 )
        {
          if ( a4 == 2 )
          {
            if ( (v8 & 0x42) != 0 )
            {
              MiMakeCombineCandidateClean(v7, v16);
              return 1LL;
            }
          }
          else
          {
            if ( a4 != 3 )
              return 1LL;
            v18 = MiVmAccessLoggingEnabled(v20);
            if ( (unsigned int)MiClearPteAccessed(
                                 v20,
                                 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL,
                                 v7,
                                 0LL,
                                 (unsigned int)(v18 != 0) + 4) )
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
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return 0LL;
}
