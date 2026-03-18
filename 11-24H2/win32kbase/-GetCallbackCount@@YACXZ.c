/*
 * XREFs of ?GetCallbackCount@@YACXZ @ 0x1400A5190
 * Callers:
 *     EtwTraceInputQueueUnLocked @ 0x1400A4380 (EtwTraceInputQueueUnLocked.c)
 *     EtwTraceWakeRIT @ 0x1400A43F0 (EtwTraceWakeRIT.c)
 *     EtwTraceBeginInjectMouse @ 0x1400A4430 (EtwTraceBeginInjectMouse.c)
 *     EtwTraceEndInjectMouse @ 0x1400A4490 (EtwTraceEndInjectMouse.c)
 *     EtwTraceInputQueueNoRemoveLocker @ 0x1400A44F0 (EtwTraceInputQueueNoRemoveLocker.c)
 *     EtwTraceInputQueueLockedPeekRecursion @ 0x1400A4560 (EtwTraceInputQueueLockedPeekRecursion.c)
 *     EtwTraceBeginDelegateInputCallback @ 0x1400A45D0 (EtwTraceBeginDelegateInputCallback.c)
 *     EtwTraceEndDelegateInputCallback @ 0x1400A46F0 (EtwTraceEndDelegateInputCallback.c)
 *     EtwTraceEndDelegatedInputWorker @ 0x1400A4820 (EtwTraceEndDelegatedInputWorker.c)
 *     EtwTraceBeginDelegatedInputWorker @ 0x1400A4890 (EtwTraceBeginDelegatedInputWorker.c)
 *     EtwTraceInputQueueLocked @ 0x1400A4AC0 (EtwTraceInputQueueLocked.c)
 *     EtwTraceRetrievePseudoMessage @ 0x1400A4B30 (EtwTraceRetrievePseudoMessage.c)
 *     EtwTraceWakePump @ 0x1400A4BC0 (EtwTraceWakePump.c)
 *     EtwTraceWakeMIT @ 0x1400A4C40 (EtwTraceWakeMIT.c)
 *     EtwTraceQueueMessage @ 0x1400A4C80 (EtwTraceQueueMessage.c)
 *     EtwTraceQueuePostMessage @ 0x1400A4EF8 (EtwTraceQueuePostMessage.c)
 *     EtwTraceBeginRetrieveSendMessage @ 0x1401690C0 (EtwTraceBeginRetrieveSendMessage.c)
 *     EtwTraceBeginSendMessage @ 0x1401691D0 (EtwTraceBeginSendMessage.c)
 *     EtwTraceConvertTimeOutToBlocking @ 0x1401B4260 (EtwTraceConvertTimeOutToBlocking.c)
 *     EtwTracePostInjectedGestureMessage @ 0x1401B4CF0 (EtwTracePostInjectedGestureMessage.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

signed __int8 __fastcall GetCallbackCount(__int64 a1)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v2; // rax

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1);
  if ( CurrentThreadNonPaged && (v2 = *CurrentThreadNonPaged) != 0 )
    return *(_BYTE *)(v2 + 1456);
  else
    return -1;
}
