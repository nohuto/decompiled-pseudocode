/*
 * XREFs of KiProcessScbTracingList @ 0x1404540D4
 * Callers:
 *     KiQueueReadyThread @ 0x140295020 (KiQueueReadyThread.c)
 *     KiSwapThread @ 0x1402A6990 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14030AEFC (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14030B428 (KiGroupSchedulingGenerationEnd.c)
 *     KiParkCurrentProcessor @ 0x1403E9898 (KiParkCurrentProcessor.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     EtwTraceScbRankChange @ 0x1404F7594 (EtwTraceScbRankChange.c)
 */

void __fastcall KiProcessScbTracingList(__int64 a1, _QWORD **a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  _QWORD **v7; // rax
  _QWORD *v8; // rcx
  _QWORD **v9; // rdx
  __int64 v10; // [rsp+20h] [rbp-8h]

  v4 = *a2;
  if ( *a2 )
  {
    do
    {
      LOBYTE(a4) = (*(_BYTE *)(v4 - 40) & 2) != 0;
      EtwTraceScbRankChange(
        (char *)v4 - *(unsigned int *)(a1 + 216) - 432,
        *(unsigned int *)(a1 + 36),
        *((unsigned int *)v4 - 77),
        a4,
        v10);
      v4 = (_QWORD *)*v4;
    }
    while ( v4 );
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    {
      do
      {
        LODWORD(v4) = (_DWORD)v4 + 1;
        if ( ((unsigned int)v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait((unsigned int)v4);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a1 + 48) );
    }
    v7 = (_QWORD **)*a2;
    if ( *a2 )
    {
      v8 = *v7;
      while ( 1 )
      {
        *v7 = 0LL;
        *((_WORD *)v7 - 160) &= ~0x100u;
        v9 = (_QWORD **)v8;
        *a2 = v8;
        if ( !v8 )
          break;
        v8 = (_QWORD *)*v8;
        v7 = v9;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  }
}
