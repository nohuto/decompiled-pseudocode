/*
 * XREFs of TpTimerOutstandingCallbackCount @ 0x18003B860
 * Callers:
 *     RtlDeleteTimer @ 0x18003B680 (RtlDeleteTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FCFD0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpTimerOutstandingCallbackCount(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  _RTL_SRWLOCK *v5; // rdi
  unsigned int v6; // ebx
  _PEB_LDR_DATA *Ldr; // rcx

  if ( !a1
    || *(_BYTE *)(a1 + 353)
    || (v4 = *(_DWORD *)(a1 + 168), (v4 & 0x10000) != 0)
    || (v4 & 0x20000) != 0
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppTimerpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter(Ldr, 0LL, a3);
    return 0LL;
  }
  else
  {
    v5 = (_RTL_SRWLOCK *)(a1 + 240);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    v6 = *(_DWORD *)(a1 + 56);
    RtlReleaseSRWLockExclusive(v5);
    return v6;
  }
}
