/*
 * XREFs of RtlpDereferenceWnfNameSubscription @ 0x18002E530
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18002E1D8 (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004D6B0 (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlpWnfETWEventNameSubRundown @ 0x18002E648 (RtlpWnfETWEventNameSubRundown.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlRbRemoveNode @ 0x180067980 (RtlRbRemoveNode.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     NtUnsubscribeWnfStateChange @ 0x180163C40 (NtUnsubscribeWnfStateChange.c)
 */

void __fastcall RtlpDereferenceWnfNameSubscription(char *BaseAddress)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  __int64 v5; // rcx
  void *v6; // r8

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(qword_1801CD200 + 8));
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)BaseAddress + 11, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 564;
    else
      v5 = 2147353486LL;
    if ( *(_BYTE *)v5 )
      RtlpWnfETWEventNameSubRundown(*((_QWORD *)BaseAddress + 2), BaseAddress);
    NtUnsubscribeWnfStateChange((PCWNF_STATE_NAME)BaseAddress + 2);
    RtlRbRemoveNode((PRTL_RB_TREE)(qword_1801CD200 + 16), (PRTL_BALANCED_NODE)(BaseAddress + 32));
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
    v6 = (void *)*((_QWORD *)BaseAddress + 16);
    if ( v6 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  else
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_1801CD200 + 8));
}
