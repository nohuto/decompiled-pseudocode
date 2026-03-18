/*
 * XREFs of KiRemovePrcbWaitEntry @ 0x140285980
 * Callers:
 *     AlpcpQueueIoCompletionPort @ 0x140280A30 (AlpcpQueueIoCompletionPort.c)
 *     KeInsertQueueEx @ 0x140281900 (KeInsertQueueEx.c)
 *     AlpcpQueueIoCompletion @ 0x140281CC0 (AlpcpQueueIoCompletion.c)
 *     IoSetIoCompletionEx3 @ 0x140282550 (IoSetIoCompletionEx3.c)
 *     KiWakeOtherQueueWaiters @ 0x140283660 (KiWakeOtherQueueWaiters.c)
 *     IopInsertIrpInCompletionQueue @ 0x140283BF0 (IopInsertIrpInCompletionQueue.c)
 *     AlpcpSignal @ 0x140284330 (AlpcpSignal.c)
 *     IoSetIoCompletionEx2 @ 0x140284DA0 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x140285150 (IoSetIoCompletionEx.c)
 *     KiInsertQueue @ 0x140285500 (KiInsertQueue.c)
 *     KiTimerWaitTest @ 0x1402EEDC0 (KiTimerWaitTest.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     KeReleaseMutantEx @ 0x1402F09B0 (KeReleaseMutantEx.c)
 *     KiSignalThreadForApc @ 0x1402F1D40 (KiSignalThreadForApc.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
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
