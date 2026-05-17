/*
 * XREFs of RtlpDecrementWnfSerializationGroup @ 0x180099634
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x180021030 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800991AC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpDereferenceWnfUserSubscription @ 0x180099550 (RtlpDereferenceWnfUserSubscription.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpDecrementWnfSerializationGroup(
        unsigned __int64 a1,
        volatile signed __int32 **a2,
        unsigned __int64 a3)
{
  signed __int64 v4; // rax
  bool v5; // cc
  signed __int64 v6; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(qword_1801CE200 + 48), a2, a3);
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  v5 = v4 <= 1;
  v6 = v4 - 1;
  if ( !v5 )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801CE200 + 48));
  if ( v6 )
    __fastfail(0xEu);
  v8 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v8 + 8) != a1 + 8 || (v9 = *(_QWORD **)(a1 + 16), *v9 != a1 + 8) )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801CE200 + 48));
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
