/*
 * XREFs of RtlpWnfRetryTimerCallback @ 0x18010EEB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004D6B0 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpGetFirstWnfNameSubscription @ 0x18010EE70 (RtlpGetFirstWnfNameSubscription.c)
 *     RtlpGetNextWnfNameSubscription @ 0x18010F010 (RtlpGetNextWnfNameSubscription.c)
 */

void __fastcall RtlpWnfRetryTimerCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
{
  _RTL_SRWLOCK *v3; // rcx
  _WNF_STATE_NAME *Value; // rdi
  unsigned __int64 v5; // rsi
  _RTL_SRWLOCK *i; // rax
  _RTL_SRWLOCK *v7; // rbx
  _RTL_SRWLOCK *v8; // rbp
  _DWORD v9[10]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0;
  v9[0] = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_1801CD200 + 8));
  v3 = (_RTL_SRWLOCK *)qword_1801CD200;
  *(_QWORD *)(qword_1801CD200 + 80) = 0LL;
  RtlReleaseSRWLockShared(v3 + 1);
  while ( 1 )
  {
    Value = 0LL;
    v5 = MEMORY[0x7FFE0008] - RtlpFreezeTimeBias - MEMORY[0x7FFE03B0] + 500000;
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_1801CD200 + 8));
    for ( i = (_RTL_SRWLOCK *)RtlpGetFirstWnfNameSubscription(); ; i = (_RTL_SRWLOCK *)RtlpGetNextWnfNameSubscription(v7) )
    {
      v7 = i;
      if ( !i )
        break;
      v8 = i + 8;
      RtlAcquireSRWLockExclusive(i + 8);
      if ( HIDWORD(v7[15].Ptr) == 2 && v5 >= v7[17].Value )
      {
        Value = (_WNF_STATE_NAME *)v7[16].Value;
        v7[16].Value = 0LL;
        HIDWORD(v7[15].Ptr) = 0;
        RtlReleaseSRWLockExclusive(v8);
        break;
      }
      RtlReleaseSRWLockExclusive(v8);
    }
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_1801CD200 + 8));
    if ( !Value )
      break;
    RtlpWnfProcessCurrentDescriptor(Value, 1, &v10, v9);
    if ( v10 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Value);
  }
  RtlpWnfCalculateAndSetNextTimer();
}
