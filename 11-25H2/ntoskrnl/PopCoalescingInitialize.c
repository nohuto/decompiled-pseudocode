/*
 * XREFs of PopCoalescingInitialize @ 0x140C1D890
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     PoRegisterCoalescingCallback @ 0x140744CF0 (PoRegisterCoalescingCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140A8FF7C (PopUpdateDiskIdleTimeoutSetting.c)
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
    qword_140F0CB98 = (__int64)PopCoalesingTimerDpcCallback;
    PopCoalescingTimer.DueTime.QuadPart = 0LL;
    PopCoalescingTimer.Period = 0;
    PopCoalescingTimer.Processor = 0;
    PopCoalescingTimerDpc = 275;
    qword_140F0CBA0 = 0LL;
    qword_140F0CBB8 = 0LL;
    qword_140F0CB90 = 0LL;
    return PopUpdateDiskIdleTimeoutSetting();
  }
  return result;
}
