/*
 * XREFs of TpWaitOutstandingCallbackCount @ 0x18003CC0C
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18003C7B0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpWaitOutstandingCallbackCount(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  volatile signed __int64 *v5; // rdi
  unsigned int v6; // ebx
  _PEB_LDR_DATA *Ldr; // rcx

  v3 = *(_DWORD *)(a1 + 168);
  if ( (v3 & 0x10000) != 0
    || (v3 & 0x20000) != 0
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppWaitpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter(Ldr, a2, a3);
  }
  v5 = (volatile signed __int64 *)(a1 + 240);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 240));
  v6 = *(_DWORD *)(a1 + 56);
  RtlReleaseSRWLockExclusive(v5);
  return v6;
}
