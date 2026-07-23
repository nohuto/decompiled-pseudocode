/*
 * XREFs of RtlpWnfRetryTimerCallback @ 0x180116B70
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180042680 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpGetNextWnfNameSubscription @ 0x180116CD0 (RtlpGetNextWnfNameSubscription.c)
 *     RtlpGetFirstWnfNameSubscription @ 0x180116D24 (RtlpGetFirstWnfNameSubscription.c)
 */

void __fastcall RtlpWnfRetryTimerCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
{
  _RTL_SRWLOCK *v3; // rcx
  _WNF_STATE_NAME *Value; // rdi
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx
  _RTL_SRWLOCK *i; // rax
  _RTL_SRWLOCK *v8; // rbx
  _RTL_SRWLOCK *v9; // rbp
  _DWORD v10[10]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0;
  v10[0] = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_1801D0200 + 8));
  v3 = (_RTL_SRWLOCK *)qword_1801D0200;
  *(_QWORD *)(qword_1801D0200 + 80) = 0LL;
  RtlReleaseSRWLockShared(v3 + 1);
  while ( 1 )
  {
    Value = 0LL;
    v5 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0] + 500000;
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_1801D0200 + 8));
    for ( i = (_RTL_SRWLOCK *)RtlpGetFirstWnfNameSubscription(v6); ; i = (_RTL_SRWLOCK *)RtlpGetNextWnfNameSubscription(v8) )
    {
      v8 = i;
      if ( !i )
        break;
      v9 = i + 8;
      RtlAcquireSRWLockExclusive(i + 8);
      if ( HIDWORD(v8[15].Ptr) == 2 && v5 >= v8[17].Value )
      {
        Value = (_WNF_STATE_NAME *)v8[16].Value;
        v8[16].Value = 0LL;
        HIDWORD(v8[15].Ptr) = 0;
        RtlReleaseSRWLockExclusive(v9);
        break;
      }
      RtlReleaseSRWLockExclusive(v9);
    }
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_1801D0200 + 8));
    if ( !Value )
      break;
    RtlpWnfProcessCurrentDescriptor(Value, 1, &v11, v10);
    if ( v11 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Value);
  }
  RtlpWnfCalculateAndSetNextTimer();
}
