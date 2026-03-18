/*
 * XREFs of KiRemovePrcbWaitEntry @ 0x14031CEA0
 * Callers:
 *     KiSignalThreadForApc @ 0x140296870 (KiSignalThreadForApc.c)
 *     IopCompleteIrpInFileObjectList @ 0x14031B490 (IopCompleteIrpInFileObjectList.c)
 *     AlpcpSignal @ 0x14031BB60 (AlpcpSignal.c)
 *     IoSetIoCompletionEx @ 0x14031C620 (IoSetIoCompletionEx.c)
 *     KiInsertQueue @ 0x14031CA10 (KiInsertQueue.c)
 *     KiTimerWaitTest @ 0x140335E10 (KiTimerWaitTest.c)
 *     KeInsertQueueApc @ 0x140337240 (KeInsertQueueApc.c)
 *     KeReleaseMutantEx @ 0x1403379F0 (KeReleaseMutantEx.c)
 *     KiAlertSingleThreadByThreadId @ 0x140337FDC (KiAlertSingleThreadByThreadId.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403BCF10 (AlpcpQueueIoCompletionPort.c)
 *     KeInsertQueueEx @ 0x1403BD5D0 (KeInsertQueueEx.c)
 *     AlpcpQueueIoCompletion @ 0x1403BD9A0 (AlpcpQueueIoCompletion.c)
 *     IoSetIoCompletionEx3 @ 0x1403BDE10 (IoSetIoCompletionEx3.c)
 *     KiWakeOtherQueueWaiters @ 0x1403BE270 (KiWakeOtherQueueWaiters.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

void __fastcall KiRemovePrcbWaitEntry(_QWORD *a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  __int64 v4; // rdx
  _QWORD *v5; // rcx

  v1 = a1[89];
  if ( v1 )
  {
    v3 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 33744), 0LL) )
    {
      do
      {
        if ( (++v3 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v3);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v1 + 33744) );
    }
    if ( a1[89] )
    {
      v4 = a1[27];
      if ( *(_QWORD **)(v4 + 8) != a1 + 27 || (v5 = (_QWORD *)a1[28], (_QWORD *)*v5 != a1 + 27) )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      a1[89] = 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 33744), 0LL);
  }
}
