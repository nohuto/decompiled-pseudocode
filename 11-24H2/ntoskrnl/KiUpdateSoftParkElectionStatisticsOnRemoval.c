/*
 * XREFs of KiUpdateSoftParkElectionStatisticsOnRemoval @ 0x1403CBEA0
 * Callers:
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     KiUpdateSharedReadyQueueStatisticsOnRemoval @ 0x14030D724 (KiUpdateSharedReadyQueueStatisticsOnRemoval.c)
 *     KiUpdateLocalReadyQueueStatisticsOnRemoval @ 0x14030D768 (KiUpdateLocalReadyQueueStatisticsOnRemoval.c)
 *     KiFlushReadyLists @ 0x1403CBD00 (KiFlushReadyLists.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiUpdateSoftParkElectionStatisticsOnRemoval(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  char v4; // r9
  unsigned int v7; // ebp
  __int64 v8; // rcx

  result = *(_QWORD *)(a1 + 776);
  v4 = 0;
  if ( *(_QWORD *)(a2 + 1792) == result )
  {
    if ( !a3 )
    {
      v7 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 768), 0LL) )
      {
        do
        {
          if ( (++v7 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v7);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(a1 + 768) );
      }
      result = *(_QWORD *)(a1 + 776);
      v4 = 1;
      if ( *(_QWORD *)(a2 + 1792) != result )
        goto LABEL_9;
    }
    --*(_DWORD *)(a1 + 784);
    *(_QWORD *)(a1 + 792) -= *(unsigned int *)(a2 + 1788);
    if ( !*(_DWORD *)(a1 + 784) )
      *(_QWORD *)(a1 + 1760) = 0LL;
    v8 = *(unsigned __int8 *)(a2 + 1829) + 8 * (*(unsigned __int8 *)(a2 + 1830) + 2LL * *(unsigned __int8 *)(a2 + 1828));
    result = *(unsigned int *)(a2 + 1788);
    *(_QWORD *)(a1 + 8 * v8 + 864) -= result;
    if ( v4 )
LABEL_9:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 768), 0LL);
  }
  return result;
}
