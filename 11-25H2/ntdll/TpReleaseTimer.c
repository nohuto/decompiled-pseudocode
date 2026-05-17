/*
 * XREFs of TpReleaseTimer @ 0x18003F060
 * Callers:
 *     RtlDeleteTimer @ 0x18003B680 (RtlDeleteTimer.c)
 *     RtlpInitializeWnf @ 0x1800F9018 (RtlpInitializeWnf.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FCFD0 (RtlDeleteTimerQueueEx.c)
 *     RtlpHpGCTimerEnable @ 0x180143E10 (RtlpHpGCTimerEnable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     TppCancelTimer @ 0x18003FCF0 (TppCancelTimer.c)
 *     TppFreeWait @ 0x180041EB0 (TppFreeWait.c)
 */

void __fastcall TpReleaseTimer(__int64 a1)
{
  int v2; // eax
  signed __int32 v3; // eax
  __int64 v4; // rdx
  char v5; // al
  void (__fastcall *v6)(__int64); // rax
  void *ThreadPoolData; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1
    || *(_BYTE *)(a1 + 353)
    || (v2 = *(_DWORD *)(a1 + 168), (v2 & 0x10000) != 0)
    || (v2 & 0x20000) != 0
    && ((ThreadPoolData = NtCurrentTeb()->ThreadPoolData) == 0LL || *(_QWORD *)(*(_QWORD *)ThreadPoolData + 240LL) != a1)
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppTimerpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
      return;
LABEL_16:
    TppRaiseInvalidParameter();
    return;
  }
  _m_prefetchw((const void *)(a1 + 168));
  v3 = _InterlockedOr((volatile signed __int32 *)(a1 + 168), 0x10000u);
  if ( (v3 & 0x10000) != 0 )
    goto LABEL_16;
  if ( (v3 & 0x30000) == 0 )
  {
    *(_QWORD *)(a1 + 184) = retaddr;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 240));
    v4 = *(_QWORD *)(a1 + 144);
    ++*(_BYTE *)(a1 + 355);
    v5 = TppCancelTimer(a1, v4 + 112, 0LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, -((v5 != 0) + 1)) == (v5 != 0) + 1 )
    {
      v6 = **(void (__fastcall ***)(__int64))(a1 + 8);
      if ( (char *)v6 == (char *)TppFreeWait )
      {
        TppFreeWait(a1);
      }
      else if ( (char *)v6 == (char *)TppTimerpFree )
      {
        TppTimerpFree(a1);
      }
      else
      {
        v6(a1);
      }
    }
  }
}
