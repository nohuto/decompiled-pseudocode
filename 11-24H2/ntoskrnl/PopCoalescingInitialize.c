/*
 * XREFs of PopCoalescingInitialize @ 0x140C2E994
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     PoRegisterCoalescingCallback @ 0x140750DC0 (PoRegisterCoalescingCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1409BA840 (PopUpdateDiskIdleTimeoutSetting.c)
 */

__int64 PopCoalescingInitialize()
{
  __int64 result; // rax

  PopCoalescingState &= 0xF0u;
  PopCoalescingCallbackWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopCoalescingCallbackWorker;
  PopCoalescingCallbackWorkItem.Parameter = 0LL;
  PopCoalescingCallbackWorkItem.List.Flink = 0LL;
  result = PoRegisterCoalescingCallback((__int64)xHalTimerWatchdogStop, 0, &PopCoalescingRegistration, 0LL);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&PopCoalescingTimer.Header.Lock = 8LL;
    PopCoalescingTimer.Header.WaitListHead.Blink = &PopCoalescingTimer.Header.WaitListHead;
    PopCoalescingTimer.Header.WaitListHead.Flink = &PopCoalescingTimer.Header.WaitListHead;
    qword_140F0D1D8 = (__int64)PopCoalesingTimerDpcCallback;
    PopCoalescingTimer.DueTime.QuadPart = 0LL;
    PopCoalescingTimer.Period = 0;
    PopCoalescingTimer.Processor = 0;
    PopCoalescingTimerDpc = 275;
    qword_140F0D1E0 = 0LL;
    qword_140F0D1F8 = 0LL;
    qword_140F0D1D0 = 0LL;
    return PopUpdateDiskIdleTimeoutSetting();
  }
  return result;
}
