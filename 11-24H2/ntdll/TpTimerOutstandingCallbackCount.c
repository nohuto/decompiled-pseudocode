/*
 * XREFs of TpTimerOutstandingCallbackCount @ 0x180087620
 * Callers:
 *     RtlDeleteTimer @ 0x180087440 (RtlDeleteTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x1800F5CD0 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpTimerOutstandingCallbackCount(__int64 a1)
{
  int v2; // eax
  _RTL_SRWLOCK *v3; // rdi
  unsigned int v4; // ebx
  _PEB_LDR_DATA *Ldr; // rcx

  if ( !a1
    || *(_BYTE *)(a1 + 353)
    || (v2 = *(_DWORD *)(a1 + 168), (v2 & 0x10000) != 0)
    || (v2 & 0x20000) != 0
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
    v3 = (_RTL_SRWLOCK *)(a1 + 240);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    v4 = *(_DWORD *)(a1 + 56);
    RtlReleaseSRWLockExclusive(v3);
    return v4;
  }
}
