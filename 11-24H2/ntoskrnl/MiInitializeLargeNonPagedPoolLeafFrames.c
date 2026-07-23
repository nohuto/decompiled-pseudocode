/*
 * XREFs of MiInitializeLargeNonPagedPoolLeafFrames @ 0x1404A7C00
 * Callers:
 *     MiLinkPoolCommitChain @ 0x1402077F0 (MiLinkPoolCommitChain.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 */

__int64 __fastcall MiInitializeLargeNonPagedPoolLeafFrames(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h]

  v3 = 48 * a2 - 0x220000000000LL;
  v4 = (*(_QWORD *)((((((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v5);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v3 + 24) < 0 );
  }
  *(_QWORD *)(v3 + 8) = a1;
  v7 = *(_DWORD *)(v3 + 32);
  BYTE2(v7) = BYTE2(v7) & 0xF8 | 6;
  *(_DWORD *)(v3 + 32) = v7;
  *(_QWORD *)v3 = 0LL;
  MiSetPfnContainingFrame(v3, v4);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
