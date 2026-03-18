/*
 * XREFs of MiDeleteNonPagedPoolTail @ 0x140235020
 * Callers:
 *     MiClearNonPagedPtes @ 0x1402346CC (MiClearNonPagedPtes.c)
 * Callees:
 *     MiReduceShareCount @ 0x14023EDC0 (MiReduceShareCount.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDecreaseUsedPtesInPfn @ 0x14039EEFC (MiDecreaseUsedPtesInPfn.c)
 */

__int64 __fastcall MiDeleteNonPagedPoolTail(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  ULONG_PTR v4; // rbx
  unsigned int v5; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8

  v2 = *(_QWORD *)(a1 + 184);
  if ( *(_QWORD *)v2 )
  {
    MiFlushTbList(*(_QWORD *)v2, a2);
    MiReleaseProcessorFlushList(v8, v7, v9);
    *(_QWORD *)v2 = 0LL;
  }
  if ( *(_DWORD *)(v2 + 64) )
  {
    v3 = 0xFFFFFFFFFFLL;
    v4 = 48 * ((**(_QWORD **)(v2 + 72) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v5 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v3) )
        {
          HvlNotifyLongSpinWait(v5);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v4 + 24) < 0 );
    }
    MiReduceShareCount(v4, *(unsigned int *)(v2 + 64));
    MiDecreaseUsedPtesInPfn(v4, *(unsigned int *)(v2 + 64));
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_DWORD *)(v2 + 64) = 0;
  }
  return 0LL;
}
