/*
 * XREFs of KiRemovePrcbWaitEntry @ 0x1402C5A30
 * Callers:
 *     IopCompleteIrpInFileObjectList @ 0x1402C4020 (IopCompleteIrpInFileObjectList.c)
 *     AlpcpSignal @ 0x1402C46F0 (AlpcpSignal.c)
 *     IoSetIoCompletionEx @ 0x1402C51B0 (IoSetIoCompletionEx.c)
 *     KiInsertQueue @ 0x1402C55A0 (KiInsertQueue.c)
 *     KiSignalThreadForApc @ 0x1402DD8B0 (KiSignalThreadForApc.c)
 *     KiAlertSingleThreadByThreadId @ 0x1402DE880 (KiAlertSingleThreadByThreadId.c)
 *     KeReleaseMutantEx @ 0x1402DEAA0 (KeReleaseMutantEx.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403ABBA0 (AlpcpQueueIoCompletionPort.c)
 *     KeInsertQueueEx @ 0x1403AC260 (KeInsertQueueEx.c)
 *     AlpcpQueueIoCompletion @ 0x1403AC630 (AlpcpQueueIoCompletion.c)
 *     IoSetIoCompletionEx3 @ 0x1403ACAA0 (IoSetIoCompletionEx3.c)
 *     KiWakeOtherQueueWaiters @ 0x1403ACF00 (KiWakeOtherQueueWaiters.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
