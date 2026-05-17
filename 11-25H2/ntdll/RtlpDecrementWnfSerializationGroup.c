/*
 * XREFs of RtlpDecrementWnfSerializationGroup @ 0x180004CA4
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18000481C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpDereferenceWnfUserSubscription @ 0x180004BC0 (RtlpDereferenceWnfUserSubscription.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180042A00 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpDecrementWnfSerializationGroup(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx

  RtlAcquireSRWLockExclusive(qword_1801D0200 + 48);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( !v3 )
    return RtlReleaseSRWLockExclusive(qword_1801D0200 + 48);
  if ( v4 )
    __fastfail(0xEu);
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v6 + 8) != a1 + 8 || (v7 = *(_QWORD **)(a1 + 16), *v7 != a1 + 8) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  RtlReleaseSRWLockExclusive(qword_1801D0200 + 48);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
}
