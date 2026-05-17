/*
 * XREFs of TpWaitOutstandingCallbackCount @ 0x18006E70C
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18006E2B0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpWaitOutstandingCallbackCount(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  int v3; // eax
  volatile signed __int64 *v5; // rdi
  unsigned int v6; // ebx

  v3 = *(_DWORD *)(a1 + 168);
  if ( ((v3 & 0x10000) != 0
     || (v3 & 0x20000) != 0
     || *(__int64 (__fastcall ***)())(a1 + 8) != TppWaitpCleanupGroupMemberVFuncs
     || NtCurrentPeb()->Ldr->ShutdownInProgress)
    && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
  }
  v5 = (volatile signed __int64 *)(a1 + 240);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 240), a2, a3);
  v6 = *(_DWORD *)(a1 + 56);
  RtlReleaseSRWLockExclusive(v5);
  return v6;
}
