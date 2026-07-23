/*
 * XREFs of RtlpWnfNotificationThread @ 0x180040FB0
 * Callers:
 *     TppExecuteWaitCallback @ 0x180040740 (TppExecuteWaitCallback.c)
 * Callees:
 *     RtlpWnfCalculateAndSetNextTimer @ 0x18003F9AC (RtlpWnfCalculateAndSetNextTimer.c)
 *     TpSetWaitEx @ 0x180041AF0 (TpSetWaitEx.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180042680 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtGetCompleteWnfStateSubscription @ 0x180165150 (NtGetCompleteWnfStateSubscription.c)
 */

void __fastcall RtlpWnfNotificationThread(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WAIT a3)
{
  NTSTATUS CompleteWnfStateSubscription; // edi
  _WNF_DELIVERY_DESCRIPTOR *NewDeliveryDescriptor; // rbx
  LARGE_INTEGER Timeout; // [rsp+38h] [rbp-20h] BYREF

  Timeout.QuadPart = -50000000LL;
  if ( qword_1801D0200 )
  {
    TpSetWaitEx(a3, a2, 0LL, 0LL);
    while ( 1 )
    {
      NewDeliveryDescriptor = (_WNF_DELIVERY_DESCRIPTOR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1030uLL);
      if ( !NewDeliveryDescriptor )
        break;
      CompleteWnfStateSubscription = NtGetCompleteWnfStateSubscription(0LL, 0LL, 0, 0, NewDeliveryDescriptor, 0x1030u);
      if ( CompleteWnfStateSubscription < 0 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, NewDeliveryDescriptor);
        if ( CompleteWnfStateSubscription == -2147483622 )
          return;
        break;
      }
      RtlpWnfProcessCurrentDescriptor(&NewDeliveryDescriptor->SubscriptionId);
    }
    TpSetWaitEx(a3, a2, &Timeout, 0LL);
  }
}
