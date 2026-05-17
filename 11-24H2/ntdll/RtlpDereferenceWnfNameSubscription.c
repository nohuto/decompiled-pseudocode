/*
 * XREFs of RtlpDereferenceWnfNameSubscription @ 0x1800996E0
 * Callers:
 *     RtlpWnfProcessCurrentDescriptor @ 0x180020CB0 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x180099388 (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlRbRemoveNode @ 0x180051DA0 (RtlRbRemoveNode.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpWnfETWEventNameSubRundown @ 0x1800997F8 (RtlpWnfETWEventNameSubRundown.c)
 *     NtUnsubscribeWnfStateChange @ 0x180165880 (NtUnsubscribeWnfStateChange.c)
 */

__int64 __fastcall RtlpDereferenceWnfNameSubscription(
        unsigned __int64 a1,
        volatile signed __int32 **a2,
        unsigned __int64 a3)
{
  volatile signed __int32 **v4; // rdx
  unsigned __int64 v5; // r8
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 v8; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // r8

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(qword_1801CE200 + 8), a2, a3);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 64), v4, v5);
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), 0xFFFFFFFFFFFFFFFFuLL);
  v7 = v6 <= 1;
  v8 = v6 - 1;
  if ( v7 )
  {
    if ( v8 )
      __fastfail(0xEu);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 564;
    else
      v10 = 2147353486LL;
    if ( *(_BYTE *)v10 )
      RtlpWnfETWEventNameSubRundown(*(_QWORD *)(a1 + 16), a1);
    NtUnsubscribeWnfStateChange(a1 + 16);
    RtlRbRemoveNode(qword_1801CE200 + 16, (unsigned __int64 *)(a1 + 32));
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    v11 = *(_QWORD *)(a1 + 128);
    if ( v11 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  else
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
  }
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801CE200 + 8));
}
