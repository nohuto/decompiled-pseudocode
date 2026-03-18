/*
 * XREFs of MiDeleteNonPagedPoolTail @ 0x1402FB5D0
 * Callers:
 *     MiClearNonPagedPtes @ 0x1402FAC80 (MiClearNonPagedPtes.c)
 * Callees:
 *     MiDecreaseUsedPtesInPfn @ 0x1402274AC (MiDecreaseUsedPtesInPfn.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReduceShareCount @ 0x140340D70 (MiReduceShareCount.c)
 */

__int64 __fastcall MiDeleteNonPagedPoolTail(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  ULONG_PTR v5; // rbx
  unsigned int v6; // esi

  v3 = *(_QWORD *)(a1 + 184);
  if ( *(_QWORD *)v3 )
  {
    MiFlushTbList(*(_QWORD *)v3, a2, a3);
    MiReleaseProcessorFlushList();
    *(_QWORD *)v3 = 0LL;
  }
  if ( *(_DWORD *)(v3 + 64) )
  {
    v4 = 0xFFFFFFFFFFLL;
    v5 = 48 * ((**(_QWORD **)(v3 + 72) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v4) )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v5 + 24) < 0 );
    }
    MiReduceShareCount(v5, *(unsigned int *)(v3 + 64));
    MiDecreaseUsedPtesInPfn(v5, *(unsigned int *)(v3 + 64));
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_DWORD *)(v3 + 64) = 0;
  }
  return 0LL;
}
