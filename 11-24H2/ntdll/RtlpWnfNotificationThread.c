/*
 * XREFs of RtlpWnfNotificationThread @ 0x18001FCF0
 * Callers:
 *     TppExecuteWaitCallback @ 0x18001F480 (TppExecuteWaitCallback.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     TpSetWaitEx @ 0x1800200E0 (TpSetWaitEx.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180020CB0 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x180113AC4 (RtlpWnfCalculateAndSetNextTimer.c)
 *     NtGetCompleteWnfStateSubscription @ 0x180163BC0 (NtGetCompleteWnfStateSubscription.c)
 */

void __fastcall RtlpWnfNotificationThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 Heap; // rbx
  int CompleteWnfStateSubscription; // edi
  int v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8[4]; // [rsp+38h] [rbp-20h] BYREF
  int v9; // [rsp+68h] [rbp+10h] BYREF

  v8[0] = -50000000LL;
  Heap = 0LL;
  v7 = 0;
  v9 = 0;
  if ( qword_1801CE200 )
  {
    TpSetWaitEx(a3, a2, 0LL, 0LL);
    while ( 1 )
    {
      if ( !Heap )
      {
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x1030uLL);
        if ( !Heap )
          break;
      }
      CompleteWnfStateSubscription = NtGetCompleteWnfStateSubscription(0LL, 0LL, 0LL, 0LL, Heap, 4144);
      if ( CompleteWnfStateSubscription < 0 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
        if ( CompleteWnfStateSubscription == -2147483622 )
          return;
        break;
      }
      RtlpWnfProcessCurrentDescriptor(Heap, 0LL, &v7, &v9);
      if ( v9 )
        RtlpWnfCalculateAndSetNextTimer();
      if ( !v7 )
        Heap = 0LL;
    }
    TpSetWaitEx(a3, a2, v8, 0LL);
  }
}
