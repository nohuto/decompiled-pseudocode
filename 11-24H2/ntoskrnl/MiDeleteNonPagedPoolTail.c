/*
 * XREFs of MiDeleteNonPagedPoolTail @ 0x14020EFE0
 * Callers:
 *     MiClearNonPagedPtes @ 0x14020E660 (MiClearNonPagedPtes.c)
 * Callees:
 *     MiReduceShareCount @ 0x140206F10 (MiReduceShareCount.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiDecreaseUsedPtesInPfn @ 0x14021D39C (MiDecreaseUsedPtesInPfn.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiDeleteNonPagedPoolTail(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned int v7; // esi

  v4 = *(_QWORD *)(a1 + 184);
  if ( *(_QWORD *)v4 )
  {
    MiFlushTbList(*(_QWORD *)v4);
    MiReleaseProcessorFlushList();
    *(_QWORD *)v4 = 0LL;
  }
  if ( *(_DWORD *)(v4 + 64) )
  {
    v5 = 0xFFFFFFFFFFLL;
    v6 = 48 * ((**(_QWORD **)(v4 + 72) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v5, a2, a3, a4) )
        {
          HvlNotifyLongSpinWait(v7);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v6 + 24) < 0 );
    }
    MiReduceShareCount(v6, *(unsigned int *)(v4 + 64));
    MiDecreaseUsedPtesInPfn(v6, *(unsigned int *)(v4 + 64));
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_DWORD *)(v4 + 64) = 0;
  }
  return 0LL;
}
