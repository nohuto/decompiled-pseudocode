/*
 * XREFs of RtlpDereferenceWnfNameSubscription @ 0x180004D50
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x1800049F8 (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180042680 (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlpWnfETWEventNameSubRundown @ 0x180004E68 (RtlpWnfETWEventNameSubRundown.c)
 *     RtlRbRemoveNode @ 0x18000D9E0 (RtlRbRemoveNode.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtUnsubscribeWnfStateChange @ 0x180166E10 (NtUnsubscribeWnfStateChange.c)
 */

void __fastcall RtlpDereferenceWnfNameSubscription(char *BaseAddress)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  __int64 v5; // rcx
  void *v6; // r8

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(qword_1801D0200 + 8));
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
    RtlRbRemoveNode((PRTL_RB_TREE)(qword_1801D0200 + 16), (PRTL_BALANCED_NODE)(BaseAddress + 32));
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
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_1801D0200 + 8));
}
