/*
 * XREFs of RtlpDecrementWnfSerializationGroup @ 0x18002E484
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18002DFFC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpDereferenceWnfUserSubscription @ 0x18002E3A0 (RtlpDereferenceWnfUserSubscription.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004DA30 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpDecrementWnfSerializationGroup(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(qword_1801CD200 + 48));
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v5 + 8) != a1 + 8 || (v6 = *(_QWORD **)(a1 + 16), *v6 != a1 + 8) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_1801CD200 + 48));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
  }
  else
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_1801CD200 + 48));
  }
}
