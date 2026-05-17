/*
 * XREFs of TpTimerOutstandingCallbackCount @ 0x18006AD40
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x180068CA0 (RtlDeleteTimerQueueEx.c)
 *     RtlDeleteTimer @ 0x18006AB60 (RtlDeleteTimer.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpTimerOutstandingCallbackCount(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v4; // eax
  volatile signed __int64 *v5; // rdi
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
      TppRaiseInvalidParameter(Ldr);
    return 0LL;
  }
  else
  {
    v5 = (volatile signed __int64 *)(a1 + 240);
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 240), 0LL, a3);
    v6 = *(_DWORD *)(a1 + 56);
    RtlReleaseSRWLockExclusive(v5);
    return v6;
  }
}
