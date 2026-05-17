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

__int64 __fastcall RtlpDereferenceWnfNameSubscription(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 v8; // rax
  __int64 v10; // rcx
  __int64 v11; // r8

  RtlAcquireSRWLockExclusive(qword_1801D0200 + 8);
  RtlAcquireSRWLockExclusive(a1 + 64);
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), 0xFFFFFFFFFFFFFFFFuLL);
  v7 = v6 <= 1;
  v8 = v6 - 1;
  if ( v7 )
  {
    if ( v8 )
      __fastfail(0xEu);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v3, v2, v4, v5) )
      v10 = (__int64)NtCurrentPeb()->SharedData + 564;
    else
      v10 = 2147353486LL;
    if ( *(_BYTE *)v10 )
      RtlpWnfETWEventNameSubRundown(*(_QWORD *)(a1 + 16), a1);
    NtUnsubscribeWnfStateChange(a1 + 16);
    RtlRbRemoveNode(qword_1801D0200 + 16, a1 + 32);
    RtlReleaseSRWLockExclusive(a1 + 64);
    v11 = *(_QWORD *)(a1 + 128);
    if ( v11 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v11);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  }
  else
  {
    RtlReleaseSRWLockExclusive(a1 + 64);
  }
  return RtlReleaseSRWLockExclusive(qword_1801D0200 + 8);
}
